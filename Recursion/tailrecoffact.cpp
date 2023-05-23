#include<iostream>
using namespace std;
int fact(int n,int k)
{
    if(n==0||n==1)
    return k;
    return fact(n-1,k*n);
}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n,1);
}