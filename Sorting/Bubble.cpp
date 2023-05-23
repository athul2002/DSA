#include<iostream>
using namespace std;
void bubble(int arr[],int n)
{
    bool swapped = false;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(swapped==false)
        {
            break;
        }
    }
    for (int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}
int main()
{
    int arr[4]={1,6,3,2};
    bubble(arr,4);
}