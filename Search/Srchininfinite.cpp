/*
int srch(int arr[],int x)
{
    if(arr[0]==x)
    return 0;
    int i=1;
    while(arr[i]<x)
    {
        i=i*2;
        i++;
    }
    if(arr[i]==x)
    return x;

    return binarysrch(arr,x,i/2+1,i-1);
}
*/