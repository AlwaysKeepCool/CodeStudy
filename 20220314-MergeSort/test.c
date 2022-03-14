#include<stdio.h>
#include<stdlib.h>

void PrintArray(int ar[], int left, int right)
{
	for (int i = left; i < right; i++)
	{
		printf(" %d ", ar[i]);

	}
	printf("\n");
}


void Merge(int* ar, int low, int mid, int high,int* tmp) 
{
	//ar[low...mid]  ar[mid+1...high]
	for (int k = low; k <= high; k++)
		tmp[k] = ar[k];                   //��ar�е�����Ԫ�ظ��Ƶ�tmp��

	//k��ʱΪ����ָ��
	int i, j, k;
	for ( i = low, j = mid + 1, k = low; i <= mid && j <= high; k++)
	{
		if (tmp[i] <= tmp[j])             //�Ƚ�tmp�����������е�Ԫ��
			ar[k] = tmp[i++];             //����Сֵ���Ƶ�ar��    
		else                              
		{
			ar[k] = tmp[j++];
		}

	}

	while (i <= mid)     ar[k++] = tmp[i++];
	while (j <= high)     ar[k++] = tmp[j++];
 
	
}

void MergeSort(int* ar, int low, int high)
{
	int* tmp = (int*)malloc(sizeof(int) * (high + 1));
	if (tmp == NULL)
	{
		exit(-1);
	}
	if (low < high)
	{
		int mid = (low + high) / 2;
		MergeSort(ar, low, mid);
		MergeSort(ar, mid + 1, high);
		Merge(ar, low, mid, high,tmp);                 //�鲢
	}
	free(tmp);
	tmp = NULL;
	
}



int main()
{
	int ar[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n);
	MergeSort(ar, 0, n-1);
	PrintArray(ar, 0, n);

	return 0;
}


