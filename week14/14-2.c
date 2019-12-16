//传两个参数进去，计算结果
#include "my.h"
#define NUM_THREADS 4
struct info{
	int no;
	int n;
};

void hello(void *t)
{
	pthread_t my_tid;
	struct info *y;
	int s=0;
	y=(struct info *)(t);
	for(int i=0;i<=y->n;i++)
		s+=i;
	my_tid=pthread_self();
	printf("\t thread %d:my tid is %lx,Hello world\n",(int)y->no+1,my_tid);
	printf("\t thread %d: sum 1 to %d is %d\n",(int)y->no,y->n,s);

//return (void*)pt  通过指针把和传过来，把tid传过来
}

int main()
{
	pthread_t tid;
	struct info a[4];
	int rv;
	int t;
	
	for(t=0;t<NUM_THREADS;t++)
	{
		a[t].no=t;
		a[t].n=100*(t+1);
		rv=pthread_create(&tid,NULL,(void *(*)())hello,(void *)&a[t]);//强制类型转换,将i传进去
		if(rv!=0)
		{
			printf("thread create dailed!\n");
			return -1;
		}
		printf("create thread %lx\n",tid);
	}
	printf("Good bye!\n");
	pthread_exit(NULL);
}
