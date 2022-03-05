
#include"bintree.h"


//这里的pbt其实是二级指针
void BinTreeInit(BinTree* pbt)
{
	*pbt = NULL;
}

void BinTreeCreate_1(BinTree* pbt)
{
	assert(pbt != NULL);
	BinTreeElemType item=0;
	scanf("%c", &item);
	if (item == '#')
		*pbt = NULL;
	else
	{
		*pbt = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		if (*pbt == NULL)
		{
			printf("扩容失败！");
			exit(-1);
		}
		(*pbt)->data = item;
		BinTreeCreate_1(&(*pbt)->leftChild);
		BinTreeCreate_1(&(*pbt)->rightChild);
	}
}
BinTree BinTreeCreate_2()
{
	BinTreeElemType item;
	scanf("%c", &item);
	if (item == '#')
		return NULL;
	else
	{
		BinTreeNode* t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		if (t == NULL)
		{
			exit(-1);
		}
		t->data = item;
		t->leftChild = BinTreeCreate_2();
		t->rightChild = BinTreeCreate_2();
		//递归必须需要一个可以结束的条件
		return t;
	}

}

BinTree BinTreeCreate_3(const char* s,int* i)
{
	assert(s != NULL);
	if (s[*i] == '\0' || s[*i] == '#')
		return NULL;
	else
	{
		BinTreeNode* t = (BinTreeNode*)malloc
		(sizeof(BinTreeNode));
		if (t == NULL)
		{
			exit(-1);
		}
		t->data = s[*i];

		(*i)++;
		t->leftChild = BinTreeCreate_3(s,i);

		(*i)++;
		t->rightChild = BinTreeCreate_3(s,i);
		return t;
	}

}

BinTreeNode* Left(BinTreeNode* p)
{
	assert(p);
	return p->leftChild;
}

BinTreeNode* Right(BinTreeNode* p)
{
	assert(p);
	return p->rightChild;
}

BinTreeNode* BinTreeFind(BinTree t, BinTreeElemType key)
{
	if (t == NULL || t->data == key)
		return t;
	BinTreeNode* p = BinTreeFind(t->leftChild, key);//在左边找
	if (p != NULL)//左边如果找到了 就返回找到的值
		return p;
	return BinTreeFind(t->rightChild, key);//在右边找

}

//寻找父节点
BinTreeNode* BinTreeParent(BinTree t, BinTreeNode* p)
{
	if (t == NULL || p == NULL || t == p)
		return NULL;
	if (t->leftChild == p || t->rightChild == p)
		return t;

	BinTreeNode* pr = BinTreeParent(t->leftChild, p);
	if (pr != NULL)
		return pr;
	return BinTreeParent(t->rightChild, p);
}



BinTreeNode* BinTreeClone(BinTree t)
{
	//递归结束的条件
	if (t == NULL)
		return NULL;
	else
	{
		BinTreeNode* newNode = (BinTreeNode*)malloc(sizeof(BinTreeNode));
		newNode->data = t->data;
		newNode->leftChild = BinTreeClone(t->leftChild);
		//t->leftChild的类型BinTreeNode*与BinTree是等价的，只是方便于阅读
		newNode->rightChild = BinTreeClone(t->rightChild);
		return newNode;
	}
}

bool Equal(BinTree t1, BinTree t2)
{
	if (t1 == NULL && t2 == NULL)
		return true;
	if (t1 == NULL || t2 == NULL)
		return false;
	return(t1->data == t2->data
		&& Equal(t1->leftChild, t2->leftChild)
		&& Equal(t1->rightChild, t2->rightChild));
}

int Size(BinTree bt)
{
	if (bt == NULL)
		return 0;
	else
		return Size(bt->leftChild) + Size(bt->rightChild) + 1;
}


void BinTreeVLR(BinTree bt)
{
	if (bt != NULL)
	{
		printf(" %c ", bt->data);
		BinTreeVLR(bt->leftChild);
		BinTreeVLR(bt->rightChild);
	}
}



void BinTreeLVR(BinTree bt)
{
	if (bt != NULL)
	{
		BinTreeLVR(bt->leftChild);
		printf(" %c ", bt->data);
		BinTreeLVR(bt->rightChild);
	}
}

void BinTreeLRV(BinTree bt)
{
	if (bt != NULL)
	{
		BinTreeLRV(bt->leftChild);		
		BinTreeLRV(bt->rightChild);
		printf(" %c ", bt->data);
	}
}

//递归实现层次遍历
void BinTreeLevel(BinTree t)
{
	if (t != NULL)
	{
		LinkQueue Q;
		LinkQueueInit(&Q);

		LinkQueueEn(&Q, t);
		while (!LinkQueueEmpty(&Q))
		{
			BinTreeNode* p = LinkQueueFront(&Q);
			LinkQueueDe(&Q);
			printf(" %c ", p->data);
			if (p->leftChild != NULL)
				LinkQueueEn(&Q, p->leftChild);
			if (p->rightChild != NULL)
				LinkQueueEn(&Q, p->rightChild);
		}
	//LinkQueueDestroy(&Q);
	}
}


int Height(BinTree t)
{
	if (t == NULL)
		return 0;
	else
	{
		int left_h = Height(t->leftChild);//1
		int right_h = Height(t->rightChild);//2
		return (left_h > right_h ? left_h : right_h) + 1;//3
	}
}




////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////
void LinkQueueInit(LinkQueue* pq)
{
	assert(pq != NULL);
	pq->head = pq->tail = NULL;
}


void LinkQueueEn(LinkQueue* pq, LinkQueueElemType n)
{
	LinkQueueNode* newNode = (LinkQueueNode*)malloc
	(sizeof(LinkQueueNode));
	assert(newNode);

	//尾插
	newNode->data = n;
	newNode->next = NULL;

	//1.没有结点
	//2.一个及一个以上
	if (pq->head == NULL)
		pq->head = pq->tail = newNode;
	else
	{
		pq->tail->next = newNode;
		pq->tail = newNode;
	}

}
void LinkQueueDe(LinkQueue* pq)
{

	//1.没有结点
	//2.一个
	//3.一个以上
	if (pq->head == NULL)
		return;
	else if (pq->head == pq->tail)
	{
		pq->head = pq->tail = NULL;
	}
	else
	{
		LinkQueueNode* next = pq->head->next;
		free(pq->head);
		pq->head = next;
	}

}
LinkQueueElemType LinkQueueFront(LinkQueue* pq)
{

	return pq->head->data; //return pq->tail->data;
}

bool LinkQueueEmpty(LinkQueue* pq)
{
	return pq->head == NULL;
}


