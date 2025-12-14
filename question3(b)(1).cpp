/*
(b) Delete an existing element,
*/

// node to removed has no children 
#include<iostream>
using namespace std;
struct node
{
    int data; 
    node* left;
    node* right;
};
void deleteleaf(node* &root , int key)
{
    node* temp = root ;
    node* parent = root ;
    if(root->data == key)
    {
        delete root;
        root = nullptr ;
        return;
    }
    while(temp!=nullptr)
    {   
        if(temp->data>key)
        {
            parent = temp;
            temp = temp->left;
        }
        else if(temp->data<key){
            parent = temp;
            temp = temp->right;
        }
        else if(temp->data == key && temp->left == nullptr && temp->right==nullptr)
        {
            if(parent->left!=nullptr && parent->left==temp )
            {
                delete parent->left;
                parent->left = nullptr ;
            }
            else if( parent->right!=nullptr && parent->right==temp){
                delete parent->right;
             parent->right = nullptr ;
            }
            cout<< "successfulky removed" ;
            return;
        }
    }
    cout<< "element not found" ;
}




