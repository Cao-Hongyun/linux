int max(int *a,int n)
{
    int max,i;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return max;
}

int sum(int *a,int n)
{
    int i,sum;
    sum=0;
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    return sum;
}
