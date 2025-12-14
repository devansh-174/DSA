/*
Given a 2D matrix, the task is to convert it into a doubly-linked list with four pointers
that are next, previous, up, and down, each node of this list should be connected to its
next, previous, up, and down nodes.
*/
struct node{
    int data ;
    node* next ;
    node* previous;
    node* up;
    node* down ;
};

node* matrix(node* head)
{
    node* ptr[3][3] ;

    // create nodes
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            ptr[i][j] = new node() ;
        }
    }

    // now joining them horizontally
    for(int k = 0 ; k < 3 ; k++)
    {
        for(int p = 0 ; p < 2 ; p++ )
        {
            ptr[k][p]->next = ptr[k][p+1] ;
            ptr[k][p+1]->previous = ptr[k][p] ;
        }
    }

    // joining them vertically
    for(int k = 0 ; k < 2 ; k++)
    {
        for(int p = 0 ; p < 3 ; p++ )
        {
            ptr[k][p]->down = ptr[k+1][p] ;
            ptr[k+1][p]->up = ptr[k][p] ;
        }
    }

    return ptr[0][0] ;
}
