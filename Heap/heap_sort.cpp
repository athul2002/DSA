#include <iostream> 
using namespace std; 


void heapify(int arr[], int n, int i) 
{ 
	// cout << "Sorted array is \n"; 

    int largest=i;
    int lt=2*i+1;
    int rt=2*i+2;
    if(lt<n && arr[lt]>arr[largest])
        largest=lt;

    if(rt<n && arr[rt]>arr[largest])
        largest=rt;

    if(largest!=i)
    {
	// cout << "Sorted array is \n"; 

        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
	// cout << "Sorted array is \n"; 

} 

void buildheap(int arr[],int n){
    for (int i = n / 2 - 1; i >= 0; i--)
    heapify(arr,n,i);
}
void heapSort(int arr[], int n) 
{  

    buildheap(arr,n);
    for(int i=n-1;i>0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
} 

void printArray(int arr[], int n) 
{ 

	for (int i=0; i<n; ++i) 
		cout << arr[i] << " "; 
	cout << "\n"; 
} 
 
int main() 
{ 
	int arr[] = {12, 11, 13, 5, 6, 7}; 
	int n = sizeof(arr)/sizeof(arr[0]); 
	// cout << "Sorted array is \n"; 

	heapSort(arr, n); 

	cout << "Sorted array is \n"; 
	printArray(arr, n); 
} 
