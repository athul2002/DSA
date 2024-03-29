#include <iostream>
using namespace std;



int getPeak(int arr[], int n)
{
	int low = 0, high = n - 1;

		while(low <= high)
		{
			int mid = (low + high) / 2;

			if((mid == 0 || arr[mid - 1] <= arr[mid]) &&
				(mid == n - 1 || arr[mid + 1] <= arr[mid]))
				return mid;
			if(mid > 0 && arr[mid - 1] >= arr[mid])
				high = mid -1;
			else
				low = mid + 1;
		}
	return -1;
}

int main() {
    

 int arr[] = {6,1,15,19, 9, 13, 12, 6, 7, 2, 10, 4, 1, 14, 11, 14, 14, 13}, n = 18;

 cout << getPeak(arr, n);

	return 0;
}