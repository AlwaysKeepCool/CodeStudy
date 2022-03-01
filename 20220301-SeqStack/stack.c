#include"stack.h"

bool IsFull(SeqStack* pst)
{
	assert(pst != NULL);
	return pst->top >= pst->capacity;
}

bool IsEmpty(SeqStack* pst)
{
	assert(pst);
	return pst->top == 0;
}

void SeqStackInit(SeqStack* pst, int sz)
{
	
	pst->capacity = sz > STACK_DEFAULT_SIZE ? sz : STACK_DEFAULT_SIZE;
	pst->base = (ElemType*)malloc(sizeof(ElemType) *pst->capacity);
	pst->top = 0;
}

void SeqStackPush(SeqStack* pst,ElemType n)
{
	assert(pst);
	if (IsFull(pst))
	{
		printf("ջ����%d������ջ", n);
		return;
	}
	pst->base[pst->top] = n;
	pst->top++;
}

void SeqStackShow(SeqStack* pst)
{
	assert(pst);
	//��˳���ı�����һ����
	for (int i = pst->top - 1; i >= 0; i--)
	{
		printf("|%d |\n", pst->base[i]);
	}
	printf(" --");
	printf("\n\n");

}


void SeqStackPop(SeqStack* pst)
{
	assert(pst);
	if (IsEmpty(pst))
	{
		printf("ջ�ѿգ�");
		return;
	}
	pst->top--;
}

ElemType SeqStackTop(SeqStack* pst)
{
	assert(pst);

	//ջ��Ϊ�գ�����ȡ
	assert(IsEmpty(pst)!=true);
	

	return pst->base[pst->top - 1];
}

void SeqStackDestroy(SeqStack* pst)
{
	assert(pst);
	free(pst->base);
	pst->top = 0;
	pst->capacity = 0;
	
}