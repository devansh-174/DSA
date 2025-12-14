/*
(d) In-order successor of a given node the BST
*/
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
void inorder_successor(node *root, int key)
{
    node* temp = root;
    node* originol = root ;
    while (root->data != key)
    {
        if (root->data < key)
        {
            root = root->right;
        }
        else
        {
            root = root->left;
        }
    }
    if (root->right != nullptr)
    {
        root = root->right;
        while (root->left != nullptr)
        {
            root = root->left;
        }
        cout << root->data << " ";
    }
    else
    {
        
        node *succ = nullptr;
        if(temp==nullptr){
            return ;
        }
        temp = originol ;
        while (temp->data != key)
        {
            if (temp->data < key)
            {
                temp = temp->right;
            }
            else
            {
                succ = temp ;
                temp = temp->left;
            }
        }
        cout << succ->data ;
    }
}