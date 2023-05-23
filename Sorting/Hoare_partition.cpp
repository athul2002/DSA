// pivot is first elemnt
#include<iostream>
using namespace std;
void hoare(int arr[],int l,int h)
{
    // if pivot not the last element
    // swap(pivot elemnt,last elemnt)
    int piv=arr[l];
    int j=h+1;
    int i=l-1;
    bool flag=true;
    while(flag==true)
    {
        do
        {
            i++;
        } while (arr[i]<piv);
        do
        {
            j--;
        } while (arr[j]>piv);
        if(i>=j)
        {
        swap(arr[j],arr[i]);
           flag=false;
        }
        
        swap(arr[j],arr[i]);
    }
    for (int i = 0; i <=h; i++)
    {
    cout<<arr[i]<<" ";
    }
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
    hoare(arr,0,n-1);
}