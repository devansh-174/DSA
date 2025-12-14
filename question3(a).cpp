/*
3. Write a program for binary search tree (BST) having functions for the following
operations:
(a) Insert an element (no duplicates are allowed),
*/
#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
void insert_data(node* &root, int key)
{
    if (root == nullptr)
    {
        root = new node();
        root->data = key;
        root->left = root->right = nullptr;
        return;
    }
    node *parent = root;
    node *curr = root;
    while (curr != nullptr)
    {
        parent = curr;
        if (curr->data == key)
            return;
        if (key > curr->data)
        {
            curr = curr->right;
        }
        else
        {
            curr = curr->left;
        }
    }
    if (parent->data < key)
    {
        parent->right = new node();
        parent->right->data = key;
        parent->right->left = parent->right->right = nullptr;
    }
    else
    {
        parent->left = new node();
        parent->left->data = key;
        parent->left->left = parent->left->right = nullptr;
    }
}

// insert an element
void insert(node* &root, int key)
{
    node* parent = root;
    node* temp= root;
    if(key == -1)
    {
        return;
    }
    if (temp == nullptr)
    {
        root = new node();
        root->data = key;
        root->left = nullptr ;
        root->right = nullptr ;
        return;
    }
    else
    {
        while (temp!=nullptr)
        {
            parent = temp;
            if (temp->data < key)
            {
                temp = temp->right;
            }
            else if (temp->data > key)
            {
                temp = temp->left;
            }
            else
            {
                return;
            }
        }
    }
    if(key > parent->data)
    {
      parent->right = new node() ;
      parent->right->data = key ;  
      parent->right->left = nullptr ;
      parent->right->right = nullptr ;
    }
    else{
        parent->left = new node();
        parent->left->data = key ; 
        parent->left->left = nullptr ;
        parent->left->right = nullptr ;
    }
}

int main()
{
    node* t = nullptr;
    int x ; 
    while(true)
    {
        cin>>x;
        if(x==-1)
        break;
        insert(t,x);
        insert_data(t, x);
    }
    return 0 ;
}