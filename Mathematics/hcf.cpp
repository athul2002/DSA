#include<iostream>
using namespace std;
/*int main()
{
    int n,m;
    cin>>n;
    cin>>m;

    if(n==m)
    cout<<n;
    else if(n>m)
    {
        for(int i=m;i>=0;i--)
        {
            if(n%i==0&&m%i==0)
            {
            cout<<i;
            break;
            }
        }
    }
     else if(n<m)
    {
        for(int i=n;i>=0;i--)
        {
            if(n%i==0&&m%i==0)
            {
            cout<<i;
            break;
            }
        }
    }

}
*/

// efficient below
int hcf(int a , int b)
{
    if (b==0)
    return a;
    else
    return hcf(b,a%b);

}
int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    cout<<hcf(n,m);
}