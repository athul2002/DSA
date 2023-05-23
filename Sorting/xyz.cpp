#include<bits/stdc++.h>
using namespace std;
int maximum(int arr[],int n)
{
    int maxi=INT_MIN;
    int mini=INT16_MAX;
    for(int i=0;i<n;i++)
    {
        maxi=max(maxi,arr[i]);
        mini=min(mini,arr[i]);
    }
    return maxi-mini;
}
int main()
{
    int arr[4]={1,2,3,4};
    cout<<maximum(arr,4);
}