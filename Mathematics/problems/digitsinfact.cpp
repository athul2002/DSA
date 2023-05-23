#include<iostream>
using namespace std;
 long long Factorial(int N)
    {
         if(N<=1)
         return 1;
         return N*Factorial(N-1);
    }
    int digitsInFactorial(int N)
    {
        long long x=Factorial(N);
        cout<<x<<endl;
        int count =0;
        while(x!=0)
        {
            x=x/10;
            count++;
        }
        return count;
    }
    int main()
    {
        int n;
        cin>>n;
        cout<<digitsInFactorial(n);
    }