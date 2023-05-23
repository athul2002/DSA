// iterative soln
#include<bits/stdc++.h>
using namespace std;

void print(queue<int>&Queue)
{
	while (!Queue.empty()) { 
		cout << Queue.front() << " "; 
		Queue.pop(); 
	} 
}
void reverse(queue<int>&Queue)
{
    if(Queue.empty())
    return;
    int x=Queue.front();
    Queue.pop();
    reverse(Queue);
    Queue.push(x);
}
int main()
{
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reverse(q);
    print(q);
}