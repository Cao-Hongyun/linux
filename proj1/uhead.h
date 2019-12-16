#include<stdlib.h>
#include<stdio.h>
#include<time.h>

#define unumber 100

struct arg{
    float ave;
    int sum;
};

int usum(int *,int);   
void urand(int *,int); 
void show(int *,int);  

struct arg operater(int *,int);

void BubbleSort(int *, int );
void QuickSort(int *, int ,int );

