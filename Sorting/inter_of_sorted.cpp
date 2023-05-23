#include<iostream>
using namespace std;
void inter(int arr[],int arr2[],int n,int m)
{
    for(int i=0;i<n;i++)
    {
        if(i>0&&arr[i]==arr[i-1])
        {
            continue;
        }
        for(int j=0;j<m;j++)
        {
            if(arr[i]==arr2[j])
            {
                cout<<arr[i]<<" ";
                break;
            }
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