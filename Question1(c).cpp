/*
Insertion in between (before or after a node having a specific value, say 'Insert a
new Node 35 before/after the Node 30').
*/

node* n = new node(x) ;
node* temp = head ;
while(temp != nullptr && temp->data!=30)
{
temp = temp->next;
}
n->next = temp->next ;
temp->next = n;  
return head ;