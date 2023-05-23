#include<bits/stdc++.h>
using namespace std;

struct Node{
    int key;
    struct Node *left;
    struct Node *right;

    Node (int c)
    {
        key=c;
        left=right=NULL;
    }

};

int main()
{
    Node *root=new Node(10);
    root->left=new Node(15);
    root->right=new Node(20);
	root->left->left=new Node(40);
}