#include "head.h"

unsigned long Selection_Sort(int *a, int m, int n) //选择排序
{
    struct timeval start;
    struct timeval end;

    unsigned long time;

    gettimeofday(&start, NULL);
    //此处书写排序代码

    int i;
    int j;
    int temp = 0;
    int flag = 0;
    for(i = 0; i < n-1; i++) // 大循环，用于控制程序不再对已经排好序的数进行操作
    {
        temp = a[i];
        flag = i;
        for(j = i+1; j < n; j++) // 小循环，用于从前往后扫描数组并选择最小数
        {
            if(a[j] < temp)
            {
                temp = a[j];
                flag = j; // 目前最小的元素的下标
            }
        }
        if(flag != i) // 如果最小的元素不是进行筛选的数据中的第一个，则将最小数据与第一个筛选数据交换
        {
            a[flag] = a[i];
            a[i] = temp;
        }
    }
    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

	return time;
}
