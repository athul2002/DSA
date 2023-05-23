#include<iostream>
using namespace std;
void merge(int arr[],int arr2[],int m,int n)
{
    int i=0,j=0;
    while(i<m&&j<n)
    {
        if(arr[i]>arr2[j])
        {
            cout<<arr2[j]<<" ";
            j++;
        }
        else
        {
            cout<<arr[i]<<" ";
            i++;
        }
    }
    while(i<m)
    {
        cout<<arr[i]<<" ";
        i++;
    }
    while(j<n)
    {
        cout<<arr2[j]<<" ";
        j++;
    }
}
int main()
{
    int arr[4]={1,2,3,6};
    int arr2[3]={4,20,30};
    merge(arr,arr2,4,3);
}