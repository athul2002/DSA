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
bool isLoop(Node *head)//by pointer method
{
    Node *temp=new Node(0);
    Node *curr=head;
    while(curr!=NULL)
    {
        if (curr->next==NULL)
        return false;
        if(curr->next==temp)
        return true;

        Node *curr_next=curr->next;
        curr->next=temp;
        curr=curr_next;
    }
    return false;

}
bool isLoop2(Node *head)//by hashing
{
    unordered_set<Node*>s;
    for(Node *curr=head;curr!=NULL;curr=curr->next)
    {
        if(s.find(curr)!=s.end())
        return true;
        s.insert(curr);
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
    // if (isLoop2(head)) 
    //     cout << "Loop found"; 
    // else
    //     cout << "No Loop"; 
	return 0;
}