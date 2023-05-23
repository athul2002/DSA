/*
int repeat(int arr[], int n)
{
int slow = arr[0],fast=arr[0];
   do{
slow = arr[slow];
fast=arr[arr[fast]];
}while (slow!=fast)

slow = arr[0];
while (slow!=fast)
{
slow = arr[slow];
fast = arr[fast];
}
return slow;
}
*/

// Repeated element from 0
/*int repeat(int arr[], int n)
{
int slow = arr[0]+1,  fast=arr[0]+1;
   do{
slow = arr[slow]+1;
fast=arr[arr[fast]]+1;
}while (slow!=fast)

slow = arr[0]+1;
while (slow!=fast)
{
slow = arr[slow]+1;
fast = arr[fast]+1;
}
return slow-1;
}
*/