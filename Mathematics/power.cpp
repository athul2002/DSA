#include<iostream>
using namespace std;
int power(int n,int x)
{
    
    if(n==0)
    {
        return 1;
    }
    int temp=power(n,x/2);
    temp=temp*temp;
    if(n%2==0)
    return temp;
    else
    return temp*n;

}
int main()
{
    int n,x;
    cin>>n;
    cin>>x;
    cout<<power(n,x);

}