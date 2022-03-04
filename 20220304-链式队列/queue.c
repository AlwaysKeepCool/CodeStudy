#include"queue.h"



void LinkQueueInit(LinkQueue* pq)
{
	assert(pq!=NULL);
	pq->head = pq->tail = NULL;
}


void LinkQueueEn(LinkQueue* pq, ElemType n)
{
	LinkQueueNode* newNode = (LinkQueueNode*)malloc
	(sizeof(LinkQueueNode));
	assert(newNode);

	//β��
	newNode->data = n;
	newNode->next = NULL;

	//1.û�н��
	//2.һ����һ������
	if (pq->head == NULL)
		pq->head=pq->tail = newNode;
	else
	{
		pq->tail->next = newNode;
		pq->tail = newNode;
	}

}
void LinkQueueDe(LinkQueue* pq)
{

	//1.û�н��
	//2.һ��
	//3.һ������
	if (pq->head == NULL)
		return;
	else if(pq->head==pq->tail)
	{
		pq->head = pq->tail = NULL;
	}
	else 
	{
		LinkQueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}
	
}
ElemType LinkQueueFront(LinkQueue* pq)
{
	
	return pq->head->data; //return pq->tail->data;
}

bool LinkQueueEmpty(LinkQueue* pq)
{
	return pq->head == NULL;
}


void LinkQueueShow(LinkQueue* pq)
{
	LinkQueueNode* cur = pq->head;
	while (cur != NULL)
	{
		printf(" %d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}