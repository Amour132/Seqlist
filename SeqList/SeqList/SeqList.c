#include "SeqList.h"

void InitList(pSeqList pseq)
{
	assert(pseq);
	pseq->sz = 0;
	memset(pseq->date,0,sizeof(pseq->date));	
}

void PushBack(pSeqList pseq,DateType num)
{
	assert(pseq);
	if(pseq->sz == MAX)
	{
		printf("顺序表已满无法插入\n");
		return;
	}
	else
	{
		pseq->date[pseq->sz] = num;
		pseq->sz++;
	}
}

void PrintList(pSeqList pseq)
{
	int i = 0;
	assert(pseq);
	for(i=0; i<pseq->sz; i++)
	{
		printf("%d ",pseq->date[i]);
	}
	printf("\n");
}

void PopBack(pSeqList pseq,DateType num)
{
	int i = 0;
	assert(pseq);
	if(pseq->sz == 500)
	{
		printf("顺序表已满，无法插入\n");
		return;
	}
	else
	{
		for(i=pseq->sz-1; i>=0; i--)
		{
			pseq->date[i+1] = pseq->date[i];//将数据全部向后移一位为头部插入准备
		}
		pseq->date[0] = num;
		pseq->sz++;
	}
}

void PushFront(pSeqList pseq)
{
	assert(pseq);
	if(pseq->sz == 0)
	{
		printf("顺序表为空，无法删除\n");
		return;
	}
	else
	{
		pseq->date[pseq->sz-1] = 0;
		pseq->sz--;
	}
}

void PopFront(pSeqList pseq)
{
	int i = 0;
	assert(pseq);
	if(pseq->sz == 0)
	{
		printf("顺序表为空，无法删除\n");
		return;
	}
	else
	{
		for(i=0 ;i<pseq->sz-1; i++)
		{
			pseq->date[i] = pseq->date[i+1];
		}
		pseq->sz--;
	}
}

int Find(pSeqList pseq,DateType num)
{
	int i = 0;
	assert(pseq);
	for(i=0; i<pseq->sz; i++)
	{
		if(pseq->date[i] == num)
		{
			return i;
		}
	}
	return -1;
}

void Insert(pSeqList pseq, int pos, DateType num)
{
	int i = 0;
	assert(pseq);
	if(pseq->sz == MAX)
	{
		printf("顺序表已满，无法插入\n");
		return;
	}
	else
	{
		for(i=pseq->sz-1; i>=pos-1; i--)
		{
			pseq->date[i+1] = pseq->date[i];
		}
		pseq->date[pos-1] = num;
		pseq->sz++;
	}
}

void Erase(pSeqList pseq, int pos)
{
	int i = 0;
	assert(pseq);
	if(pseq->sz == 0)
	{
		printf("顺序表为空，无法删除\n");
		return;
	}
	else
	{
		for(i=pos-1; i<pseq->sz; i++)
		{
			pseq->date[i] = pseq->date[i+1];
		}
		pseq->sz--;
	}
}

void Remove(pSeqList pseq,DateType num)
{
	int i = 0;
	int ret = 0;
	assert(pseq);
	ret = Find(pseq,num);
	if(ret == -1)
	{
		printf("顺序表中没有此元素\n");
	}
	else
	{
		for(i=ret; i<pseq->sz; i++)
		{
			pseq->date[i] = pseq->date[i+1];
		}
		pseq->sz--;
	}
}

void RemoveAll(pSeqList pseq,DateType num)
{
	int ret = 0;
	int i = 0;
	int j = 0;
	int count = 0;
	assert(pseq);
	ret = Find(pseq,num);
	if(ret == -1)
	{
		printf("删除失败，顺序表中没有此元素\n");
	}
	else
	{
		for(i=0; i<pseq->sz; i++)
		{
			if(pseq->date[i] == num)
			{
				count++;
			}
			else
			{
				pseq->date[j++] = pseq->date[i];
			}
		}
		pseq->sz -= count;
	}
}

int Size(pSeqList pseq)
{
	assert(pseq);
	if(pseq->sz == 0)
	{
		printf("顺序表为空\n");
		return -1;
	}
	else
	    return pseq->sz;
}

int Empty(pSeqList pseq)
{
	assert(pseq);
	if(pseq->sz == 0)
	{
		return 0;
	}
	else
		return -1;
}

void Swap(DateType *p1,DateType *p2)
{
	DateType temp = 0;
	temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

void BubbleSort(pSeqList pseq)
{
	int i = 0;
	int j = 0;
	assert(pseq);
	for(i=0; i<pseq->sz; i++)
	{
		for(j=0; j<pseq->sz-i-1; j++)
		{
			if(pseq->date[j] < pseq->date[j+1])
			{
				Swap(pseq->date+j,pseq->date+j+1);
			}
		}
	}
}

void SlectSort(pSeqList pseq)
{
	int i = 0;
	int j = 0;
	assert(pseq);
	for(i=0 ;i<pseq->sz; i++)
	{
		int max = 0;
		for(j=0; j<pseq->sz-i; j++)
		{
			if(pseq->date[max]<pseq->date[j])
			{
				max = j;
			}
			if(max != pseq->sz-1)
			{
				Swap(pseq->date+max,pseq->date+(pseq->sz-1-i));
			}
		}
	}
}

void SlectSortOP(pSeqList pseq)
{
	int i = 0;
	int j = 0;
	int left = 0;
	int right = pseq->sz - 1;
	assert(pseq);
	while(left<right)
	{
		int min = left;
		int max = right;
		for(j=left; j<=right; j++)
		{
			if(pseq->date[min]>pseq->date[j])
			{
				min = j;
			}
			if(pseq->date[max]<pseq->date[j])
			{
				max = j;
			}
		}
		    if(max != right)
			{
				Swap(pseq->date+max,pseq->date+right);
			}
			if(min = right)
			{
				min = max;
			}
			if(min != left)
			{
				Swap(pseq->date+min,pseq->date+left);
			}
			left++;
			right--;
	}
}

int BinarySearch(pSeqList pseq,DateType num)
{
	int left = 0;
	int right = pseq->sz-1;
	assert(pseq);
	while(left <= right)
	{
		int mid = left + (right-left)/2;
		if(pseq->date[mid] > num)
		{
			right = mid - 1;
		}
		else if(pseq->date[mid] < num)
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	return -1;
}

int BinarySearch_R(pSeqList pseq,int left,int right,DateType num)
{
	int mid = 0;
	assert(pseq);
	if(left<=right)
	{
		mid = left+(right-left)/2;
		if(pseq->date[mid]>num)
		{
			return BinarySearch_R(pseq,left,mid-1,num);
		}
		else if(pseq->date[mid]<num)
		{
			return BinarySearch_R(pseq,mid+1,right,num);
		}
		else
		{
			return mid;
		}
	}
	else
	{
		return -1;
	}

}