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

	//�����µ���
	//�ҵ����һ����֧�ڵ㣡�����������һ���ڵ�
	int curpos = n / 2 - 1;//(n-1)/2���˲���
	//��ÿһ����֧������ΪС�ѵ�ʱ�� ������ȫ�������Ͷ���С���� �����÷������ĵݹ鶨����
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
		printf("�ѿռ�������%d���ܲ����.\n", n);
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

			//����
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
		printf("���ѿգ�����ɾ���Ѷ�Ԫ�ء�\n");
		return;
	}

	php->size--;
	php->base[0] = php->base[php->size];
	HeapShiftDown(php, 0, php->size);
}

void HeapShiftDown(MinHeap* php, int start, int n)//nΪ����Ҫ���±��1
{
	//nΪ�����ܽ��
	int i = start;// i=parent j=child
	int j = 2 * i + 1;//����
	while (j < n)
	{
		//Ѱ�����������е���Сֵ
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