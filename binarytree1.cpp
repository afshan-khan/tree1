#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *left,*right;
    node(int data){
        this->data = data;
        this->left=NULL;
        this->right=NULL;
    }
};
void Inorder(node *root){
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data<<"->";
    Inorder(root->right);
}
int main()
{
    node *root = new node(10);
    root->left = new node(7);  root->right = new node(14);
    root->left->left = new node(3); root->right->left = new node(12);
    Inorder(root);
    return 0;
}