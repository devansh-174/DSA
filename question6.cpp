/*
Given a Circular linked list. The task is split into two Circular Linked lists. If there are an
odd number of nodes in the given circular linked list then out of the resulting two halved
lists, the first list should have one node more than the second list.
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

void splitCircular(node* head, node*& head1, node*& head2)
{
    if(head == nullptr || head->next == head)
    {
        head1 = head;
        head2 = nullptr;
        return;
    }

    node* slow = head;
    node* fast = head;

    // Move fast pointer 2 steps, slow pointer 1 step
    while(fast->next != head && fast->next->next != head)
    {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Set the heads of two halves
    head1 = head;
    head2 = slow->next;

    // Make first half circular
    slow->next = head1;

    // Make second half circular
    if(fast->next == head)
    {
        fast->next = head2; // even number of nodes
    }
    else
    {
        fast->next->next = head2; // odd number of nodes
    }
}

void printCircular(node* head)
{
    if(head == nullptr)
        return;

    node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while(temp != head);
    cout << endl;
}

int main()
{
    // Creating circular linked list: 1 -> 2 -> 3 -> 4 -> 5 -> back to 1
    node* head = new node{1, nullptr};
    node* n2 = new node{2, nullptr};
    node* n3 = new node{3, nullptr};
    node* n4 = new node{4, nullptr};
    node* n5 = new node{5, nullptr};

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = head; // make circular

    node* head1 = nullptr;
    node* head2 = nullptr;

    splitCircular(head, head1, head2);

    cout << "First half: ";
    printCircular(head1);

    cout << "Second half: ";
    printCircular(head2);

    return 0;
}
