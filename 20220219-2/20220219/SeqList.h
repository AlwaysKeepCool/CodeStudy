#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//���ͷ�ļ����������������ͽӿڵ�

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;//
	int size;      //��Ч���ݵĸ���
	int capacity; //����
}SL,SeqList;


//��ʼ���Ľӿ�����
void SeqListInit(SL* ps);//SL���͵�ָ��ps������s�ĵ�ַ
void SeqListPrint(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListDestory(SL* ps);


//β��βɾ  ͷ��ͷɾ
void SeqListPushBack(SL* ps,SLDataType x);
void seqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//����λ�õĲ���ɾ��
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);


//˳���Ĳ���
int SeqListSearch(SL* ps, SLDataType x);





