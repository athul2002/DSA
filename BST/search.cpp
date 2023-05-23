// recursive & implementation

#include<iostream>
using namespace std;

struct Node{
    int key;
    Node *left,*right;
    Node(int x)
    {
        key=x;
        left=right=NULL;
    }
};

// recursive
bool search1(Node *root,int target)
{
    if(root==NULL)
        return false;

    else if(root->key==target)
        return true;

    else if(root->key<target)
    {
        return search1(root->right,target);
    }
    else
        return search1(root->left,target);

    // return false;
}

// iterative
bool search2(Node *root,int target)
{
    while(root!=NULL)
    {
        if(root->key==target)
        return true;

        else if(root->key<target)
        root=root->right;

        else
        root=root->left;
    }
    return false;
}
int main()
{
	Node *root=new Node(15);
	root->left=new Node(5);
	root->left->left=new Node(3);
	root->right=new Node(20);
	root->right->left=new Node(18);
	root->right->left->left=new Node(16);
	root->right->right=new Node(80);
	int x=16;
	
	if(search1(root,x))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;

	if(search2(root,x))
	    cout<<"Found"<<endl;
	else
	    cout<<"Not Found"<<endl;
}