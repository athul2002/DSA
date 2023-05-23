#include<bits/stdc++.h>
using namespace std;
int chocolate(int arr[],int n,int m)
{
    int res=INT16_MAX;
    sort(arr,arr+n);
    for(int i=0;i<n-m+1;i++)
    {
        int ans=arr[i+m-1]-arr[i];
        res = min(res,ans);
    }
    return res;
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int m;
    cin>>m;
    cout<<chocolate(arr,n,m);
}