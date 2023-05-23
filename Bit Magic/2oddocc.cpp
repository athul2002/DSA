#include<iostream>
using namespace std;
int main()
{
    int arr[10]={1,1,2,2,3,4,4,5,6,6};
    int ans1=0,ans2=0;
    int xr= 0;
    int z=0;
    for(int i=0;i<10;i++)
    xr=(xr^arr[i]);

    int setbit=(xr&(~(xr-1)));
    
    for(int i=0;i<10;i++)
    {
        if((arr[i]&setbit)!=0)
        {
            ans1=(ans1^arr[i]);
            // cout<<ans1<<" ";
        }
        else
        ans2=ans2^arr[i];
    }
    cout<<ans1<<" "<<ans2;
}