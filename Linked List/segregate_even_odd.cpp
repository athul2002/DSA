#include <bits/stdc++.h> 
using namespace std; 

struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }
};

void printlist(Node *head){
    Node *curr=head;
    while(curr!=NULL){
        cout<<curr->data<<" ";
        curr=curr->next;
    }cout<<endl;
}

Node *segregate(Node *head){
    Node *os=NULL,*oe=NULL,*es=NULL,*ee=NULL;
    Node *curr=head;
    while(curr!=NULL)
    {
        int x=curr->data;
        if(x%2==0)
        {
            if(es==NULL)
            {
                es=curr;
                ee=es;
            }
            else
            {
                ee->next=curr;
                ee=ee->next;
            }
        }
        else{
            if(os==NULL)
            {
                os=curr;
                oe=os;

            }
            else
            {
                oe->next=curr;
                oe=oe->next;
            }
        }
        curr=curr->next;
    }
    if(os==NULL||es==NULL)
    return head;
    ee->next=os;
    oe->next=NULL;
    return es;
}

int main() 
{ 
	Node *head=new Node(17);
	head->next=new Node(15);
	head->next->next=new Node(8);
	head->next->next->next=new Node(12);
	head->next->next->next->next=new Node(10);
	head->next->next->next->next->next=new Node(5);
	head->next->next->next->next->next->next=new Node(4);
	printlist(head);
	head=segregate(head);
	printlist(head);
	return 0;
} 
