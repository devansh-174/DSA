/*
(e) In-order predecessor of a given node the BST
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left;
    node* right;
};
void inorder_predecessor(node* root, int key)
{
    node* temp = root ;
    node* pre = root;
    while(root->data!=key)
    {
        if(root->data>key)
        {
            root= root->left;
        }
        else{
            temp = root ;
            root = root->right;
        }
    }
    if(root->left==nullptr)
    {
        cout << temp->data ;
    }
    else{
        root = root->left ;
        while(root->right!= nullptr)
        {
            root = root->right;
        }
        cout << root->data ;
    }
}