/*
double getmedian(int a1[],int a2[],int n1,int n2)
{
    int begin1=0,end1=n1;
    while(begin1<=end1)
    {
        int i1=(begin1+end1)/;
        int i2=(n1+n2+1)/2-i1;
        int min1,min2,max1,max2;

        if(i1==n1)
        {
            min1=__INT_MAX;
        }
        else
        min1=a1[i1];
         if(i1==0)
        {
            max1=__INT_MIN;
        }
        else
        min1=a1[i1-1];
         if(i2==n2)
        {
            min2=__INT_MAX__;
        }
        else
        min2=a2[i2];
         if(i2==0)
        {
            max2=__INT_MIN;
        }
        else
        max2=a2[i2-1];

        if(max1<=min2 && max2<=min1)
        {
            if((n1+n2)%2==0)
            return ((double)max(max1,max2)+min(min1,min2)/2);
            else
            return (double)max(max1,max2);
        }
        else
        if(max1>min2)
        end1=i1-1;
        else
        begin1=i1+1;
    }
}
*/