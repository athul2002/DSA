#include<bits/stdc++.h>
using namespace std;

void nextGreater(int arr[],int n)
{
    stack <int>s;
    vector<int>ans;

    s.push(arr[n-1]);
    ans.push_back(-1);
    for(int i=n-2;i>=0;i--)
    {
        while(s.empty()==false&&s.top()<=arr[i])
        {
            s.pop();
        }
        if(s.empty())
        {
            ans.push_back(-1);
        }
        else
        ans.push_back(s.top());
        s.push(arr[i]);

    }
    reverse(ans.begin(),ans.end());
    for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";
}
int main() 
{ 
    int arr[]={5,15,10,8,6,12,9,18};
    int n=8;
    nextGreater(arr,n);
    return 0; 
}