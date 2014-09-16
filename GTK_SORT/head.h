#ifndef HEAD_INCLUDE
#define HEAD_INCLUDE
#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>
#define A 0     //输入排序最小
#define B 100000    //输入排序最大
#define L 100000   //数组大小
#define E 10    //控制屏幕输出个数
int SrandCreate(int *a);
unsigned long BubbleSort(int *a, int i, int j);    //冒泡排序
unsigned long StrInSort(int *a, int i, int j);     //直接插入排序straight insertion sort
unsigned long SelectionSort(int *a, int i, int j); //选择排序
unsigned long QuickSort(int *a, int i, int j);     //快速排序
unsigned long HillSort(int *a, int i, int j);      //希尔排序
unsigned long HeapSort(int *a, int i, int j);      //堆排序

#endif
