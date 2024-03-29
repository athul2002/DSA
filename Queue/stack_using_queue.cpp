/* Program to implement a stack using 
two queue */
#include <bits/stdc++.h> 

using namespace std; 

struct  Stack { 

	queue<int> q1, q2; 
	int curr_size; 

public: 
	Stack() 
	{ 
        curr_size=0;
	} 

	void push(int x) 
	{
        curr_size++;
        q2.push(x);
        while(q1.empty()==false)
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int>q=q1;
        q1=q2;
        q2=q;
	} 

	void pop() 
	{ 
        if(q1.empty())
        return;
        q1.pop();
        curr_size--;
	} 

	int top() 
	{ 
        if (q1.empty()) 
			return -1; 
        return q1.front();
	} 

	int size() 
	{ 
        return q1.size();
	} 
}; 

 
int main() 
{ 
	Stack s; 
	s.push(10); 
	s.push(5); 
	s.push(15); 
	s.push(20);

	cout << "current size: " << s.size() << endl; 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 
	s.pop(); 
	cout << s.top() << endl; 

	cout << "current size: " <<  s.size() << endl; 
	return 0; 
} 

