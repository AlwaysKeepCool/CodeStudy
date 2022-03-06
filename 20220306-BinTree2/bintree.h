#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
/*�ݹ��������Ҫ������
* 1.��������
* 2.���������Խ��Խ��
* ��ѭ��һ��������������������
*/

typedef char BinTreeElemType;
typedef struct BinTreeNode
{
	BinTreeElemType data;
	struct BinTreeNode* leftChild;
	struct BinTreeNode* rightChild;
}BinTreeNode;
typedef BinTreeNode* BinTree;

//�������Ľ��� 
void BinTreeInit(BinTree* pbt);
void BinTreeCreate_1(BinTree* pbt);
BinTree BinTreeCreate_2();
BinTree BinTreeCreate_3(const char* s,int* i);
BinTree BinTreeCreate_4(const char* vlr, const char* lvr,int n);

int Size(BinTree bt);
BinTreeNode* Left(BinTreeNode* p);
BinTreeNode* Right(BinTreeNode* p);
BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key);
BinTreeNode* BinTreeParent(BinTree t,BinTreeNode* p);
//��¡�Ĵ�������봴��һ��
BinTreeNode* BinTreeClone(BinTree t);//�õݹ�һ��һ���ڵ��¡�� ���Է���ֵ�ǽڵ㲻����
bool Equal(BinTree t1,BinTree t2);

//�������ı���
void BinTreeVLR(BinTree bt);
void BinTreeLVR(BinTree bt);
void BinTreeLRV(BinTree bt);
void BinTreeLevel(BinTree t);
int Height(BinTree bt);

//�������ǵݹ�ı���
void BinTreeVLR_Nor(BinTree t);
void BinTreeLVR_Nor(BinTree t);
void BinTreeLRV_Nor(BinTree t);



////////////////////////////////////////////////////////////
// ////////////////////////////////////////////////////
//��ʽ����
//struct BinTreeNode;
typedef BinTreeNode* LinkQueueElemType;
typedef struct LinkQueueNode
{
	LinkQueueElemType data;
	struct LinkQueueNode* next;
}LinkQueueNode;

typedef struct LinkQueue
{
	LinkQueueNode* head;
	LinkQueueNode* tail;
}LinkQueue;

void LinkQueueInit(LinkQueue* pq);
void LinkQueueEn(LinkQueue* pq, LinkQueueElemType n);
void LinkQueueDe(LinkQueue* pq);
LinkQueueElemType LinkQueueFront(LinkQueue* pq);
bool LinkQueueEmpty(LinkQueue* pq);

///////////////////////////////////////////////////////
////////////////////////////////////////////////////
//��ջ
typedef BinTreeNode* LinkStackElemType;
typedef struct LinkStackNode
{	
	LinkStackElemType data;
	struct LinkStackNode* link;	
}LinkStackNode;
typedef LinkStackNode* LinkStack;

void LinkStackInit(LinkStackNode** ppst);
void LinkStackPush(LinkStackNode** ppst, LinkStackElemType x);
void LinkStackPop(LinkStackNode** ppst);
//void LinkStackShow(LinkStackNode* pst);
LinkStackElemType LinkStackTop(LinkStackNode* pst);
bool LinkStackEmpty(LinkStack* pst);