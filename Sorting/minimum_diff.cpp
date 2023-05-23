#include <bits/stdc++.h>
using namespace std;
int minidif(int arr[],int n)
{
    int res=INT16_MAX;
    for(int i=1;i<n;i++)
    {
        if((arr[i]-arr[i-1])<res)
        {
            res=arr[i]-arr[i-1];
        }
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
    sort(arr,arr+n);
    cout<<minidif(arr,n);
}