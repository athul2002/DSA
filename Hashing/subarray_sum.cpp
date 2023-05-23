#include <bits/stdc++.h>
using namespace std;

bool GivenSumSubarray(int arr[], int n,int sum)
{
    unordered_set<int> us;
    int prefix_sum = 0;
    for(int i = 0; i < n; i++)
    {
        if(prefix_sum==sum)
        return true;
        prefix_sum += arr[i];
        if(us.find(prefix_sum-sum) != us.end())
          return true;
        us.insert(prefix_sum);
    }
    return false;
}

int main()
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum=1;
    cout << GivenSumSubarray(arr, n,sum);
}