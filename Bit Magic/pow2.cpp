#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    if(n==0)
    {
    cout<<"No";
    return 0;
    }
    if((n&(n-1))==0)
    cout<<"Yes";
    else
    cout<<"No";
}