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
Node *deleteEnd(Node *head)
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
int main()
{
    Node *head=new Node(10);
    head->next=new Node(20);
    head->next->next=new Node(30);
    head->next->next->next=head;
    // printlist(head);
    head=deleteEnd(head);
    printlist(head);
}