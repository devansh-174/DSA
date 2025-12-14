/*
Develop a menu driven program for the following operations on a Singly Linked
List.
(b) Insertion at the end.
*/

node* n = new node(x) ;
node* temp = head ;
while(temp->next!=nullptr)
{
temp = temp->next;
}
temp.next = n ;
return head ;