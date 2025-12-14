/*
Find the intersection node of two singly linked lists that merge into a Y-shaped structure.
The lists may vary in length and have distinct nodes at the beginning, but from the point of
intersection onward, they share the same sequence of nodes. The task is to identify the first
common node where the two lists converge. If the two linked lists have no intersection at all,
return null.
*/
node* curr1;
node* curr2 = head2 ;
while(curr2!=nullptr)
{
    curr1 = head1 ;
    while(curr1!=nullptr && curr1!=curr2)
    {
        curr1 = curr1->next ;
        
    }
    if(curr1==curr2)
        {
            return curr2;  
        }
    curr2 = curr2->next; 
    
}
return nullptr;  // no intersection
     