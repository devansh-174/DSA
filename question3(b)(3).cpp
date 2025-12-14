// to delete a element from bst
#include <iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
};
void del(node *&root, int key)
{
    node *temp = root;
    node *temp_parent = nullptr;
    if (root == nullptr)
    {
        cout << "no bst there";
        return;
    }
    else if (root->data == key)
    {
        if (root->right == nullptr)
        {
            node *child = root->left;
            delete root;
            root = child;
            return;
        }
        else if (root->left == nullptr)
        {
            node *child = root->right;
            delete root;
            root = child;
            return;
        }
        else
        {
            node *child = root->right;
            node *parent = root;
            node *grandparent = root;
            if (child->left != nullptr)
            {
                while (child->left != nullptr)
                {
                    grandparent = parent;
                    parent = child;
                    child = child->left;
                }

                root->data = parent->data;
                if (grandparent->left == parent)
                {
                    grandparent->left = parent->right;
                }
                else
                {
                    grandparent->right = parent->right;
                }
                delete parent;
            }
            else
            {
                node *grandchild;
                child = root->right;
                root->data = child->data;
                grandchild = child->right;
                delete child;
                root->right = grandchild;
                return;
            }
        }
    }
    while (temp != nullptr)
    {
        if (temp->data < key)
        {
            temp_parent = temp;
            temp = temp->right;
        }
        else if (temp->data > key)
        {
            temp_parent = temp;
            temp = temp->left;
        }
        else if (temp->data == key)
        {
            // for leaf node
            if (temp->left == nullptr && temp->right == nullptr && temp_parent->left == temp)
            {
                delete temp;
                temp_parent->left = nullptr;
                return;
            }
            // for leaf node
            else if (temp->left == nullptr && temp->right == nullptr && temp_parent->right == temp)
            {
                delete temp;
                temp_parent->right = nullptr;
                return;
            }
            // for one child
            else if (temp->left == nullptr && temp_parent->right == temp && temp->right != nullptr)
            {
                node *child = temp;
                child = child->right;
                delete temp;
                temp_parent->right = child;
                return;
            }
            // for one child
            else if (temp->right == nullptr && temp_parent->left == temp && temp->left != nullptr)
            {
                node *child = temp;
                child = child->left;
                delete temp;
                temp_parent->left = child;
                return;
            }
            // for two child
            else
            {
                node *child = temp->right;
                node *child_parent = temp;
                while (child->left != nullptr)
                {
                    child_parent = child;
                    child = child->left;
                }
                temp->data = child->data;
                if (child_parent->left == child)
                    child_parent->left = child->right; // attach right subtree
                else
                    child_parent->right = child->right; // successor was right child
                delete child;
                return;
            }
        }
    }
    cout<< "key not there" ;
    return;
}