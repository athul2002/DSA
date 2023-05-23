// thet(n) time and theta(d) auxi space - first
// theta(n) time and theta(1) space - second in note

#include<iostream>
using namespace std;
void first(int arr[],int n,int d)
{
    int temp[d];
    for(int i=0;i<d;i++)
    temp[i]=arr[i];
    for(int i=d;i<n;i++)
    arr[i-d]=arr[i];
    for(int i=0;i<d;i++)
    arr[n-i-d]=temp[i];

}

int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    first(arr,n,d);
}