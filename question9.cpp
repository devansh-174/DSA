/*
Given two polynomial numbers represented by two linked lists. The task is
to add these lists (meaning the coefficients with the same variable powers will be
added).
*/
node* start1 = head1 ;
node* start2 = head2 ;
node* start3 = head3 ;
while(start1!=nullptr && start2!=nullptr)
{
    if(start1->second==start2->second)
    {
        start3->first = start1->first+start2->first ;
        start3->second = start1->second ;
        start3 = start3->next ;
        start2 = start2->next; 
        start1 = start1->next;
    }
    else if(start1->second>start2->second)
    {
        start3->first=start1->first;
        start3->second = start1->second ;
        start3 = start3->next ;
        start1 = start1->next;
    }
    else{
        start3->first=start2->first;
        start3->second = start2->second ;
        start3 = start3->next ;
        start2 = start2->next;   
    }
}
if(start1!=nullptr)
{
    while(start1!=nullptr)
    {
        start3->first=start1->first;
        start3->second = start1->second ;
        start3 = start3->next ;
        start1 = start1->next;
    }
}
else
{
    while(start2!=nullptr)
    {
        start3->first=start2->first;
        start3->second = start2->second ;
        start3 = start3->next ;
        start2 = start2->next;
    }
}
start3->next = nullptr ;