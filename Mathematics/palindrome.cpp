#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m=n;
    int last,rev=0;
    while(m!=0)
   {
    last=m%10;
    rev=rev*10+last;
    m=m/10;
   }
   if(n==rev)
   cout<<"YES";
   else
   cout<<"NO";
}