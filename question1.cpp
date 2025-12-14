/*
Write program using functions for binary tree traversals: Pre-order, In-order and Post
order using a recursive approach.
*/
#include<iostream>
using namespace std ;
struct node{
    int data ;
    node* left ;
    node* right ;
};
// preorder
void preorder(node* head)
{
    node* temp = head ;
    if(temp!=nullptr)
    {
        int k = temp->data ;
        cout << k << " " ;
        preorder(temp->left) ;
        preorder(temp->right);
    }
}
// inorder
void inorder(node* root)
{
    node* temp= root ;
    if(temp!=nullptr)
    {
        inorder(temp->left) ;
        cout<< temp->data << " ";
        inorder(temp->right) ;
    }
}

// postorder
void postorder(node* root)
{
    node* temp = root ;
    if(temp!=nullptr)
    {
        postorder(temp->left);
        postorder(temp->right);
        cout<<temp->data <<" ";
    }
}