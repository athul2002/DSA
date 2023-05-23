#include<iostream>
using namespace std;
int subsum(int arr[],int n,int sum)
{
    int ans=0;
    if(n==0)
    {
      if(sum==0)
      return 1;
      else
      return 0;
    }
    return subsum(arr,n-1,sum)+
    subsum(arr,n-1,sum-arr[n-1]);
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
    int sum;
    cin>>sum;
    cout<<subsum(arr,n,sum);
}