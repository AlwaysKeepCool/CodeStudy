#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


////��Sn=a+aa+aaa+aaaa+aaaaa��ֵ
//int main()
//{
//	int a = 0;
//	int n = 0;
//	scanf("%d%d", &a,&n);
//	int sum = 0;
//	int ret = 0;
//	for (int i = 0; i < n; i++)
//	{
//		 ret = ret * 10 + a;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}












//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ��
void print_arr(int* p,int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d", *(p + i));
	}
	
}

int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	print_arr(arr,10);
	return 0;
}
