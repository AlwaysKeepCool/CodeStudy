#include"SList.h"

//打印及遍历
void SListPrint(SListNode* phead)
{
	//此时phead不需要断言
	SListNode* cur = phead;
	while (cur!=NULL)
	{
		printf("%d->", cur->data);
		cur = cur->next;
	}
	printf("NULL\n");
}



SListNode* SListCreateNode(SListDataType n)
{
	SListNode* NewNode = (SListNode*)malloc(sizeof(SListNode));
	if (NewNode == NULL)
	{
		printf("扩容失败！");
		exit(-1);
	}
	NewNode->data = n;
	NewNode->next = NULL;
	return NewNode;
}
void SListPushBack(SListNode** pphead, SListDataType n)
{	
	if (*pphead == NULL)
	{
		*pphead=SListCreateNode(n);
	}
	else
	{
		//找到尾巴
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//建立新结点
		tail->next = SListCreateNode(n);
	}
}	
void SListPopBack(SListNode** pphead)
{
	//1.phead直接指向空
	//2.一个节点
	//3.两个及两个以上
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);//free的是该指针指向的空间
		*pphead = NULL;
	}
	else
	{
		SListNode* tail = *pphead;
		SListNode* prev = NULL;
		while (tail->next!=NULL)
		{
			prev = tail;
			tail = tail->next;
		}
		free(tail);//tail可以不指向NULL，因为它的生命周期只在这个这个花括号里
		prev->next = NULL;
	}


}



void SListPushFront(SListNode** pphead, SListDataType n)
{
	//1.new一个结点
	//2.->next=*pphead
	//3.*pphead=new的结点
	SListNode* NewNode = SListCreateNode(n);
	NewNode->next = *pphead;
	*pphead = NewNode;

}

void SListPopFront(SListNode** pphead)
{
	//1.没有节点
	//2.一个结点+两个及以上的结点
	if (*pphead == NULL)
	{
		return;
	}
	else
	{
		SListNode* next = (* pphead)->next;
		free(*pphead);
		*pphead = next;
	}
}


SListNode* SListSearch(SListNode* phead,SListDataType n)
{
	SListNode* cur = phead;
	while (cur->next != NULL)
	{
		if (cur->data == n)
			return cur;
		cur = cur->next;
	}
}
