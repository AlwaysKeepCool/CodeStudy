#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#include<stdbool.h>

typedef int BstElemType;
typedef struct BSTNode
{
	BstElemType data;
	struct BSTNode* leftChild;
	struct BSTNode* rightChild;
}BSTNode;

typedef BSTNode* BSTree;


void BstInit(BSTree* bst);
bool BstInsert(BSTree* t, BstElemType x);
BstElemType BstMin(BSTree t);
BstElemType BstMax(BSTree t);
void BstSortPrint(BSTree t);
BSTNode* BstFind(BSTree t, BstElemType key);

bool BstErase(BSTree* bst, BSTNode* p);

BSTNode* BstFind(BSTree t, BstElemType key);
