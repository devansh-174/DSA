/*
Write a program to count the number of occurrences of a given key in a singly linked
list and then delete all the occurrences.
Input: Linked List : 1->2->1->2->1->3->1 , key: 1
Output: Count: 4 , Updated Linked List: 2->2->3.
*/


int key = 1;
int count = 0;
node* temp = head ;
node*previous = nullptr ;
while(temp!=nullptr)
{
    if(temp->data==key)
    {
        if(head->data==key)
        {
            head = temp->next;
            delete temp;
            temp = head;
            count++ ;
        }
        else{
            previous->next = temp->next ;
            delete temp ;
            temp=previous->next; 
            count++;
        }
    }
    else{
        previous = temp ;
        temp = temp->next ;
    }
}
return count ;