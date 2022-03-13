#include<stdio.h>


void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void PrintArray(int ar[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		printf(" %d ", ar[i]);

	}
	printf("\n");
}


//ð������˼·���������
void BubbleSort(int* ar,  int n)
{
	//һ��ֻ��Ҫn-1��
	for (int i = 0; i < n - 1; ++i)
	{
		for (int j = 0; j < n - i -1; ++j)
		{
			if (ar[j] > ar[j + 1])
			{
				Swap(&ar[j], &ar[j + 1]);
			}
		}
	}
}


//һ�˻���
int Partition(int* ar, int low, int high)
{
						//����ǰ���еĵ�һ��Ԫ����Ϊ���ᣬ�Ա���л���
	int pivot = ar[low];
	while (low < high)  //����ѭ��������
	{
		while (low < high && ar[high] >= pivot)
			high--;
		ar[low] = ar[high];
		while (low < high && ar[low] <= pivot)
			low++;
		ar[high] = ar[low];
	}

	ar[low] = pivot;	//����Ԫ�ش�ŵ�����λ��
	return low;         //���ش�����������λ��
}

void QuickSort(int* ar, int low, int high)
{
	if (low < high)                                 //����ѭ��������
	{
		int pivotpos = Partition(ar, low, high);    //����ֵΪ������������λ��
		QuickSort(ar, low, pivotpos - 1);
		QuickSort(ar, pivotpos + 1, high);
	}
}


int main()
{
	int ar[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n);
	//BubbleSort(ar, n);
	QuickSort(ar, 0, n-1);
	PrintArray(ar, 0, n);



	return 0;
}


