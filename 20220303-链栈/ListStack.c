#include"ListStack.h"

void LinkStackInit(LinkStackNode** ppst)
{
	assert(*ppst);
	*ppst = NULL;
}

void LinkStackPush(LinkStackNode** ppst, ElemType x)
{
	//assert(*ppst != NULL);
	LinkStackNode* newNode = (LinkStackNode*)malloc
	(sizeof(LinkStackNode));
	assert(newNode);

	//头插
	newNode->link = *ppst;
	newNode->data = x;
	*ppst = newNode;
}


void LinkStackPop(LinkStackNode** ppst)
{
	assert(*ppst);
	//没有结点
	if (*ppst != NULL)
	{
		LinkStackNode* p = *ppst;
		*ppst = p->link;
		free(p);
	}
	  
}

ElemType LinkStackTop(LinkStackNode* pst)
{
	assert(pst);
	return pst->data;
}


void LinkStackShow(LinkStackNode* pst)
{
	assert(pst);
	LinkStackNode* p = pst;

	while (p)
	{
		printf(" | %d |\n", p->data);
		p = p->link;
	}

	printf(" ----- \n");
	 
}

