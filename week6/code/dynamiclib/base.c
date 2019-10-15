#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void show(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
       printf("a[%d]=%d\n",i,a[i]);
}

void init(int *a,int n)
{
    int i;
    srand((int)time(NULL));
    for(i=0;i<n;i++)
    {
        a[i]=rand()%101;
    }
}


