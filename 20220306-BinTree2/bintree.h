#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<stdbool.h>
/*递归的两个必要条件按
* 1.结束条件
* 2.离结束条件越来越近
* 和循环一样都是这两个必须条件
*/

typedef char BinTreeElemType;
typedef struct BinTreeNode
{
	BinTreeElemType data;
	struct BinTreeNode* leftChild;
	struct BinTreeNode* rightChild;
}BinTreeNode;
typedef BinTreeNode* BinTree;

//二叉树的建立 
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
//克隆的代码基本与创建一样
BinTreeNode* BinTreeClone(BinTree t);//用递归一个一个节点克隆的 所以返回值是节点不是树
bool Equal(BinTree t1,BinTree t2);

//二叉树的遍历
void BinTreeVLR(BinTree bt);
void BinTreeLVR(BinTree bt);
void BinTreeLRV(BinTree bt);
void BinTreeLevel(BinTree t);
int Height(BinTree bt);

//二叉树非递归的遍历
void BinTreeVLR_Nor(BinTree t);
void BinTreeLVR_Nor(BinTree t);
void BinTreeLRV_Nor(BinTree t);



////////////////////////////////////////////////////////////
// ////////////////////////////////////////////////////
//链式队列
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
//链栈
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