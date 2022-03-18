#pragma once
#include"SqList.h"


void SqListInit(SqList* ps)
{
	for (int i = 0; i < MaxSize; ++i)
	{
		ps->data[i] = 0;
	}
	ps->size = 0;

}

void SqListPrint(SqList s)
{
	for (int i = 0; i < s.size ; ++i)
		printf(" %d ", s.data[i] );
	printf("\n");
}


bool SqListFull(SqList s)
{
	return s.size >= MaxSize;
}

bool SqListEmpty(SqList s)
{
	return s.size == 0;
}


void SqListInsert(SqList* ps, int i, int e)
{
	//判断插入的位置是否合法
	if (i < 1 || i > ps->size + 1)
		return;
	if (SqListFull == 1)
		return;
	int cur=ps->size;

	//位移
	while (cur > i)
	{
		ps->data[cur] = ps->data[cur - 1];
		cur--;
	}

	//插入
	ps->data[i-1] = e;
	ps->size++;
}



void SqListDelete(SqList* ps, int i, int* e)
{
	if (i < 1 || i >= ps->size)
		return;
	if (SqListEmpty == 1)
		return;

	int cur = i;          //cur为工作指针
	*e = ps->data[i - 1];

	
	while (cur < ps->size)
	{
		ps->data[cur] = ps->data[cur + 1];
		cur++;
	}


	ps->size--;
}


int SqListSearch(SqList s, int e)
{
	if (SqListEmpty == 1)
		return -1;
	int cur = 0;
	for (; cur < s.size; cur++)
	{
		if (s.data[cur] == e)
			return cur + 1;
	}
	return -1;
 
}