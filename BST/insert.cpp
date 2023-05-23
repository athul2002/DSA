#include <bits/stdc++.h>
using namespace std;

struct Node  
{ 
  int key; 
  struct Node *left; 
  struct Node *right; 
  Node(int k){
      key=k;
      left=right=NULL;
  }
};
// recursive
Node *insert1(Node *root, int x){
    if(root==NULL)
    {
        root=new Node(x);
        return root;

    }
    else if(root->key > x)
    {
        root->left = insert1(root->left,x);
    }
    else
        root->right = insert1(root->right,x);

    return root;
} 
// iterative
Node *insert2(Node *root, int x){
    Node *temp= new Node(x);
    Node *curr=root,*parent=NULL;

    while(curr!=NULL)
    {
        parent=curr;
        if(curr->key<x)
        curr=curr->right;
        else if(curr->key>x)
        curr=curr->left;
        else
        return root;
    }
    if(parent==NULL)
    return temp;

    if(parent->key>x)
    {
        parent->left=temp;
    }
    else
    parent->right=temp;

    return root;
} 
void inorder(Node *root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->key<<" ";
        inorder(root->right);    
    }
} 
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(15);
	root->right->left=new Node(12);
	root->right->right=new Node(18);
	int x=20;
	
	root=insert1(root,x);
	inorder(root);	
	root=insert2(root,x);
	inorder(root);
}