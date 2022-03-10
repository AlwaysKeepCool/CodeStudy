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


BstElemType BstMin(BSTree t)
{
	assert(t);
	while (t->leftChild != NULL)
		t = t->leftChild;
	return t->data;
}


BstElemType BstMax(BSTree t)
{
	assert(t);
	while (t->rightChild != NULL)
		t = t->rightChild;
	return t->data;
}


//就是中序遍历
void BstSortPrint(BSTree t)
{
	if (t != NULL)
	{
		BstSortPrint(t->leftChild);
		printf(" %d ", t->data);
		BstSortPrint(t->rightChild);
	}
}


BSTNode* BstFind(BSTree t, BstElemType key)
{
	if (t == NULL)
		return NULL;
	if (t->data == key)
		return t;

	if (t->data < key)
		return BstFind(t->rightChild, key);
	else
		return BstFind(t->leftChild, key);
}



bool BstErase(BSTree* t, BSTNode* p)
{
	if (*t != NULL)
	{
		if (p->data < (*t)->data)
			BstErase(&(*t)->leftChild, p);
		else if (p->data > (*t)->data)
			BstErase(&(*t)->rightChild, p);
		else
		{

			//删除
			if (p->leftChild == NULL && p->rightChild == NULL)
			{
				free(*t);
				*t = NULL;
			}
			else if(p->leftChild != NULL && p->rightChild == NULL)
			{
				*t = p->leftChild;
				free(p);
			}
			else if (p->leftChild == NULL && p->rightChild != NULL)
			{
				*t = p->rightChild;
				free(p);
			}
			else
			{
				BSTNode* s = p->leftChild;
				while (s->rightChild != NULL)
					s = s->rightChild;
				p->data = s->data;
				BstErase(&p->leftChild, s);
			}

			return true;
			
		}
	}
	return false; 
}