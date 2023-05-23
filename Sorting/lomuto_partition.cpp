#include<iostream>
using namespace std;
void lomuto(int arr[],int l,int h)
{
    // if pivot not the last element
    // swap(pivot elemnt,last elemnt)
    int piv=arr[h];
    int i=l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<piv)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    for(int i=0;i<=h;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>arr[i];
    }
    lomuto(arr,0,n-1);
    
}