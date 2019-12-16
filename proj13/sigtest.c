#include "my.h"

void sigroutine(int signo)
{
	switch(signo)
	{
	case 1:
		printf("receive SIGHUP\n");
		break;
	case 2:
		printf("receive SIGINT\n");
		break;
	case 3:
		printf("receive SIGQUIT\n");
		break;
	}
}

int main()
{
	signal(1,sigroutine);
	signal(2,sigroutine);
	signal(3,sigroutine);
	printf("test process.\n pid=%d\n",getpid());
	while(1);
	return 0;
}
