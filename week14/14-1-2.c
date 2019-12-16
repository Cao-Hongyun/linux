//验证线程号是不变的，进程号可以回收
//pthread_self()获得线程号
//编译（gcc 14-1-2.c -o 14-1-2 -lpthread）
#include "my.h"
void * worker(void *arg)
{
	int TID=pthread_self();
	printf("thread--%d:gettid return %d\n",TID,getpid());
	printf("thread--%d:pthread_self return %p\n",TID,(void *)pthread_self());
	printf("thread--%d:I will exit now.\n",TID);
	pthread_exit(NULL);
	return NULL;
}

int main()
{
	pthread_t tid=0;
	int ret;
	ret=pthread_create(&tid,NULL,worker,NULL);	//创建
	ret=pthread_join(tid,NULL);	//等待
	ret=pthread_create(&tid,NULL,worker,NULL);	//创建
	ret=pthread_join(tid,NULL);	//等待
	printf("All finished!\n");
	return 0;
}
