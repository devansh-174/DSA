/*
(b) Maximum element of the BST
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left ;
    node* right;
};
void maximum_element(node* root ){
    if(root == nullptr)
        return;
    while(root->right!=nullptr)
    {
        root = root->right ;
    }
    cout<< root->data;
}