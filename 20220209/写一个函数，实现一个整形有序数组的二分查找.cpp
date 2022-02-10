#define _CRT_SECURE_NO_WARNINGS 
#include<stdio.h>


int binary_search(int arr[], int key, int sz)
{
	int left = 0, mid;
	int right = sz - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;
		if (arr[mid] > key)
			right = mid - 1;
		else if (arr[mid] < key)
			left = mid + 1;
		else
			return mid;
	}
	if (left > right)
		return -1;

}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int key = 2;//要查找的数为key
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = binary_search(arr, key, sz);
	if (ret != -1)
		printf("该数字key的下标为%d\n", ret);
	else
		printf("没有查找到该数字！\n");
	return 0;
}



