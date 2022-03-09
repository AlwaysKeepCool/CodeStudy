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
BstElemType BstMin(BSTree bst);
BstElemType BstMax(BSTree bst);
void BstSortPrint(BSTree bst);
BSTNode* BstFind(BSTree bst, BstElemType key);
bool BstErase(BSTree* bst, BSTNode* p);