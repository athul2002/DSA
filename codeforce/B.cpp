#include<bits/stdc++.h>
using namespace std;

void weather(vector<int>&a ,vector<int>&b,int k)
{
    // map<int,int>mp;
    vector<int>ans;
    vector<int>ans2;
    sort(b.begin(),b.end());
    for(int i=0;i<a.size();i++)
    {
        ans.push_back(a[i]);
    }
    map<int,int>mp;
    sort(ans.begin(),ans.end());
        for(int i=0;i<a.size();i++)
    {
        ans2.push_back(-1);
    }
    for(int i=0;i<a.size();i++)
    {
        if(mp.find(ans[i])==mp.end())
        {
            mp[ans[i]]=b[i];
            ans2[i]=(mp[ans[i]]);
        }
            
        else
        ans2[a[i]]=b[i];
        // ans2.push_back(mp[a[i]]);
    }

    // for(int i=0;i<a.size();i++)
    // {
    //     if(ans2[i]==-1)
        
    // }
    // for(int i=0;i<a.size();i++)
    // {
    //     ans.push_back(mp[a[i]]);
    // }
    for(int i=0;i<ans.size();i++)
    {
    // cout<<"hello0";

        cout<<ans2[i]<<" ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        int k;
        string s;

        cin>>n;
        cin>>k;
        int a1[n];
        int a2[n];
        for(int i=0;i<n;i++)
        {
            cin>>a1[i];
        }        for(int i=0;i<n;i++)
        {
            cin>>a2[i];
        }
        vector<int>a;
        vector<int>b;
        for(int i=0;i<n;i++)
        {
            a.push_back(a1[i]);
        }
        for(int i=0;i<n;i++)
        {
            b.push_back(a2[i]);
        }
        weather(a,b,k);
        t--;
    }
}