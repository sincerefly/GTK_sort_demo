/*
* 快速排序
*/

#include "head.h"

int FindPos(int *a, int low, int high);
void QuickSort_(int *a, int low, int high);

unsigned long Quick_Sort(int *a, int m, int n)     //快速排序
{
    struct timeval start;
    struct timeval end;
    unsigned long time;

    gettimeofday(&start, NULL);
    //此处书写排序代码
    QuickSort_(a, m, n);

    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

    return time;
}
int FindPos(int *a, int low, int high);

void QuickSort_(int *a, int low, int high)
{

	int pos;

	if(low < high)
	{
		pos = FindPos(a, low, high);
		QuickSort_(a, low, pos-1);
		QuickSort_(a, pos+1, high);
	}
}

int FindPos(int *a, int low, int high)
{

	int val = a[low];

	while(low < high)
	{
		while(low<high && a[high]>=val)
			--high;
		a[low] = a[high];
		while(low < high && a[low]<=val)
			++low;
		a[high] = a[low];
	}//终止while循环后，low与high值相等
	a[low] = val;

	return high;
}
