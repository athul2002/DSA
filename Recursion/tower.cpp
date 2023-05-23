#include<iostream>
using namespace std;
void tower(int n,char A,char B,char C)
{
    if(n==1)
    {
        cout<<"Move 1 from "<<A<<" to "<<C<<endl;           
        return ;
    }
    tower(n-1,A,C,B); 
    cout<<"Move "<<n<<" from "<<A<<" to "<<C<<endl;
    tower(n-1,B,A,C);

}
int main()
{
    int n;
    cin>>n;
    char A='A',B='B',C='C';
    tower(n,A,B,C);
}