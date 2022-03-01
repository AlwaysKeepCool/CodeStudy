#include"List.h"


//该函数主要是为了建立头指针
void ListInit(ListNode** pphead)
{
	//assert(*pphead != NULL);
	*pphead = BuyListNode(0);
	(*pphead)->next = *pphead;
	(*pphead)->prev = *pphead;
}

ListNode* BuyListNode(LTDataType n)
{
	ListNode* newNode = (ListNode*)malloc(sizeof(ListNode));
	if (newNode == NULL)
	{
		printf("扩容失败！");
		exit(-1);
	}
	newNode->data = n;
	newNode->next = NULL;
	newNode->prev = NULL;
	return newNode;
}


void ListPrint(ListNode* phead)
{
	assert(phead);
	ListNode* cur = phead->next;//不能把头结点的值打印出来
	//遍历链表
	while (cur != phead)
	{
		printf(" %d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}


void ListPushBack(ListNode** pphead, LTDataType n)
{
	assert(*pphead);

	ListNode* newNode = BuyListNode(n);
	ListNode* tail = (*pphead)->prev;
	//head....tail newNode

	tail->next = newNode;
	newNode->prev = tail;

	newNode->next = *pphead;
	(*pphead)->prev = newNode;

}

void ListPopBack(ListNode** pphead)
{

	assert(*pphead);
	assert((*pphead)->next != (* pphead));

	ListNode* tail = (*pphead)->prev;
	ListNode* tailPrev = tail->prev;

	//free的两部曲
	free(tail);
	tail = NULL;

	(*pphead)->prev = tailPrev;
	tailPrev->next = *pphead;

}


void ListPushFront(ListNode** pphead, LTDataType n)
{
	assert(*pphead);

	ListNode* first = (*pphead)->next;
	ListNode* newNode = BuyListNode(n);

	newNode->prev = (*pphead);
	(*pphead)->next = newNode;

	first->prev = newNode;
	newNode->next = first;
}


void ListPopFront(ListNode** pphead)
{
	assert(*pphead);
	assert((* pphead)->next!=(*pphead));

	ListNode* first = (*pphead)->next;
	ListNode* second = (*pphead)->next->next;

	second->prev = (*pphead);
	(*pphead)->next = second;

	//free两部曲
	free(first);
	first = NULL;

}

ListNode* ListFind(ListNode* phead, LTDataType n)
{
	assert(phead);

	ListNode* cur = phead->next;                                                           
	while (cur != phead)
	{
		if (cur->data == n)
			return cur;
		else
			cur = cur->next;
	}

	return NULL;
}

//在pos后面插入n
void ListInsert(ListNode* pos, LTDataType n)
{
	assert(pos);
	//pos newNode posNext
	ListNode* newNode = BuyListNode(n);
	ListNode* posNext = pos->next;

	newNode->prev = pos;
	pos->next = newNode;

	posNext->prev = newNode;
	newNode->next = posNext;
}

//删除pos后面的值
void ListErase(ListNode* pos)
{	
	assert(pos!=NULL);

	ListNode* posPrev = pos->prev;
	ListNode* posNext = pos->next;
	posPrev->next = posNext;
	posNext->prev = posPrev;
	
	//free两部曲
	free(pos);
	pos = NULL;
}

void ListNodeFree(ListNode** pphead)
{
	free(*pphead);
	(*pphead) = NULL;
}


void ListNodeDestroy(ListNode** pphead)
{
	ListNode* cur = (*pphead)->next;
	while (cur != *pphead)
	{
		ListNode* curNext = cur->next;

		free(cur);
		cur = NULL;

		cur = curNext;

	}
}