#include<iostream>
using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     {
//         if(n%i==0)
//         cout<<i<<" ";
//     }
// }
void divisors(int n)
{
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            cout<<i<<" ";
            if(i!=n/i)
            cout<<n/i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;
    divisors(n);
}