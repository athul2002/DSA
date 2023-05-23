#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x;
    cin>>n;

    int res=1;
    while(n>0)
    {
        if(n%2!=0)
        {
            res=res*x;
        }
        x=x*x;
        n=n/2;
    }
  cout<<res;

}