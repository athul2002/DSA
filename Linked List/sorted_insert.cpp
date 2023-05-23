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
Node *insertSort(Node *head,int k)
{
    Node *temp=new Node(k);
    if (head==NULL)
    {
        return temp;
    }
    if (k<head->data)
    {
        temp->next=head;
        return temp;
    }
    Node *curr=head;
    while(curr->next!=NULL&&curr->next->data<k)
    {
        curr=curr->next;
    }
    // Node *t=curr->next;
    temp->next=curr->next;
    curr->next=temp;
    return head;
}
void printList(Node *head)
{
    if (head==NULL)
    return ;
    Node *p=head;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }

}
int main()
{
    Node *head =new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    printList(head);
    int k;
    cin>>k;
    head=insertSort(head,k);
    printList(head);
}