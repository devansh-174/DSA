/*
Given a linked list, and an integer k, rotate the list to the left by k positions and return
the updated head.
*/
#include <iterator>
node* temp = head ;
node* start ;
node* part = head ;
int key = 4 ;
for(int i = 0 ; i < key ; i++)
{
    temp= temp->next;
}
start =  temp ;
node* last = start ;
while(last->next!=nullptr)
{
    last = last->next;
}
last->next = head ;
for(int i = 0 ; i < key ; i++)
{
    part = part->next ;
}
part->next = nullptr ;