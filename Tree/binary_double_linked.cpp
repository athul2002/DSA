#include<bits/stdc++.h>
using namespace std;
struct Node{
    int key;
    // Node *next;
    // Node *prev;
    Node *left;
    Node *right;

    Node(int x)
    {
        key=x;
        // prev=NULL;
        // next=NULL;
        left=right=NULL;
    }
};
void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->key<<" ";
        curr=curr->right;
    }cout<<endl;
}
Node *BTToDLL(Node *root)
{
    if(root==NULL)
    return root;
    static Node*prev=NULL;
    Node *head=BTToDLL(root->left);
    if(prev==NULL)
    {
        head=root;
    }
    else
    {
        root->left=prev;
        prev->right=root;
    }
    prev=root;
    BTToDLL(root->right);
    return head;
}
int main() {
	
	Node *root=new Node(10);
	root->left=new Node(5);
	root->right=new Node(20);
	root->right->left=new Node(30);
	root->right->right=new Node(35);
	
	Node *head=BTToDLL(root);
	printlist(head);
}