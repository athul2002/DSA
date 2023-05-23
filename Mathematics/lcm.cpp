#include<iostream>
#include <math.h>
using namespace std;
/*int main()
{
    int n,m;
    cin>>n;
    cin>>m;
    int x=max(n,m);
    while(x%m!=0||x%n!=0)
    {
        x++;

    }
    cout<<x;
}
*/
// efficient
int hcf(int a, int b)
{
    if(b==0)
    return a;
    return hcf(b,a%b);
}
int lcm(int a, int b)
{
    return (a*b)/hcf(a,b);
}
int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    cout<<lcm(a,b);
}