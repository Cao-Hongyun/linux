//通过参数，向子线程传值
#include "my.h"
#define NUM 4
//强制类型转换
void fun(void *arg)
{
	int *pt;
	pt=(int *)arg;
	printf("worker thread %d : tid = %p\n",(int)pt,pthread_self());
}

int main()
{
	pthread_t tid[NUM];
	int ret;
	int i;
	for(i=0;i<NUM;i++)
		pthread_create(&tid,NULL,(void *(*))fun,(void *)i);//强制类型转换,将i传进去
	for(i=0;i<NUM;i++)
		pthread_join(tid[i],NULL);
	printf("All finished!\n");
	return 0;
}
