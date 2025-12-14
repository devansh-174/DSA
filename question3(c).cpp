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
int max_depth(node* root)
{
    if(root == nullptr)
    {
        return 0;
    }
    int left_depth = max_depth(root->left);
    int right_depth = max_depth(root->right) ;
    return 1 + max(left_depth , right_depth) ;
}