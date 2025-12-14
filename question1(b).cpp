/*
(b) Deletion of a specific node, say 'Delete Node 60'. That mean the node to be
deleted may appear as a head node, last node or a node in between.
*/

#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};

Node *lastNode = NULL;   // lastNode->next is first node

void deleteNodeCLL(int key) {
    if (lastNode == NULL) {
        cout << "List empty\n";
        return;
    }

    Node *curr = lastNode->next; // first node
    Node *prev = lastNode;

    // Case 1: Only one node in list
    if (lastNode == lastNode->next && lastNode->data == key) {
        delete lastNode;
        lastNode = NULL;
        return;
    }

    // Traverse to find node with given key
    do {
        if (curr->data == key) {
            prev->next = curr->next;

            // If deleting last node, move lastNode back
            if (curr == lastNode)
                lastNode = prev;

            delete curr;
            return;
        }

        prev = curr;
        curr = curr->next;
    } while (curr != lastNode->next);

    cout << "Key not found\n";
}



/*
struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;
#include <iostream>
using namespace std;

void deleteNodeDLL(int key) {
    if (head == NULL) {
        cout << "List empty\n";
        return;
    }

    Node *curr = head;

    // search for the node with value = key
    while (curr != NULL && curr->data != key) {
        curr = curr->next;
    }

    if (curr == NULL) {
        cout << "Key not found\n";
        return;
    }

    // Case 1: deleting head node
    if (curr == head) {
        head = curr->next;
        if (head != NULL)
            head->prev = NULL;
    } 
    // Case 2: deleting middle or last
    else {
        if (curr->prev != NULL)
            curr->prev->next = curr->next;
        if (curr->next != NULL)
            curr->next->prev = curr->prev;
    }

    delete curr;
}
*/