/*
Given a Doubly linked list and Circular singly linked list containing N nodes, the task is
to remove all the nodes from each list which contains elements whose parity is even.
*/
#include<iostream>
using namespace std ;

int countOnes(int x) {
    int c = 0;
    while(x > 0) {
        if(x & 1) c++;
        x >>= 1;
    }
    return c;
}

node* removeEvenParityDLL(node* head)
{
    if(head == nullptr)
        return nullptr;

    node* temp = head;

    // Fix head first if needed
    while(temp != nullptr && countOnes(temp->data) % 2 == 0)
    {
        node* del = temp;
        temp = temp->next;
        if(temp != nullptr)
            temp->previous = nullptr;
        delete del;
    }

    head = temp;

    // Normal deletion inside DLL
    while(temp != nullptr)
    {
        if(countOnes(temp->data) % 2 == 0)  // even parity → remove
        {
            node* del = temp;

            if(temp->previous)
                temp->previous->next = temp->next;

            if(temp->next)
                temp->next->previous = temp->previous;

            temp = temp->next;
            delete del;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}



node* removeEvenParityDLL(node* head)
{
    if(head == nullptr)
        return nullptr;

    node* temp = head;

    // Fix head first if needed
    while(temp != nullptr && countOnes(temp->data) % 2 == 0)
    {
        node* del = temp;
        temp = temp->next;
        if(temp != nullptr)
            temp->previous = nullptr;
        delete del;
    }

    head = temp;

    // Normal deletion inside DLL
    while(temp != nullptr)
    {
        if(countOnes(temp->data) % 2 == 0)  // even parity → remove
        {
            node* del = temp;

            if(temp->previous)
                temp->previous->next = temp->next;

            if(temp->next)
                temp->next->previous = temp->previous;

            temp = temp->next;
            delete del;
        }
        else
        {
            temp = temp->next;
        }
    }

    return head;
}
