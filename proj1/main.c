#include "uhead.h"

int main()
{
    int a[unumber];

    int begintime1, endtime1;
	int begintime2, endtime2;

	struct arg t;

	urand(a, unumber);
	show(a, unumber);
	t = operater(a, unumber);
	printf("sum=%d,ave=%f\n", t.sum, t.ave);

	begintime1 = clock();	//计时开始
	BubbleSort(a, unumber);
	endtime1 = clock();	//计时结束

	printf("冒泡排序：\n");
	show(a, unumber);
	printf("\n运行时间：%dms\n", endtime1 - begintime1);

	begintime2 = clock();	//计时开始
	QuickSort(a, 0, unumber - 1);  // 快速排序
	endtime2 = clock();	//计时结束

	printf("快速排序：\n");
	show(a, unumber);
	printf("\n运行时间：%dms\n", endtime2 - begintime2);

	return 0;
   /* int a[unumber];
    struct arg t;
    urand(a,unumber);
    show(a,unumber);
    t=operater(a,unumber);
    printf("sum=%d,ave=%f\n",t.sum,t.ave);
    return 0;*/
}
