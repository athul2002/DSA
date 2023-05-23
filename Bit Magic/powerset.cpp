#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    string x="abc";
    int n=x.size();
    int powsize=pow(2,n);
    for(int counter=0;counter<powsize;counter++)
    {
        for(int j=0;j<n;j++)
        {
            if((counter&(1<<j))!=0)
            {
                cout<<x[j];
            }
        }
            cout<<"\n";

    }



}