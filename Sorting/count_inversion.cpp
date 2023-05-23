#include<iostream>
using namespace std;
int countandMerge(int arr[],int l,int m,int r)
{
    int n1=m-l+1;
    int n2=r-m;
    int left[n1],right[n2];
    for(int i=0;i<n1;i++)
    {
        left[i]=arr[i+l];
    }
    for(int i=0;i<n2;i++)
    {
        right[i]=arr[m+i+1];
    }
    int res=0,i=0,j=0,k=l;
    while(i<n1&&j<n2)
    {
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else 
        {
            arr[k]=right[j];
            j++;
            res=res+(n1-i);
        }
        k++;
    }
    while(i<n1)
    {
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        arr[k]=right[j];
        j++;
        k++;
    }
    return res;
}
int countInversion(int arr[],int l,int r)
{
    int res=0;
    if(l<r)
    {
        int m=l+(r-l)/2;
        res+= countInversion(arr,l,m);
        res+= countInversion(arr,m+1,r);
        res+= countandMerge(arr,l,m,r);
    }
    return res;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<countInversion(arr,0,n-1);
}