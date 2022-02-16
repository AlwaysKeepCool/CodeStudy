#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//打印杨辉三角

int main()
{
	int arr[10][10] = { 0 };
	//遍历二维数组
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j <=i; j++)
		{
			if (j == 0)
				arr[i][j] = 1;
			if (i == j)
				arr[i][j] = 1;
			if( i>1 && j>0 )
			arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
		}
	}

	//打印
	for (int i = 0; i < 5; i++)
	{
		for (int j = 5; j >i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		//在前面打印空格 和打印圣诞树一样
		
		printf("\n");
	}
	return 0;
}



//     1
//    1 1
//   1 2 1
//  1 3 3 1
// 1 4 6 4 1
//1 5 10 10 5 1

