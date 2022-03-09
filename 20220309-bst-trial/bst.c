#include"bst.h"



void BstInit(BSTree* bst)
{
	*bst = NULL;
}

bool BstInsert(BSTree* t, BstElemType x)
{
	//ÿ�β��붼�ǲ���һ��Ҷ�ӽڵ�
	if (*t == NULL)
	{
		*t = (BSTNode*)malloc(sizeof(BSTNode));
		assert(*t != NULL);
		(*t)->data = x;
		//һ��Ҫ��ʼ��ָ��
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