#include<iostream>
using namespace std;
void inter(int arr[],int arr2[],int n,int m)
{
   int i=0,j=0;
   while(i<n&&j<m)
   {
    if(i>0&&arr[i]==arr[i-1])
    {
        i++;
        continue;
    }
    if(arr[i]>arr2[j])
    {
        j++;
    }
    else if(arr[i]<arr2[j])
    {
        i++;
    }
    else if(arr[i]==arr2[j])
    {
        cout<<arr[i]<<" ";
        i++;
        j++;
    }
   }

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
    int m;
    cin>>m;
    int arr2[m];
    for(int i=0;i<m;i++)
    {
        cin>>arr2[i];
    }
    inter(arr,arr2,n,m);

}