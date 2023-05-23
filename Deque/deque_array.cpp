struct Deque{
    int *arr;
    int cap,size,front;

    Deque(int c)
    {
        arr=new int[c];
        cap=c;
        front=0;
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
    void deleteFront()
    {
        if(isEmpty())
        return;
        front=(front+1)%cap;
        size--;
    }
    void insertRear(int x)
    {
        if(isFull())
        return;
        int new_rear=(front+size)%cap;
        arr[new_rear]=x;
        size++;

    }
    void insertFront(int x)
    {
        if(isFull())
        return;
        front = (front-1+cap)%cap;
        arr[front]=x;
        size++;
    }
    void deleteRear()
    {
        if(isEmpty())
        return;
        size--;
    }
    int getFront()
    {
        if(isEmpty())
        return -1;
        else return front;
    }
    int getRear()
    {
        if(isEmpty())
        return -1;
        else return (front+size-1)%cap;
    }
};