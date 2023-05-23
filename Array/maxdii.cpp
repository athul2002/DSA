#include<iostream>
#include<math.h>
using namespace std;
void maxdif(int arr[],int n)
{
    int minval=arr[0];
    int res=arr[1]-arr[0];
    for(int i=0;i<n;i++)
    {
        res = max(res,arr[i]-minval);
        minval=min(minval,arr[i]);
    }
    cout<<res;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    maxdif(arr,n);
}