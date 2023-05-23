#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    vector<int> v={1,2,3,4,3,6,5};
    sort(v.begin(),v.end());
    for(int x:v)
    {
        cout<<x;
    }
    cout<<"\n";
    sort(v.begin(),v.end(),greater<int>());
    for(int x:v)
    {
        cout<<x;
    }
}