/*
* 堆排序
* 算法参考：http://blog.163.com/huangping198912@126/blog/static/1633578542010469524214/
*/


#include "head.h"

//生成大根堆
void HeapAdjust(int SortData[],int StartIndex, int Length)
{
    while(2*StartIndex+1 < Length)
    {
        int MinChildrenIndex = 2*StartIndex+1 ;
        if(2*StartIndex+2 < Length )
        {
            //比较左子树和右子树，记录最大值的Index
            if(SortData[2*StartIndex+1]<SortData[2*StartIndex+2])
            {
                MinChildrenIndex = 2*StartIndex+2;
            }
        }
        if(SortData[StartIndex] < SortData[MinChildrenIndex])
        {
            //交换i与MinChildrenIndex的数据
            int tmpData =SortData[StartIndex];
            SortData[StartIndex] =SortData[MinChildrenIndex];
            SortData[MinChildrenIndex] =tmpData;
            //堆被破坏，需要重新调整
            StartIndex = MinChildrenIndex ;
        }
        else
        {
            //比较左右孩子均大则堆未破坏，不再需要调整
            break;
        }
    }

    return;
}

//堆排序
void HeapSortData(int SortData[], int m, int Length)
{
    int i=0;

    //将Hr[0,Lenght-1]建成大根堆
    for (i=Length/2-1; i>=0; i--)
    {
        HeapAdjust(SortData, i, Length);
    }

    for (i=Length-1; i>0; i--)
    {
        //与最后一个记录交换
        int tmpData =SortData[0];
        SortData[0] =SortData[i];
        SortData[i] =tmpData;
        //将H.r[0..i]重新调整为大根堆
        HeapAdjust(SortData, 0, i);
    }

    return;
}


unsigned long Heap_Sort(int *a, int m, int n)      //堆排序
{
    struct timeval start;
    struct timeval end;

    unsigned long time;

    gettimeofday(&start, NULL);
    //此处书写排序代码
    HeapSortData(a, m, n);
    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

	return time;
}
