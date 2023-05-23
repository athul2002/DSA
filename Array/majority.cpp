#include<iostream>
using namespace std;
int majority(int arr[],int n)
{
    int count=1;
    int res=0;
  for(int i=1;i<n;i++)
    {
        if(arr[res]==arr[i])
        count++;
        else
        count--;

        if(count==0)
        {
            res=i;
            count=1;
        }
    }
    count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==arr[res])
        count++;
      
    }
      if(count<=n/2)
        return -1;
    return res;
}
int main()
{
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
int ans=majority(arr,n);
cout<<arr[ans];
}