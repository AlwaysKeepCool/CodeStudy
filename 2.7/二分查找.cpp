
#include<stdio.h>
//在一个有序数组中查找具体的某个数字n 
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int k = 10;//需要找的数
	int sz = sizeof(arr) / sizeof(arr[0]);//数组元素的个数
	int left = 0, right = sz - 1;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (k == arr[mid])
		{
			printf("该数字的下标是%d\n", mid);
			break;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	if (left > right)
	{
		printf("找不到该数字！");
	}
	
	return 0;
}

和下面一个题类似都需要有while (left<=right)的思想











