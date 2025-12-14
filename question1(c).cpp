/*
(c) Search for a node.
*/

#include<iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

Node *lastNode = NULL;   // lastNode->next = first node
bool searchCLL(int key) {
    if (lastNode == NULL) {
        cout << "List empty\n";
        return false;
    }

    Node *p = lastNode->next; // first node

    do {
        if (p->data == key) {
            cout << "Node " << key << " found\n";
            return true;
        }
        p = p->next;
    } 
    while (p != lastNode->next);

    cout << "Node " << key << " not found\n";
    return false;
}




/*

struct Node {
    int data;
    Node *prev, *next;
};

Node *head = NULL;
bool searchDLL(int key) {
    if (head == NULL) {
        cout << "List empty\n";
        return false;
    }

    Node *p = head;

    while (p != NULL) {
        if (p->data == key) {
            cout << "Node " << key << " found\n";
            return true;
        }
        p = p->next;
    }

    cout << "Node " << key << " not found\n";
    return false;
}

*/