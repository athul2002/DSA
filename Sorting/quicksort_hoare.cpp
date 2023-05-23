#include<iostream>
using namespace std;
int hoare(int arr[],int l,int h)
{
    int pivot=arr[l];
    int i=l-1;
    int j=h+1;
    bool flag =true;
    while(flag==true)
    {
        do
        {
            i++;
            /* code */
        } while (arr[i]<pivot);
        do
        {
            j--;
            /* code */
        } while (arr[j]>pivot);
        if(i>=j)
        {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}
void quick (int arr[], int l,int h)
{
    if(l<h)
    {
        int p=hoare(arr,l,h);
        quick(arr,l,p);
        quick(arr,p+1,h);
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
    quick(arr,0,n-1);
    for(int i=0;i<n;i++)
    cout<<arr[i];
    
}