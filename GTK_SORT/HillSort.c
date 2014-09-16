/*
* 希尔排序
* 算法参考：//http://blog.csdn.net/wxf1995/article/details/4677606
*/

#include "head.h"

unsigned long Hill_Sort(int *a, int m, int n)      //希尔排序
{
    struct timeval start;
    struct timeval end;

    unsigned long time;

    gettimeofday(&start, NULL);

	int i,j,x,d;            
	d= n / 2;
	while (d>=1)
	{
	  for (i=d+1;i<=n;i++)
	  {
	    x=a[i];
	    j=i-d;
	    while ((j>0) && (x<a[j]))
	    {
	    a[j+d]=a[j];
	    j-=d;
	    }
	    a[j+d]=x;
	  }
	  d /= 2;
	}

    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

	return time;
}
