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

void InitList(pSeqList pseq);//��ʼ��˳���
void PushBack(pSeqList pseq,DateType num);//β������
void PrintList(pSeqList pseq);//��ӡ˳���
void PopBack(pSeqList pseq,DateType num);//ͷ������
void PushFront(pSeqList pseq); //β��ɾ��
void PopFront(pSeqList pseq); //ͷ��ɾ��
int Find(pSeqList pseq,DateType num); //����ָ��Ԫ��
void Insert(pSeqList pseq, int pos, DateType num); //ָ��λ�ò���(�ƶ�λ��ǰ����)
void Erase(pSeqList pseq, int pos);//ɾ��ָ��λ��Ԫ��
void Remove(pSeqList pseq,DateType num); //ɾ��ָ��Ԫ��
void RemoveAll(pSeqList pseq,DateType num);//ɾ��ָ������Ԫ��
int Size(pSeqList pseq); //����˳����С
int Empty(pSeqList pseq); //�ж�˳����Ƿ�Ϊ��
void BubbleSort(pSeqList pseq);//ð������
void SlectSort(pSeqList pseq);//ѡ������
void SlectSortOP(pSeqList pseq);//�Ż��汾��ѡ������
int BinarySearch(pSeqList pseq,DateType num);//���ֲ���
int BinarySearch_R(pSeqList pseq,int left,int right,DateType num);//�ݹ鷨���ֲ���


#endif //_SeqList__