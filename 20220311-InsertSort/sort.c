#include"sort.h"


void PrintArray(int ar[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		printf(" %d ", ar[i]);
	
	}	
	printf("\n");
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void InsertSort_1 (int* ar, int left, int right)
{
	for (int i = left+1; i < right; i++)
	{
		int end = i;
		while (end > left && ar[end] < ar[end - 1])
		{
			Swap(&ar[end], &ar[end - 1]);
			
			//迭代
			end--;
		}
	 }
}

//方法二的efficiency是方法一的10倍
void InsertSort_2(int* ar, int left, int right)
{
	for (int i = left+1; i < right; i++)
	{
		int tmp = ar[i];
		int end = i;
		while (end > left && tmp < ar[end - 1])
		{   //这个和哨兵位的作用一样 end > left 
			ar[end] = ar[end - 1];

			//迭代
			end--;
		}
		ar[end] = tmp;
	}
}


//哨兵位的直接插入排序 这种方法和第二个差不多
void InsertSort_3(int* ar, int left, int right)
{
	for (int i = left + 1; i < right; ++i)
	{
		ar[0] = ar[i]; //哨兵位
		int end = i;
		while (ar[0] < ar[end - 1])
		{
			ar[end] = ar[end - 1];
			end--;
		}
		ar[end] = ar[0];
	}
}



//折半插入排序,仅仅只是减少了比较的时间，移动的时间并未减少

void BinInsertSort(int* ar, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int tmp = ar[i];//临时空间
		int low = 0;
		int high = i - 1;

		while (low <= high)
		{
			int m = (low + high) / 2;
			if (tmp < ar[m])
				high = m - 1;
			else
				low = m + 1;
		}

		for (int j = i - 1; j >= high + 1; --j)
			ar[j + 1] = ar[j];
		ar[high + 1] = tmp;
	}
}


 //额外知识点：2路插入语排序


void ShellSort(int* ar, int n)
{
	int j,k,tmp;
	//gap为步长,初始化为数组长度的一半，每次遍历后步长减半,
	for (int gap = n / 2; gap >= 1; gap = gap / 2)
	{
		// 变量 i 为每次分组的第一个元素下标 
		for (int i = 0; i < gap; ++i)
		{
			
			//对步长为gap的元素进行直插排序，当gap为1时，就是直插排序
			for (j = i + gap; j < n; j += gap)
			{
				tmp = ar[j];  // 备份a[j]的值
				k = j - gap;  // j初始化为i的前一个元素（与i相差gap长度）
				while (k >= 0 && ar[k] > tmp)
				{
					ar[k + gap] = ar[k]; // 将在a[i]前且比tmp的值大的元素向后移动一位
					k -= gap;
				}
				ar[k + gap] = tmp;
			}
		}
	}
}

