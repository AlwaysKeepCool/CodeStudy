#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdbool.h>
#include<stdlib.h>
#define STACK_DEFAULT_SIZE 8

typedef int ElemType;
typedef struct SeqStack
{
	ElemType*   base;   //’ªø’º‰
	ElemType    capacity;
	int			top;    //’ª∂•÷∏’Î
}SeqStack;

void SeqStackInit(SeqStack* pst, int sz);
bool IsFull(SeqStack* pst);
bool IsEmpty(SeqStack* pst);
void SeqStackPush(SeqStack* pst, ElemType n);
void SeqStackShow(SeqStack* pst);
void SeqStackPop(SeqStack* pst);
ElemType SeqStackTop(SeqStack* pst);
void SeqStackDestroy(SeqStack* pst);