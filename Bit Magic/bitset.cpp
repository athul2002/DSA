#include<iostream>
using namespace std;
int main()
{
    int n,k;
    cin>>n;
    cin>>k;
    if(n&(1<<(k-1))!=0)
    {
        cout<<"Yes";
    }
    else
    cout<<"No";
}