#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//输入一个整型数组
//调整整数的顺序 使奇数位于前半部分 偶数位于后半部分


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
		//从前往后找一个偶数
		while ((left<right) && (arr[left] % 2 == 1))
		{

			left++;
		}


		//从后往前找一个奇数
		while ((left<right) && (arr[right] % 2 == 0))
		{
			right--;
		}


		//交换
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



