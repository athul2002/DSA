#include<iostream>
using namespace std;
int binary(int arr[],int n,int key)
{
    int high=n-1;
    int low=0;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]>key)
        high=mid-1;
        else if(arr[mid]<key)
        low=mid+1;
        else
        {
            if(mid==0||arr[mid-1]!=arr[mid])
            return mid;
            else
            high=mid-1;
        }
    }
    return -1;
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
    int key;
    cin>>key;
    cout<<binary(arr,n,key);
}