#include<stdio.h>
#include<stdbool.h>
#define MaxSize 10
//˳����ʵ��--��̬����

typedef struct SqList
{
	int data[MaxSize];
	int size;
}SqList;


void SqListInit(SqList* ps);
void SqListPrint(SqList s);
void SqListInsert(SqList* s,int i,int e);
bool SqListFull(SqList s);
void SqListDelete(SqList* ps,int i,int* e);
bool SqListEmpty(SqList s);
int SqListSearch(SqList s, int e);


