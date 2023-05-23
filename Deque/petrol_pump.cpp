// C++ program to find circular tour for a truck
#include <bits/stdc++.h>
using namespace std;
 
// A petrol pump has petrol and distance to next petrol pump
class petrolPump
{
    public:
    int petrol;
    int distance;
};
 

int printTour(petrolPump arr[], int n)
{
    int curr=0;
    
    for(int i=0;i<n;i++)
    {
        
    }
}
 
// Driver code
int main()
{
    petrolPump arr[] = {{6, 4}, {3, 6}, {7, 3}};
 
    int n = sizeof(arr)/sizeof(arr[0]);
    int start = printTour(arr, n);
 
    (start == -1)? cout<<"No solution": cout<<"Start = "<<start;
 
    return 0;
}
