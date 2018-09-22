#ifndef _SeqList__
#define _SeqList__

#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX 100

typedef int DateType;
typedef struct SeqList
{
	DateType date[MAX];
	int sz;

}SeqList,*pSeqList;

void InitList(pSeqList pseq);//初始化顺序表
void PushBack(pSeqList pseq,DateType num);//尾部插入
void PrintList(pSeqList pseq);//打印顺序表
void PopBack(pSeqList pseq,DateType num);//头部插入
void PushFront(pSeqList pseq); //尾部删除
void PopFront(pSeqList pseq); //头部删除
int Find(pSeqList pseq,DateType num); //查找指定元素
void Insert(pSeqList pseq, int pos, DateType num); //指定位置插入(制定位置前插入)
void Erase(pSeqList pseq, int pos);//删除指定位置元素
void Remove(pSeqList pseq,DateType num); //删除指定元素
void RemoveAll(pSeqList pseq,DateType num);//删除指定所有元素
int Size(pSeqList pseq); //返回顺序表大小
int Empty(pSeqList pseq); //判读顺序表是否为空
void BubbleSort(pSeqList pseq);//冒泡排序
void SlectSort(pSeqList pseq);//选择排序
void SlectSortOP(pSeqList pseq);//优化版本的选择排序
int BinarySearch(pSeqList pseq,DateType num);//二分查找
int BinarySearch_R(pSeqList pseq,int left,int right,DateType num);//递归法二分查找


#endif //_SeqList__