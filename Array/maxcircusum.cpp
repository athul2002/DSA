#include<iostream>
using namespace std;
int maxsum(int arr[],int n)
{
    int ans=arr[0];
    int maxend=arr[0];
    for(int i=1;i<n;i++)
    {
        maxend=max(arr[i],arr[i]+maxend);
        ans=max(maxend,ans);

    }
    return ans;
}
int maxcircu(int arr[], int n)
{
    int maxnormal = maxsum(arr,n);
    if(maxnormal<0)
    return maxnormal;
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        arr[i]=-arr[i];
    }
    int maxisum;
    maxisum=maxsum(arr,n);
    int final = maxisum+sum;
    return (maxnormal,final);

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<maxcircu(arr,n);

}