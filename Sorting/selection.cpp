#include<iostream>
using namespace std;
void selection(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++ )
        {
            if (arr[j]<arr[min_ind])
            {
                min_ind=j;
            }
        }
        swap(arr[min_ind],arr[i]);
    }
    for(int i=0;i<n;i++)
        cout<<arr[i];
}
int main()
{
    int arr[4]={1,6,3,2};
    selection(arr,4);
}