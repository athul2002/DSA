#include<bits/stdc++.h>
using namespace std;

int miniModules(string s,int n)
{
    set<string>ans;
    string temp="";
    temp+=s[0];
    temp+=s[1];
    ans.insert(temp);
    temp="";
    for(int i=2;i<n;i++)
    {

        if(temp.size()<2)
        {
            temp+=s[i-1];
            temp+=s[i];
            // cout<<temp<<" ";
            ans.insert(temp);
            temp="";

        }


    }
    // for(auto it:ans)
    // cout<<it<<" ";
    return ans.size();
}
int main()
{
    int t;
    cin>>t;
    while(t>0)
    {
        int n;
        string s;

        cin>>n;
        cin>>s;
        cout<<miniModules(s,n)<<endl;
        t--;
    }
}