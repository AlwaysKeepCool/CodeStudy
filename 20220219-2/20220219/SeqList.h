#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
//这个头文件是用来声明函数和接口的

typedef int SLDataType;

typedef struct SeqList
{
	SLDataType* a;//
	int size;      //有效数据的个数
	int capacity; //容量
}SL,SeqList;


//初始化的接口声明
void SeqListInit(SL* ps);//SL类型的指针ps来接收s的地址
void SeqListPrint(SL* ps);
void SeqListCheckCapacity(SL* ps);
void SeqListDestory(SL* ps);


//尾插尾删  头插头删
void SeqListPushBack(SL* ps,SLDataType x);
void seqListPopBack(SL* ps);
void SeqListPushFront(SL* ps, SLDataType x);
void SeqListPopFront(SL* ps);

//任意位置的插入删除
void SeqListInsert(SL* ps, int pos, SLDataType x);
void SeqListErase(SL* ps, int pos);


//顺序表的查找
int SeqListSearch(SL* ps, SLDataType x);





