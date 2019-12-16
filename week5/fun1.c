

int max(int *a,int n)
{
    int max,i;
    max=a[0];
    for(i=0;i<n;i++)
    {
        if(max<a[i])
            max=a[i];
    }
    return 0;
}
