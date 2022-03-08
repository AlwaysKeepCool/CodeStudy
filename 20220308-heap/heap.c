#include"heap.h"
void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void HeapCreate(MinHeap* php, HeapElemType arr[], int n)
{
	php->capacity = n;
	php->base = (HeapElemType*)malloc(sizeof(HeapElemType) * php->capacity);
	assert(php->base != NULL);
	for (int i = 0; i < n; ++i)
		php->base[i] = arr[i];
	php->size = n;

	//堆向下调整
	//找到最后一个分支节点！！！不是最后一个节点
	int curpos = n / 2 - 1;//(n-1)/2试了不行
	//把每一个分支都调整为小堆的时候 整个完全二叉树就都是小堆了 不正好符合树的递归定义吗
	while (curpos >= 0)
	{
		HeapShiftDown(php, curpos, n);
		curpos--;
	}
}

void HeapInit(MinHeap* pmhp, HeapElemType n)
{
	assert(pmhp != NULL);
	pmhp->capacity = HEAP_DEFAULT_SIZE > n ? HEAP_DEFAULT_SIZE : n;
	pmhp->base = (HeapElemType*)malloc
	(sizeof(HeapElemType) * (pmhp->capacity));
	memset(pmhp->base, 0, sizeof(HeapElemType) * (pmhp->capacity));
	pmhp->size = 0;
}



void HeapInsert(MinHeap* php, HeapElemType n)
{
	assert(php != NULL);
	if (php->size >= php->capacity)
	{
		printf("堆空间已满，%d不能插入堆.\n", n);
		return;
	}

	php->base[php->size] = n;
	HeapShiftUp(php,php->size);
	php->size++;
}

void HeapShiftUp(MinHeap* php, int start)
{
	int j = start; //i=parents j=child
	int i = (j - 1) / 2;

	while (j>0)
	{
		if (php->base[j] < php->base[i])
		{
			Swap(&php->base[j], &php->base[i]);

			//迭代
			j = i;
			i = (j - 1) / 2;
		}
		else
			break;
	}

}

void HeapErase(MinHeap* php)
{
	assert(php != NULL);
	if (php->size == 0)
	{
		printf("堆已空，不能删除堆顶元素。\n");
		return;
	}

	php->size--;
	php->base[0] = php->base[php->size];
	HeapShiftDown(php, 0, php->size);
}

void HeapShiftDown(MinHeap* php, int start, int n)//n为个数要比下标大1
{
	//n为树的总结点
	int i = start;// i=parent j=child
	int j = 2 * i + 1;//左孩子
	while (j < n)
	{
		//寻找左右子树中的最小值
		if (j + 1 < n && php->base[j] > php->base[j + 1])
			j++;
		
		if (php->base[i] > php->base[j])
		{
			Swap(&php->base[i], &php->base[j]);
			i = j;
			j = 2 * i + 1;
		}
		else
			break;
	}
}
void HeapShow(MinHeap* php)
{
	assert(php);
	for (int i = 0; i <php->size; ++i)
		printf(" %d ", php->base[i]);
	printf("\n");
}


HeapElemType HeapTop(MinHeap* php)
{
	assert(php != NULL && php->size > 0);
	return php->base[0];
}

bool HeapEmpty(MinHeap* php)
{
	assert(php != NULL);
	return php->size == 0;
} 

//void HeapSort(MinHeap* php, HeapElemType arr[], int n)
//{
//
//}