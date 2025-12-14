/*
2. Implement following functions for Binary Search Trees
(a) Search a given item (Recursive & Non-Recursive)
*/
#include<iostream>
using namespace std;
struct node{
    int data;
    node* left ;
    node* right;
};
void search_recursive(node* root ,int key )
{
    if(root == nullptr)
    {
        cout<< "not found" ;
        return;
    }
    if(root->data ==key)
    {
        cout<<"found" ;
        return;
    }
    else if(root->data>key)
        {
            search_recursive(root->left , key) ;
        }
    else{
        search_recursive(root->right,key) ;
    }
}

void search_notrecursive(node* root ,int key )
{
    while(root!= nullptr)
    {
    if(root->data == key)
    {
        cout<< "found" ;
        return;
    }
    else if(root->data>key)
        {
            root = root->left ;
        }
    else{
        root =root->right ;
    }
    }
    cout <<" not found" ;
    
}