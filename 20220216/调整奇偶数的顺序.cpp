#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����һ����������
//����������˳�� ʹ����λ��ǰ�벿�� ż��λ�ں�벿��


void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", arr[i]);
	}
}

void move(int arr[], int sz)
{
	int left = 0;
	int right = sz - 1;
	
	while (left < right)
	{
		//��ǰ������һ��ż��
		while ((left<right) && (arr[left] % 2 == 1))
		{

			left++;
		}


		//�Ӻ���ǰ��һ������
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}


		//����
		int tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
	}
	

}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr, sz);
	print(arr, sz);
	return 0;
}



