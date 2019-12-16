#include "my.h"
int main()
{
	int ret;
	printf("caller1:pid=%d,ppid=%d\n",getpid(),getppid());
	execl("/home/rlk/linuxprogram/week9/practice/test2","./test2","123","456",NULL);
	printf("after calling!\n");
	sleep(1);
	return 0;
}
