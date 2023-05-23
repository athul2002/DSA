#include<iostream>
using namespace std;
/*int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
    cout<<"NO";
    return 0;
    }
    if(n==2)
    {
    cout<<"YES";
    return 0;
    }
    else
    for(int i=2;i*i<=n;i++) 
    {
        if(n%i==0)
        {
            cout<<"NO";
            return 0;

        }
    }
    cout<<"YES";
}*/
//efficient
int main()
{
    int n;
    cin>>n;
    if(n==1)
    {
        cout<<"NO";
        return 0;

    }
    if(n==2||n==3)
    {
        cout<<"YES";
        return 0;
    }
    if(n%2==0||n%3==0)
    {
        cout<<"NO";
        return 0;
    }
    else
    {
        for(int i=5;i*i<=n;i=i+6)
        {
            if(n%i==0||(n%(i+2)==0))
            {
            cout<<"NO";
            return 0;
            }
        }
    }
    cout<<"YES";
}