/*
Develop a menu driven program for the following operations of on a Circular as well
as a Doubly Linked List.
(a) Insertion anywhere in the linked list (As a first node, as a last node, and
after/before a specific node).

*/

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *lastNode = NULL;

// Create Node
Node* createNode(int val) {
    Node *t = new Node;
    t->data = val;
    t->next = NULL;
    return t;
}

// 1. Insert at beginning
void insertAtBeginning(int val) {
    Node *t = createNode(val);

    if (lastNode == NULL) {
        lastNode = t;
        lastNode->next = lastNode;
        return;
    }

    t->next = lastNode->next;
    lastNode->next = t;
}

// 2. Insert at end
void insertAtEnd(int val) {
    Node *t = createNode(val);

    if (lastNode == NULL) {
        lastNode = t;
        lastNode->next = lastNode;
        return;
    }

    t->next = lastNode->next;
    lastNode->next = t;
    lastNode = t;
}

// 3. Insert AFTER a specific node
void insertAfter(int key, int val) {
    if (lastNode == NULL) {
        cout << "List empty\n";
        return;
    }

    Node *p = lastNode->next;

    do {
        if (p->data == key) {
            Node *t = createNode(val);
            t->next = p->next;
            p->next = t;

            if (p == lastNode)
                lastNode = t;

            return;
        }
        p = p->next;
    } while (p != lastNode->next);

    cout << "Key not found\n";
}

// 4. Insert BEFORE a specific node
void insertBefore(int key, int val) {
    if (lastNode == NULL) {
        cout << "List empty\n";
        return;
    }

    Node *curr = lastNode->next;
    Node *prev = lastNode;

    do {
        if (curr->data == key) {
            Node *t = createNode(val);
            t->next = curr;
            prev->next = t;

            // if inserted before first node
            if (curr == lastNode->next)
                ; // nothing extra needed

            return;
        }
        prev = curr;
        curr = curr->next;
    } while (curr != lastNode->next);

    cout << "Key not found\n";
}
   



#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;

// Create node
Node* createNode1(int val) {
    Node *t = new Node;
    t->data = val;
    t->prev = t->next = NULL;
    return t;
}

// 1. Insert at beginning
void insertAtBeginningDLL(int val) {
    Node *t = createNode(val);

    if (head == NULL) {
        head = t;
        return;
    }

    t->next = head;
    head->prev = t;
    head = t;
}

// 2. Insert at end
void insertAtEndDLL(int val) {
    Node *t = createNode(val);

    if (head == NULL) {
        head = t;
        return;
    }

    Node *p = head;
    while (p->next != NULL)
        p = p->next;

    p->next = t;
    t->prev = p;
}

// 3. Insert AFTER a given value
void insertAfterDLL(int key, int val) {
    Node *p = head;

    while (p != NULL) {
        if (p->data == key) {
            Node *t = createNode(val);
            t->next = p->next;
            t->prev = p;

            if (p->next)
                p->next->prev = t;

            p->next = t;
            return;
        }
        p = p->next;
    }

    cout << "Key not found\n";
}

// 4. Insert BEFORE a given value
void insertBeforeDLL(int key, int val) {
    Node *p = head;

    while (p != NULL) {
        if (p->data == key) {
            Node *t = createNode(val);

            t->next = p;
            t->prev = p->prev;

            if (p->prev)
                p->prev->next = t;
            else
                head = t; // new head

            p->prev = t;
            return;
        }
        p = p->next;
    }

    cout << "Key not found\n";
}
