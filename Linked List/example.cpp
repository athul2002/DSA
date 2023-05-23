#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;
    Node(int x)
    {
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
int main()
{
    int arr[]={1,2,3,4};
    Node *head=new Node(arr[0]);
    // head->next=new Node(arr[1]);
    // head->next->next=new Node(arr[2]);
    // head->next->next->next=new Node(arr[3]);
    Node *temp=head;
    for(int i=1;i<4;i++)
    {
        Node *curr=new Node(arr[i]);
        temp->next=curr;
        temp=curr;
    }
    printlist(head);
    }