#include <bits/stdc++.h>
using namespace std;

int getMaxArea(int arr[],int n){
    int res=0;
    int ps[n],ns[n];
    stack <int>s;
    s.push(0);
    for(int i=0;i<n;i++)
    {
        while(s.empty()==false&& arr[s.top()]>=arr[i])
        s.pop();
        if(s.empty())
        ps[i]=-1;
        else
        ps[i]=s.top();
        s.push(i);

    }

    while(s.empty()==false)
    {
        s.pop();
    }

    s.push(n-1);

    for(int i=n-1;i>=0;i--)
    {
        while(s.empty()==false&& arr[s.top()]>=arr[i])
        s.pop();
        if(s.empty())
        ns[i]=n;
        else
        ns[i]=s.top();
        s.push(i);
    }

    for(int i=0;i<n;i++)
    {
        int curr=arr[i];
        curr+=(i-ps[i]-1)*arr[i];
        curr+=(ns[i]-i-1)*arr[i];
        res=max(res,curr);
    }
    return res;
}

int main() 
{ 
    int arr[]={6,2,5,4,1,6,6};
    int n=7;
    cout<<"Maximum Area: "<<getMaxArea(arr,n);
    return 0; 
}
