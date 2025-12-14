/*
Display all the node values in a circular linked list, repeating value of head node at the
end too.
Input: 20 → 100 → 40 → 80 → 60,
Output: 20 100 40 80 60 20.
*/
#include <iostream>
using namespace std;

struct node
{
    int data;
    node* next;
};

void display(node* head)
{
    if(head == nullptr)
    {
        return;
    }

    node* temp = head;

    // print until we reach the last node
    while(temp->next != head)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    // print last node
    cout << temp->data << " ";

    // print head again
    cout << head->data;
}

int main()
{
    // Creating circular linked list manually: 20 → 100 → 40 → 80 → 60 → back to 20
    node* head = new node{20, nullptr};
    node* n2 = new node{100, nullptr};
    node* n3 = new node{40, nullptr};
    node* n4 = new node{80, nullptr};
    node* n5 = new node{60, nullptr};

    head->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;
    n5->next = head; // circular

    display(head);

    return 0;
}
