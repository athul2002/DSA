#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,5};
    int ans;
    ans=(1^2^3^4^5)^(arr[0]^arr[1]^arr[2]^arr[3]);
    cout<<ans;

}