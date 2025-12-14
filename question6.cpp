/*
Given a linked list and a positive number K, reverse the nodes in groups of K. 
All the remaining nodes after multiples of k should be left as it is.
*/
node* curr = head1 ;
int k = 3 ;
node* net = head1 ;
int count = 0 ;
node* curr1 = head1 ;
while(curr!=nullptr)
{
    curr = curr->next ;
    count++;
}
int key = int(count/k);
for(int i =0 ; i < key ; i++)
{
    net = net->next->next ;
    if(net->next!=nullptr)
    {
        node*temp = net ; 
        net = curr1 ; 
        curr1 = temp ;
    }
    

}
