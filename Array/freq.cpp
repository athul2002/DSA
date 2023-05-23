#include<iostream>
using namespace std;
void freq(int arr[],int n)
{
    int freq=1;
    int i=1;
    while(i<n)
    {
        while(i<n&&arr[i]==arr[i-1])
        {
            freq++;
            i++;
        }
        cout<<"Freq of "<<arr[i-1]<<" is "<<freq<<endl;
        i++;
        freq=1;
        
    }
     if(n==1||(arr[n-1]!=arr[n-2]))
        cout<<"Freq of "<<arr[n-1]<<" is 1"<<endl;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    freq(arr,n);
}