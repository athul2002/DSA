#include<iostream>
using namespace std;
int secondlargr(int arr[],int n)
{
    int largest=0,res=-1;
    for(int i=1;i<n;i++)
    {
        if(arr[i]>arr[largest])
        {
            res=largest;
            largest=i;
        }
        else
        if(arr[i]!=arr[largest])
        {
            if(res==-1||arr[i]>arr[res])
            res=i;
        }
        
    }
    return res;
}
int main()
{
    int n,x;
    int arr[n];
    cin>>n;
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<secondlargr(arr,n);
}