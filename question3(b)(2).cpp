// node to removed has one child
#include<iostream>
using namespace std;
struct node
{
    int data; 
    node* left ;
    node* right;
};
void delete_one_child_node(node* &root , int key)
{
    node* temp = root;
    node* parent = nullptr;
    if(root==nullptr)
    {
        cout<< "no data avaliable" ;
        return;
    }
    if(root->data==key)
    {
        if(root->left==nullptr&& root->right==nullptr)
        {   
            delete root ;
            root = nullptr;
            return;
        }
        else if(root->right==nullptr&& root->left!=nullptr)
        {
            node* child = root->left;
            delete root;
            root = child ;
            return;
        }
        else{
            node* child = root->right;
            delete root;
            root = child;
            return;
        }
    }
    while(temp!= nullptr)
    {
        if(temp->data<key)
        {
            parent = temp;
            temp = temp-> right;
        }
        else if(temp->data> key)
        {
            parent = temp;
            temp = temp->left;
        }
        else if(temp->data == key)
        {
            node* to_delete = temp;
            if(parent->right == to_delete)
            {
                if(to_delete->right==nullptr)
                {
                    temp = to_delete->left;
                    delete to_delete;
                    parent->right = temp;
                    return;
                }
                else{
                    temp = to_delete->right;
                    delete to_delete;
                    parent->right = temp;
                    return;
                }
            }
            else{
                if(to_delete->right==nullptr)
                {
                    temp = to_delete->left;
                    delete to_delete;
                    parent->left = temp;
                    return;
                }
                else{
                    temp = to_delete->right;
                    delete to_delete;
                    parent->left = temp;
                    return;
                }
            }
        }
    }
    cout << "key not there" ;

}

