#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int SListDataType;
//s=single  ������ڵ�Ķ���
typedef struct SListNode
{
	SListDataType data;   //������
	struct SListNode* next;  //ָ����
}SListNode;

SListNode* SListCreateNode(SListDataType n);
void SListPushBack(SListNode** pphead, SListDataType n);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** pphead, SListDataType n);
void SListPopFront(SListNode** pphead);
void SListPrint(SListNode* phead);
SListNode* SListSearch(SListNode* phead,SListDataType n);
void SListInsertAfter(SListNode* pos, SListDataType n);
void SListEraseAfter(SListNode* pos);
