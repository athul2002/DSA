#include <bits/stdc++.h> 
using namespace std; 

struct Queue{
    int *arr;
    int cap,size,front;

    Queue(int c)
    {
        arr=new int[c];
        cap=c;
        front =0;
        size=0;
    }
    bool isFull()
    {
        return (cap==size);
    }
    bool isEmpty()
    {
        return (size==0);
    }    
    int getFront()
    {
        if (isEmpty())
        return -1;
        else
        return front;
    }
    int getRear()
    {
        if(isEmpty())
        {
            return -1;
        }
        else
        return (front+size-1)%cap;
    }
    void enqueue(int x)
    {
        if(isFull())
        return ;
        int rear=getRear();
        rear=(rear+1)%cap;
        arr[rear]=x;
        size++;
    }
    void deque(int x)
    {
        if(isEmpty())
        return ;
        // int rear=getRear();
        front=(front+1)%cap;
        // arr[front]=x;
        size--;
    }
};