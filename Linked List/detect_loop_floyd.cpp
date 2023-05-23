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
bool isLoop(Node *head)
{
    Node *slow=head,*fast=head;
    // Node *temp=new Node(0);
    // Node *curr=head;
    while(fast!=NULL&&fast->next!=NULL)
    {
        slow=slow->next;
        fast=fast->next->next;
        if (slow==fast)
        return true;
    }
    return false;

}
int main()
{
    Node *head = new Node(10);
    head->next=new Node(20);
    head->next->next=new Node (30);
    head->next->next->next=new Node (40);
    head->next->next->next->next=head->next;
    if (isLoop(head)) 
        cout << "Loop found"; 
    else
        cout << "No Loop"; 
	return 0;
}