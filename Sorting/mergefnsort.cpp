#include<iostream>
using namespace std;
void merge(int arr[],int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[mid+i+1];
    }
    int i=0,j=0,k=0;
    while(i<n1&&j<n2)
    {
        if(left[i]>right[j])
        {
            cout<<right[j]<<" ";
            j++;
        }
        else
        {
            cout<<left[i]<<" ";
            i++;
        }
    }
    while(i<n1)
    {
        cout<<left[i]<<" ";
        i++;
    }
    while(j<n2)
    {
        cout<<right[j]<<" ";
        j++;
    }
}
int main()
{
    int arr[8]={1,2,3,6,2,3,4,5};
    merge(arr,0,3,7);
}