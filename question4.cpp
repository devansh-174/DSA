/*
Write a program to reverse a linked list.
Input: 1->2->3->4->NULL
Output: 4->3->2->1->NULL
*/
    node* prev = nullptr;
    node* curr = head;
    node* next = nullptr;
while(curr!=nullptr)
{
    next = curr->next;   
    curr->next = prev;   
    prev = curr;         
    curr = next; 
}
head = prev; 
return head;
