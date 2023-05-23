#include<iostream>
using namespace std;
/*int main()
{
    int n,count=0;
    cin>>n;
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    cout<<count;

}
*/
int numdigit(int n)
{
    if(n==0)
    return 0;
    return 1+numdigit(n/10);

}
int main()
{
    int n;
    cin>>n;
    cout<<numdigit(n);
    
}