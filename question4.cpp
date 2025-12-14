/*
4. Write a program to check if a doubly linked list of characters is palindrome or not.
*/
#include <iostream>
using namespace std;

struct node {
    char data;
    node* next;
    node* previous;
};

bool isPalindrome(node* head)
{
    if(head == nullptr || head->next == nullptr)
        return true;

    // find last node
    node* tail = head;
    while(tail->next != nullptr)
    {
        tail = tail->next;
    }

    // two pointer check
    node* left = head;
    node* right = tail;

    while(left != right && left->previous != right)
    {
        if(left->data != right->data)
        {
            return false; // mismatch
        }

        left = left->next;
        right = right->previous;
    }

    return true; // all matched
}

int main()
{
    // Example: R → A → D → A → R  (palindrome)
    node* a = new node{'R', nullptr, nullptr};
    node* b = new node{'A', nullptr, a};
    node* c = new node{'D', nullptr, b};
    node* d = new node{'A', nullptr, c};
    node* e = new node{'R', nullptr, d};

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    if(isPalindrome(a))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
