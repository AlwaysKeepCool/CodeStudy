#include "SeqList.h"

//�����Ķ���
void SeqListDestory(SL* ps)
{
	free(ps->a);
	ps->a = NULL;
	ps->size = ps->capacity = 0;
}
void SeqListInit(SL* ps)
{
	ps->a = (SLDataType*)malloc(sizeof(SLDataType) * 4);
	if (ps->a == NULL)
	{
		printf("�����ڴ�ʧ��\n");
		exit(-1);
	}
	ps->size = 0;
	ps->capacity = 4;
}

//˳�������
void SeqListCheckCapacity(SL* ps)
{
	if (ps->size >= ps->capacity)
	{
		ps->capacity *= 2;
		ps->a = (SLDataType*)realloc(ps->a, sizeof
		(SLDataType) *ps->capacity);
		if(ps->a == NULL)
		{
			printf("����ʧ�ܣ�");
			exit(-1);
		}
	}
}

void SeqListPrint(SL* ps)
{
	for (int i = 0; i < ps->size; i++)//ǰ�պ�ѭ��size��
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}

//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);

	ps->a [ps->size] = x;
	ps->size++;

}

void seqListPopBack(SL* ps)
{
	assert(ps);
	ps->size--;
}

void SeqListPushFront(SL* ps, SLDataType x)
{
	assert(ps);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=0)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[0] = x;
	ps->size++;
}
void SeqListPopFront(SL* ps)
{
	assert(ps);
	int start = 0;
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;
}

//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x)
{
	assert(ps);
	assert(pos < ps->size&& pos >= 0);
	SeqListCheckCapacity(ps);
	int end = ps->size - 1;
	while (end>=pos)
	{
		ps->a[end + 1] = ps->a[end];
		end--;
	}
	ps->a[pos-1] = x;
	ps->size++;
}
void SeqListErase(SL* ps, int pos)
{
	assert(ps);
	assert(pos <= ps->size && pos >= 0);
	int start = pos-1;
	while (start<ps->size-1)
	{
		ps->a[start] = ps->a[start + 1];
		start++;
	}
	ps->size--;//�߼���ɾ����ֵ
}

int SeqListSearch(SL* ps, SLDataType x)
{
	assert(ps);
	int i = 0;
	while (i < ps->size)
	{
		if (ps->a[i] == x)
			return i + 1;
		i++;
	}
	return -1;

}






