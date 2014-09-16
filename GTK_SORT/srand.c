#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define MAX 999     //MAX为最大值，其随机域为0~MAX-1
int SrandCreate(int *a, int l)
{
    long i = 0;
    srand( (unsigned)time( NULL ) );//srand()函数产生一个以当前时间开始的随机种子.应该放在for等循环语句前面 不然要很长时间等待
    for(i=0;i<l;i++)
        a[i] = rand()%MAX;

    return 0;
}
