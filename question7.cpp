/*
Given a linked list, remove the loop if it exists.
*/
node* slow = head ;
node* fast = head ; 
bool loopexist = false ;
while( fast!=nullptr && fast->next!=nullptr)
{
    slow = slow->next;
    fast = fast->next->next ;
    if(slow == fast)
    {
        loopexist = true ;
        break;
    }
}
node* start ; // node at which loop starts 
if(loopexist==true)
{
    slow = head;
    while(slow!=fast)
    {
        slow = slow->next;
        fast =fast->next ;
    }
    start = slow;
    node* back ;
    while(fast->next!= slow)
    {
        fast=fast->next ;
    }
    back = fast;
    back->next = nullptr;  
}




