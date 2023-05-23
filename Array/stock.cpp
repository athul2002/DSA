#include<iostream>
#include<math.h>
using namespace std;
int profit(int arr[],int start, int end)
{
    int ans=0;
    if(end<=start)
    return 0;

    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(arr[i]<arr[j])
            {

                int currprofit= arr[j]-arr[i]+profit(arr,start,i-1)+profit(arr,j+1,end);
                ans=max(ans,currprofit);
            }
        }
    }
    return ans;

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<profit(arr,0,n-1);
}