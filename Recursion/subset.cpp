#include<iostream>
using namespace std;
void subset(string s,string cur=" ",int i=0)
{
    if(i==s.size())
    {
        cout<<cur<<" ";
        return ;
    }
    subset(s,cur,i+1);
    subset(s,cur+s[i],i+1);

}
int main()
{
    string s;
    cin>>s;
    subset(s);
}