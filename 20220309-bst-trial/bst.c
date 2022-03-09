#include"bst.h"



void BstInit(BSTree* bst)
{
	*bst = NULL;
}

bool BstInsert(BSTree* t, BstElemType x)
{
	//每次插入都是插入一个叶子节点
	if (*t == NULL)
	{
		*t = (BSTNode*)malloc(sizeof(BSTNode));
		assert(*t != NULL);
		(*t)->data = x;
		//一定要初始化指针
		(*t)->leftChild = (*t)->rightChild = NULL;
		return true;
	}

	if (x < (*t)->data)
	{
		return BstInsert(&(*t)->leftChild, x);
	}
	else if (x > (*t)->data)
	{
		return BstInsert(&(*t)->rightChild, x);
	}
	else
		return false;
}