/*
(c) Minimum element of the BST
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left ;
    node* right;
};
void minimum_element(node* root ){
    if(root == nullptr)
        return;
    while(root->left!=nullptr)
    {
        root = root->left ;
    }
    cout<< root->data;
}