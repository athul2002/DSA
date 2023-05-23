#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }
};
Node *deleteLast(Node *head)
{
    if(head==NULL)return NULL;
        if(head->next==NULL){
        delete head;
        return NULL;
        }
    Node *temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    delete(temp->next);
    temp->next=NULL;
    return head;
    
}
void printList(Node *head)
{
    Node *curr=head;
    while(curr!=NULL)
    {
        cout<<(curr->data)<<" ";
        curr=curr->next;
    }
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head=deleteLast(head);
    printList(head);
}