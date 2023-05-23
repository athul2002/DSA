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

void printlist(Node *head)
{
    if(head==NULL)
    return;
    Node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}
Node *insertEnd(Node *head,int x)
{
    Node *temp=new Node(x);
    if(head==NULL)
    return temp;

    else
    {
        // Naive solution below
        // Node *p=head;
        // while(p->next!=head)
        // {
        //     p=p->next;
        // }
        // p->next=temp;
        // temp->next=head;
        // return head;
        temp->next=head->next;
        head->next=temp;
        int t=head->data;
        head->data=temp->data;
        temp->data=t;
        return temp;
    }
    
}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=head;
    // printlist(head);
    head= insertEnd(head,30);
    printlist(head);
}