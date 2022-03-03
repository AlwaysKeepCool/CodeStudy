#pragma once
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>

typedef int ElemType;
//Á´Õ»
typedef struct LinkStackNode
{
	struct LinkStackNode* link;
	ElemType data;
}LinkStackNode;

void LinkStackInit(LinkStackNode** ppst);
void LinkStackPush(LinkStackNode** ppst,ElemType x);
void LinkStackPop(LinkStackNode** ppst);
void LinkStackShow(LinkStackNode* pst);
ElemType LinkStackTop(LinkStackNode* pst);