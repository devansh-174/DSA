/*
Write a program to check if a linked list is Circular Linked List or not.
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

bool isCircular(node* head)
{
    if(head == nullptr)
        return false;

    node* temp = head->next;

    while(temp != nullptr && temp != head)
    {
        temp = temp->next;
    }

    if(temp == head)
        return true;
    else
        return false;
}

int main()
{
    // Example 1: Circular Linked List
    node* a = new node{10, nullptr};
    node* b = new node{20, nullptr};
    node* c = new node{30, nullptr};

    a->next = b;
    b->next = c;
    c->next = a;   // circular

    cout << "List 1: ";
    if(isCircular(a))
        cout << "Circular" << endl;
    else
        cout << "Not Circular" << endl;


    // Example 2: Not Circular Linked List
    node* x = new node{1, nullptr};
    node* y = new node{2, nullptr};
    node* z = new node{3, nullptr};

    x->next = y;
    y->next = z;
    z->next = nullptr;  // not circular

    cout << "List 2: ";
    if(isCircular(x))
        cout << "Circular" << endl;
    else
        cout << "Not Circular" << endl;

    return 0;
}
