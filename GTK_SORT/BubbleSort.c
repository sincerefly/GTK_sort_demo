/*
* 冒泡排序
*/

#include "head.h"

unsigned long Bubble_Sort(int *a, int m, int n)
{
    struct timeval start;
    struct timeval end;

    unsigned long time;

    gettimeofday(&start, NULL);

    int tmp, i, j;
    for(i=m; i<=n; ++i)
        for(j=i+1; j<n; ++j) {
            if(a[i]>a[j]) {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }

    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

	return time;
}

