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


//冒泡排序思路是最好理解的
void BubbleSort(int* ar,  int n)
{
	//一共只需要n-1趟
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


//一趟划分
int Partition(int* ar, int low, int high)
{
						//将当前表中的第一个元素设为枢轴，对表进行划分
	int pivot = ar[low];
	while (low < high)  //跳出循环的条件
	{
		while (low < high && ar[high] >= pivot)
			high--;
		ar[low] = ar[high];
		while (low < high && ar[low] <= pivot)
			low++;
		ar[high] = ar[low];
	}

	ar[low] = pivot;	//枢轴元素存放的最终位置
	return low;         //返回存放枢轴的最终位置
}

void QuickSort(int* ar, int low, int high)
{
	if (low < high)                                 //跳出循环的条件
	{
		int pivotpos = Partition(ar, low, high);    //返回值为存放枢轴的最终位置
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


