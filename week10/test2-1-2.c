#include "my.h"
int g=10;
char a[100]={0};
int main()
{
	pid_t pid;
	int i;
	static int k=20;
	printf("test2-1-2:pid=%d\n&g=%16p\n&k=%16p\n&a=%16p\n",getpid(),&g,&k,a);
	//(1) printf("test2-1-2:pid=%d,&g=%16p,&k=%16p\n",getpid(),&g,&k);
	for(i=0;i<10;i++)
	{
		printf("test2-1-2:g=%d,k=%d\n",g++,k++);
	}
	return 0;
}
