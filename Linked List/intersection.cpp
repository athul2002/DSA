#include <bits/stdc++.h> 
using namespace std; 

struct Node { 
	int data; 
	Node* next; 
	Node (int x){
	    data=x;
	    next=NULL;
	}
}; 

int getCount(Node* head) 
{ 
    Node* curr = head; 
    int count = 0; 
    while (curr != NULL) { 
        count++; 
        curr = curr->next; 
    } 
    return count; 
} 

int _getIntersection(int d, Node* head1, Node* head2) 
{ 
    Node *curr1=head1;
    Node *curr2=head2;
    for(int i=0;i<d;i++)
    {
        if(curr1==NULL)
        return -1;
        curr1=curr1->next;
    }
    while(curr1!=NULL&&curr2!=NULL)
    {
        if(curr1==curr2)
        return curr1->data;
        curr1=curr1->next;
        curr2=curr2->next;
    }
    return -1;
}

int getIntersection(Node* head1, Node* head2) 
{ 
    int c1 = getCount(head1); 
    int c2 = getCount(head2); 
    int d; 
  
    if (c1 > c2) { 
        d = c1 - c2; 
        return _getIntersection(d, head1, head2); 
    } 
    else { 
        d = c2 - c1; 
        return _getIntersection(d, head2, head1); 
    }
} 

int main() 
{ 
	/* 
		Creation of two linked lists 
	
		1st 3->6->9->15->30 
		2nd 10->15->30 
	
		15 is the intersection point 
	*/

	Node* newNode; 

	Node* head1 = new Node(10); 

	Node* head2 = new Node(3); 

	newNode = new Node(6); 
	head2->next = newNode; 

	newNode = new Node(9); 
	head2->next->next = newNode; 

	newNode = new Node(15); 
	head1->next = newNode; 
	head2->next->next->next = newNode; 

	newNode = new Node(30); 
	head1->next->next = newNode; 

	head1->next->next->next = NULL; 

	cout <<getIntersection(head1, head2); 
} 
