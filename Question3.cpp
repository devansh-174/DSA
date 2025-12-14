/*
Write a program to find the middle of a linked list.
Input: 1->2->3->4->5
Output: 3
*/

node* temp = head ;
int count = 0 ; 
while(temp!=nullptr)
{
temp = temp->next;
count++;
}
node* temp1 = head ;
for(int i = 0 ; i<count/2 ; i++)
{
    temp1 = temp1->next ;
}
cout << temp1->data ;
return head ;