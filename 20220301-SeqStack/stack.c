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
		printf("栈已满%d不能入栈", n);
		return;
	}
	pst->base[pst->top] = n;
	pst->top++;
}

void SeqStackShow(SeqStack* pst)
{
	assert(pst);
	//和顺序表的遍历是一样的
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
		printf("栈已空！");
		return;
	}
	pst->top--;
}

ElemType SeqStackTop(SeqStack* pst)
{
	assert(pst);

	//栈不为空，才能取
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