#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node *next;
    Node (int x)
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
Node *deleteHead(Node *head)
{
    
    if(head==NULL)
    return NULL;

    else if (head->next==head)
    {
        delete head;
        return NULL;

    }
    else
    {
        
        head->data=head->next->data;
        Node *temp=head->next;
        head->next=head->next->next;
        delete temp;
        return head;
    }
    
}
Node *deleteKth(Node *head,int k)
{
    if (head==NULL)
    return NULL;

    if(k==1)
    return deleteHead(head);
    Node *curr=head;
    for(int i=0;i<k-2;k++)
    {
        curr=curr->next;
    }
    Node *temp=curr->next;
    curr->next=curr->next->next;
    delete temp;
    return head;
    

}
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    // printlist(head);
    int k;
    cin>>k;
    head=deleteKth(head,k);
    printlist(head);
}