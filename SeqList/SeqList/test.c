



////ð������ 
//void BubbleSort(PSeqList pSeq); 
////ѡ������ 
//void SelectSort(PSeqList pSeq); 
////ѡ��������Ż� 
//void SelectSortOP(PSeqList pSeq); 
////���ֲ��� 
//int BinarySearch(PSeqList pSeq, DataType data); 
////���ֲ��ҵݹ�д�� 
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
	printf("�±���%d",ret);
	return 0;
}