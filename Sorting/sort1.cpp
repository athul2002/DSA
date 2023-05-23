#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n=9;
    int arr[n]={1,2,3,1,4,3,5,9,6};
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
    cout<<"\n";
    sort(arr,arr+n,greater<int>());
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}