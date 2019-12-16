//线程，编译（gcc 14-1-1.c -o 14-1-1 -lpthread）
#include "my.h"

void * threadfun()
{
	printf("pid=%d:worker thread is running!\n",getpid());
}

int main()
{
	pthread_t tid;
	int error=pthread_create(&tid,NULL,threadfun,NULL);
	if(error!=0)
	{
		perror("thread create failed!\n");
		return -1;
	}
	printf("master thread pid %d,work thread tid=%lx\n",getpid(),tid);
	pthread_join(tid,NULL);
	return 0;
}
