/*
Minimum depth of bst
*/
/*
Maximum depth of BST
*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
int min_depth(node* root)
{
    if(root == nullptr)
        return 0;

    // If left child is NULL, go to right subtree
    if(root->left == nullptr)
        return 1 + min_depth(root->right);

    // If right child is NULL, go to left subtree
    if(root->right == nullptr)
        return 1 + min_depth(root->left);

    // Both children exist
    return 1 + min(min_depth(root->left), min_depth(root->right));
}
