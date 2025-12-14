/*
Write a program to determine whether a given binary tree is a BST or not.
*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
bool correct(node* root)
{
    if(root == nullptr)
        return true;

    if(root->left != nullptr && root->left->data >= root->data)
        return false;

    if(root->right != nullptr && root->right->data <= root->data)
        return false;

    return correct(root->left) && correct(root->right);
}
