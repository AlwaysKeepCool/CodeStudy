#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef int SListDataType;
//s=single  单链表节点的定义
typedef struct SListNode
{
	SListDataType data;   //数据域
	struct SListNode* next;  //指针域
}SListNode;

SListNode* SListCreateNode(SListDataType n);
void SListPushBack(SListNode** pphead, SListDataType n);
void SListPopBack(SListNode** pphead);
void SListPushFront(SListNode** pphead, SListDataType n);
void SListPopFront(SListNode** pphead);
void SListPrint(SListNode* phead);
SListNode* SListSearch(SListNode* phead,SListDataType n);
