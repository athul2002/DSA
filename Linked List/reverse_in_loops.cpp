#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node *next;
    int data;
    Node (int x)
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
Node *reverseLoop(Node *head,int k)
{
        Node *curr=head,*prevFirst=NULL;
    bool isFirstPass=true;
    while(curr!=NULL){
        Node *first=curr,*prev=NULL;
        int count=0;
        while(curr!=NULL&&count<k){
        Node *next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
        }
        if(isFirstPass){head=prev;isFirstPass=false;}
        else{prevFirst->next=prev;}
        prevFirst=first;
    }
    return head;
    // Node *curr=head,*prevFirst=NULL;
    //     bool isPass=true;

    // while(curr!=NULL)
    // {
    //     Node *prev=NULL,*first=curr;
    //     int count=0;
    //     while(curr!=NULL && count<k)
    //     {
    //         Node *next=curr->next;
    //         curr->next=prev;
    //         prev=curr;
    //         curr=next;
    //         count++;
    //     }
    //     if(isPass)
    //     {
    //         head=prev;
    //         isPass=false;
    //     }
    //     else
    //     {
    //         prevFirst->next=prev;
    //     }

    // }
    //     return head;

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=new Node(40);
    head->next->next->next->next=new Node(50);
    head->next->next->next->next->next=new Node(60);
    head= reverseLoop(head,3);
    printlist(head);
}