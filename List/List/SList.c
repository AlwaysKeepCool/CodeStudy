#include"SList.h"

//��ӡ������
void SListPrint(SListNode* phead)
{
	//��ʱphead����Ҫ����
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
		printf("����ʧ�ܣ�");
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
		//�ҵ�β��
		SListNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}
		//�����½��
		tail->next = SListCreateNode(n);
	}
}	
void SListPopBack(SListNode** pphead)
{
	//1.pheadֱ��ָ���
	//2.һ���ڵ�
	//3.��������������
	if (*pphead == NULL)
	{
		return;
	}
	else if ((*pphead)->next == NULL)
	{
		free(*pphead);//free���Ǹ�ָ��ָ��Ŀռ�
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
		free(tail);//tail���Բ�ָ��NULL����Ϊ������������ֻ����������������
		prev->next = NULL;
	}


}



void SListPushFront(SListNode** pphead, SListDataType n)
{
	//1.newһ�����
	//2.->next=*pphead
	//3.*pphead=new�Ľ��
	SListNode* NewNode = SListCreateNode(n);
	NewNode->next = *pphead;
	*pphead = NewNode;

}

void SListPopFront(SListNode** pphead)
{
	//1.û�нڵ�
	//2.һ�����+���������ϵĽ��
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
