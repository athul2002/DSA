#include<iostream>
using namespace std;

/*
int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
    }
    int count=0;
    while(fact%10==0)
    {
        fact=fact/10;
        count++;
    }
    cout<<count;
}
*/

//efficient below
int main()
{
    int n;
    cin>>n;
    int count=0;
    for(int i=5;i<=n;i=i*5)
    {
        count=count+n/i;
    }
    cout<<count;
}