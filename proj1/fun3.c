#include "uhead.h"

void BubbleSort(int * a, int n)
{
    int i;
    int j;
    int temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(a[j] > a[j+1])
            {
               temp = a[j+1];
                a[j+1] = a[j];
                a[j] = temp;
            }
        }
   }
}
void QuickSort(int *a, int low, int high)
{
	if (low < high)
	{
		int i = low;
		int j = high;
		int k = a[low];
		while (i < j)
		{
			while (i < j && a[j] >= k)     // 从右向左找第一个小于k的数
			{
				j--;
			}

			if (i < j)
			{
				a[i++] = a[j];
			}

			while (i < j && a[i] < k)      // 从左向右找第一个大于等于k的数
			{
				i++;
			}

			if (i < j)
			{
				a[j--] = a[i];
			}
		}

		a[i] = k;

		// 递归调用
		QuickSort(a, low, i - 1);     // 排序k左边
		QuickSort(a, i + 1, high);    // 排序k右边
	}
}

