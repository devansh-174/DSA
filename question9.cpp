/*
Given a doubly linked list having exactly one of the node pointing to a random node in the
list, the task is to correct this random pointer in the doubly linked list, such that it points to
the expected node.
*/
/*
Given a doubly linked list having exactly one of the node pointing to a random node 
in the list, the task is to correct this random pointer in the doubly linked list, 
such that it points to the expected node.
*/
struct node
{
    int data ;
    node* next ; 
    node* previous ; 
};
node* correct(node* head){
    node* temp = head ;
    if(temp == nullptr || temp->next == nullptr)
    {
        return head ;
    }
    
    while(temp!=nullptr)
    {
        node* nxt = temp;
        if(temp->next==nullptr)
        {
            break ;
        }
        if(nxt->next->previous == nxt)
        {
            temp = temp->next;
        }
        else{
            nxt->next->previous = nxt ;
            break;
        }

    }
    return head ;
}
