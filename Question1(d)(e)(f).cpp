/*
Develop a menu driven program for the following operations on a Singly Linked
List.
(d) Deletion from the beginning.
(e) Deletion from the end.
(f) Deletion of a specific node, say 'Delete Node 60')
*/

node* deleteFromBeginning(node* head)
{
    node* temp = head;
    head = head->next;
    delete temp;

    return head;
}


node* deleteFromend(node* head)
{
    node* temp = head;
    while(temp->next!=nullptr)
    {
        temp = temp->next;
    }
    delete temp;

}
node* deleteat(node* head , int index) // instead of index put value for (f) part
{
node* temp = head ;
for (int i = 0; i < index - 1 && temp != nullptr; i++)
{
    temp = temp->next;
}
node* temp1 = temp->next->next; 
temp->next = temp1;
return head;
}