#include<bits/stdc++.h>
using namespace std;
void cycle(int arr[],int n)
{
    for(int cs=0;cs<n-1;cs++)
    {
        int pos=cs;
        int item=arr[cs];
        for(int i=cs+1;i<n;i++)
        {
            if(arr[i]<item)
            {
                pos++;
            }
        }
        swap(arr[pos],item);
        while(pos!=cs)
        {
            pos=cs;
            for(int i=cs+1;i<n;i++)
                {
                   if(arr[i]<item)
                    {
                        pos++;
                    }
                }
            swap(arr[pos],item);
        }
    }
}
int main()
{
    int arr[] = { 20,40,50,10,30 }; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    cycle(arr, n); 
   
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
        
    return 0; 

}