#include<iostream>
using namespace std;
void insertion(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
int main()
{
    int arr[4]={1,6,3,2};
    insertion(arr,4);
}