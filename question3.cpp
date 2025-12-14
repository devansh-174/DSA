/*
3. Write a program to find size of
i. Doubly Linked List.
ii. Circular Linked List.
*/

struct node {
    int data;
    node* next;
    node* previous;   // used only for DLL
};


int sizeDLL(node* head)
{
    int count = 0;
    node* temp = head;

    while(temp != nullptr)
    {
        count++;
        temp = temp->next;
    }

    return count;
}


int sizeCLL(node* head)
{
    if(head == nullptr)
        return 0;

    int count = 1;
    node* temp = head->next;

    while(temp != head)
    {
        count++;
        temp = temp->next;
    }

    return count;
}
