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
			
			//����
			end--;
		}
	 }
}

//��������efficiency�Ƿ���һ��10��
void InsertSort_2(int* ar, int left, int right)
{
	for (int i = left+1; i < right; i++)
	{
		int tmp = ar[i];
		int end = i;
		while (end > left && tmp < ar[end - 1])
		{   //������ڱ�λ������һ�� end > left 
			ar[end] = ar[end - 1];

			//����
			end--;
		}
		ar[end] = tmp;
	}
}


//�ڱ�λ��ֱ�Ӳ������� ���ַ����͵ڶ������
void InsertSort_3(int* ar, int left, int right)
{
	for (int i = left + 1; i < right; ++i)
	{
		ar[0] = ar[i]; //�ڱ�λ
		int end = i;
		while (ar[0] < ar[end - 1])
		{
			ar[end] = ar[end - 1];
			end--;
		}
		ar[end] = ar[0];
	}
}



//�۰��������,����ֻ�Ǽ����˱Ƚϵ�ʱ�䣬�ƶ���ʱ�䲢δ����

void BinInsertSort(int* ar, int left, int right)
{
	for (int i = left + 1; i < right; i++)
	{
		int tmp = ar[i];//��ʱ�ռ�
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


 //����֪ʶ�㣺2·����������


void ShellSort(int* ar, int n)
{
	int j,k,tmp;
	//gapΪ����,��ʼ��Ϊ���鳤�ȵ�һ�룬ÿ�α����󲽳�����,
	for (int gap = n / 2; gap >= 1; gap = gap / 2)
	{
		// ���� i Ϊÿ�η���ĵ�һ��Ԫ���±� 
		for (int i = 0; i < gap; ++i)
		{
			
			//�Բ���Ϊgap��Ԫ�ؽ���ֱ�����򣬵�gapΪ1ʱ������ֱ������
			for (j = i + gap; j < n; j += gap)
			{
				tmp = ar[j];  // ����a[j]��ֵ
				k = j - gap;  // j��ʼ��Ϊi��ǰһ��Ԫ�أ���i���gap���ȣ�
				while (k >= 0 && ar[k] > tmp)
				{
					ar[k + gap] = ar[k]; // ����a[i]ǰ�ұ�tmp��ֵ���Ԫ������ƶ�һλ
					k -= gap;
				}
				ar[k + gap] = tmp;
			}
		}
	}
}

