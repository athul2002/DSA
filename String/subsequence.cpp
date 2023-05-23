// // Recursive solution
// #include<iostream>
// using namespace std;
// bool isSubsequence(string s1,string s2,int n,int m)
// {
//     if (m==0)
//     {
//         return true;
//     }
//     if( n==0)
//     {
//         return false;
//     }
//     if (s1[n-1]==s2[m-1])
//     {
//         return isSubsequence(s1,s2,n-1,m-1);
//     }
//     else
//         return isSubsequence(s1,s2,n-1,m);

// }

// int main()
// {
//     int n,m;
//     string s1,s2;
//     cin>>s1;
//     cin>>s2;
//     n=s1.length();
//     m=s2.length();
//     cout<<isSubsequence(s1,s2,n,m);
// }

// Iterative solution
#include<iostream>
using namespace std;
bool isSubsequence(string s1,string s2,int n,int m)
{
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s1[i]==s2[j])
        {
            j++;
        }
        if (j==m)
        {
            break;
        }
    }
    return j==m;
}

int main()
{
    int n,m;
    string s1,s2;
    cin>>s1;
    cin>>s2;
    n=s1.length();
    m=s2.length();
    cout<<isSubsequence(s1,s2,n,m);
}