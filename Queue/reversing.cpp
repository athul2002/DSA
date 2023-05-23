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
    stack<int>s;
    while(Queue.empty()==false)
    {
        s.push(Queue.front());
        Queue.pop();
    }

    while(s.empty()==false)
    {
        Queue.push(s.top());
        s.pop();
    }
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