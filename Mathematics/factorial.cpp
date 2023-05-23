#include<iostream>
using namespace std;

/*int main()
{
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    { 
        fact=fact*i;
          
    }
    cout<<fact;
}
*/
int fact(int n)
{
    if(n==0)
    return 1;
    return n*fact(n-1);

}
int main()
{
    int n;
    cin>>n;
    cout<<fact(n);
}