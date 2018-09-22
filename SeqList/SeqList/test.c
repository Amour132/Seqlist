



////冒泡排序 
//void BubbleSort(PSeqList pSeq); 
////选择排序 
//void SelectSort(PSeqList pSeq); 
////选择排序的优化 
//void SelectSortOP(PSeqList pSeq); 
////二分查找 
//int BinarySearch(PSeqList pSeq, DataType data); 
////二分查找递归写法 
//int BinarySearch_R(pSeqList pSeq, int left, int right, DataType d); 
//



#include "SeqList.h"

int main()
{
	
	int i = 0;
	int ret = 0;
	SeqList seq;
	InitList(&seq);
	for(i=0; i<10; i++)
	{
		PushBack(&seq,i);
	}
	
	PrintList(&seq);
	ret = BinarySearch_R(&seq,0,9,7);
	printf("下标是%d",ret);
	return 0;
}