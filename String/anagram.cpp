#include<iostream>
using namespace std;
const int CHAR=256;
bool anagram(string &s1,string &s2)
{
    if(s1.length()!=s2.length())
    {
        return false;
    }
    int arr[CHAR]={0};
    for(int i=0;i<s1.length();i++)
    {
        arr[s1[i]]++;
        arr[s2[i]]--;
    }
    for(int i=0;i<CHAR;i++)
    {
        if(arr[i]!=0)
        return false;
    }
    return true;
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    cout<<anagram(s1,s2);
}