#include<iostream>
using namespace std;
void fillLPS(string str, int *lps)
{
    int len=0;
    int n=str.length();
    lps[0]=0;
    int i=1;
    while(i<n)
    {
        if(str[i]==str[len])
        {
            len++;
            lps[i]=len;
            i++;
        }
        else
        {
        if (len==0)
        {
            lps[i]=0;
            i++;
        }
        else 
        {
            len=lps[len-1];
        }
        } 
    }
}
int main()
{
    string str;
    cin>>str;
    int lps[str.length()];
    fillLPS(str,lps);
    for(int i=0;i<str.length();i++)
    cout<<lps[i]<<" ";
}