// only works for all non-negative array
#include<iostream>
using namespace std;
bool check(int arr[],int n,int sum)
{
    int i=0;
    int currsum=arr[0],s=0;
    for(int i=1;i<n;i++)
    {
     while(currsum>sum&&s<i-1)
    {
        currsum-=arr[s];
        s++;
    }
    if(currsum==sum)
    return true;
    if(i<n)
    currsum+=arr[i];
    }
   return (currsum==sum);
}
int main()
{
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<check(arr,n,sum);
}