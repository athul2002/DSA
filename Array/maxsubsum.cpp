#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{
    int ans=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(arr[i],maxend+arr[i]);
        ans=max(ans,maxend);
    } 
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<maxsum(arr,n);
}