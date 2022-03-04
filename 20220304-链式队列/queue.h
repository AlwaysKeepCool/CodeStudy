#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<stdbool.h>

typedef int ElemType;
typedef struct LinkQueueNode
{
	ElemType data;
	struct LinkQueueNode* next;
}LinkQueueNode;

typedef struct LinkQueue
{
	LinkQueueNode * head;
	LinkQueueNode* tail;
}LinkQueue;

void LinkQueueInit(LinkQueue* pq);
void LinkQueueEn(LinkQueue* pq, ElemType n);
void LinkQueueDe(LinkQueue* pq);
ElemType LinkQueueFront(LinkQueue* pq);
bool LinkQueueEmpty(LinkQueue* pq);

void LinkQueueShow(LinkQueue* pq);