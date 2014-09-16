/*
* 插入排序
* 算法参考：http://hi.baidu.com/hellosim/item/02224e9f9dee08c4b62531f4
*/

#include "head.h"

unsigned long StrIn_Sort(int *a, int m, int n)    
{
    struct timeval start;
    struct timeval end;

    unsigned long time;

    gettimeofday(&start, NULL);
    //此处书写排序代码
    int i,j;
    int next;
    for (i=1; i<n; i++)  
    {
        next = a[i]; //每次箭头所指的就是next
        /*  下面的代码就是将next插入到前面的[]中 */
        for (j=i-1; j>=0 && next < a[j]; j--)   // 从next前一位依次往前比较，如果next小于前面的，前面的就往后移
        {
            a[j+1] = a[j];
        }
        a[j+1] = next; // 将next插入到这个合适的位置。j+1是因为for循环多减了一个1。
    }

    gettimeofday(&end, NULL);
    time = 1000000 * (end.tv_sec - start.tv_sec) + end.tv_usec - start.tv_usec;

    return time;
}
