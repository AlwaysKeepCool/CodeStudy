#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int LTDataType;

typedef struct ListNode
{
	LTDataType data;
	struct ListNode* prev;
	struct ListNode* next;
}ListNode;

void ListPushBack(ListNode** pphead, LTDataType n);
void ListPopBack(ListNode** pphead);
void ListPrint(ListNode* phead);
void ListInit(ListNode** pphead); //该接口主要是为了建立头指针
ListNode* BuyListNode(LTDataType n);
void ListPrint(ListNode* phead);
void ListPushFront(ListNode** pphead, LTDataType n);
void ListPopFront(ListNode** pphead);
ListNode* ListFind(ListNode* phead, LTDataType n);
void ListInsert(ListNode** pphead);
void ListInsert(ListNode* pos, LTDataType n);
void ListErase(ListNode* pos);
void ListNodeFree(ListNode** pphead);
void ListNodeDestroy(ListNode** pphead);