/*
bool srchxum(int arr,int sum)
{
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]+arr[high]==sum)
        return true;
        else
        if(arr[low]+arr[high]>sum)
        high--;
        else if(arr[low]+arr[high]<sum)
        low++;

    }
    return false;
}
*/

// for finding 3 elements.. inside for loop..subtract a[[i]] from sum.. and pass two pair one with new sum.