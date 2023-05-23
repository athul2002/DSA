#include<iostream>
using namespace std;
int lomuto(int arr[],int l,int h)
{
    int pivot=arr[h];
    int j=l-1;
    for(int i=l;i<=h-1;i++)
    {
        if(arr[i]<pivot)
        {
            j++;
            swap(arr[j],arr[i]);
        }
    }
    swap(arr[j+1],arr[h]);
    return j+1;
}
int smallest(int arr[],int n,int k)
{
    int l=0,h=n-1;
    while(l<=h)
    {
        int p=lomuto(arr,l,h);
        if(p==k-1)
        {
            return arr[p];
        }
        else if (p>k-1)
        {
            h=p-1;
        }
        else
        l=p+1;
        
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int k;
    cin>>k;
    cout<<smallest(arr,n,k);
}