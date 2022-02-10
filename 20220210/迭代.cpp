//求第n个斐波那契数。（不考虑溢出）

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//
//int fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return fib(n - 1) + fib(n - 2);
//}
//
//
//int main()
//{
//	int n=0;
//	scanf("%d", &n);
//	int ret = fib(n);
//
//	printf("%d\n", ret);
//	return 0;
//}







////用循环解决斐波那契数列
//int fib(int n)
//{
//	int a = 1, b = 1, c = 1;
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = fib(n);
//
//	printf("%d\n", ret);
//	return 0;
//}


void bubble_sort(int arr[],int sz)
{
	
	int i, j;
	//确定趟数
	for (i = 0; i < sz - 1; i++)
	{
		//一趟冒泡排序内的变化
		for (j = 0; j < sz-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp;
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			
		}

	}
}





int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	bubble_sort(arr,sz);

	for (int i = 0; i < 10; i++)
		printf("%d\n", arr[i]);
	return 0;
}