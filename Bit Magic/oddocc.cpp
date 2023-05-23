#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,1,2,3,3,4,4,4,4};
        int ans=0;

    for(int i=0;i<9;i++)
    {
        ans=ans^arr[i];

    }
    cout<<ans;
}