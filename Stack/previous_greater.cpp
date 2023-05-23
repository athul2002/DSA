#include<bits/stdc++.h>
using namespace std;

void printGreater(int arr[],int n)
{
    stack<int>s;
    s.push(arr[0]);
    cout<<-1<<" ";

    for(int i=0;i<n;i++)
    {
        while(s.empty()==false && s.top()<=arr[i])
        {
            s.pop();
        }

        if(s.empty())
        cout<<-1<<" ";
        else
        cout<<s.top()<<" ";
        s.push(arr[i]);
    }

}
int main() 
{ 
    int arr[]={18,12,13,14,11,16};
    int n=6;
    printGreater(arr,n);
    return 0; 
}