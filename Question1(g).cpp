/*
Search for a node and display its position from head.
*/
int n = 45 ; // value to be found 
int count = 0 ;
node* temp = head ;
while (temp != nullptr)
{
    count++;               // visiting current node
    if (temp->data == n)   // found value
        return count;

    temp = temp->next;
}
return -1 ;