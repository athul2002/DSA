#include<bits/stdc++.h>
using namespace std;
int largestSubarrayWithSumX(int arr[],int n,int sum)
{
    unordered_map<int,int>s;
    int presum=0,res=0;
    for(int i=0;i<n;i++)
    {
        presum+=arr[i];
        if(presum==sum)
        {
            res=i+1;
        }
        if(s.find(presum)==s.end())
        {
            s.insert({presum,i});
        }
        if(s.find(presum-sum)!=s.end())
        {
            res=max(res,i-s[presum-sum]);
        }
    }
    return res;
}
int main()
{
    int arr[] = {8, 3, -7, -4, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = -8;
    
    cout << largestSubarrayWithSumX(arr, n, sum);
    
}