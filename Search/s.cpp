//{ Driver Code Starts
// A C++ program to print elements with count more than n/k

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find all elements in array that appear more than n/k times.
    int countOccurence(int arr[], int n, int k) {
        vector<int>v;
        sort(arr,arr+n);
        int count=1;
        
        for(int i=0;i<n-1;i++)
        {
            if(arr[i]==arr[i+1])
            {
                count++;
    
            }
            if(count>n/k)
            {
                
               v.push_back(arr[i]);
            }
            
            
            if(arr[i]!=arr[i+1])
            count=1;
        }
        int ans=0;
     
        for(int i=0;i<v.size()-1;i++)
        {
            if(v[i]!=v[i+1])
            ans++;
        }
        return ans;
    }
};


//{ Driver Code Starts.
int main() {
    int t, k;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;

        int arr[n];

        for (i = 0; i < n; i++) cin >> arr[i];
        cin >> k;
        Solution obj;
        cout << obj.countOccurence(arr, n, k) << endl;
    }
    return 0;
}

// } Driver Code Ends