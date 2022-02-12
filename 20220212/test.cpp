#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//
////二进制中的1的个数
//int Numberof1(int n)
//{
//	int count = 0;
//	for (int i = 0; i < 32; i++)
//	{
//		if ((n >>i)& 1 == 1)
//		{
//			count++;
//		}
//		
//	}
//	
//	return count;
//}
//
//int main()
//{
//	int n = -1;
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	return 0;
//}











//
////方法二
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//
//int main()
//{
//	int n = -1;
//	int ret = Numberof1(n);
//	printf("%d\n", ret);
//	return 0;
//}




//
////n和m二进制中不相同的数的个数
//
//
//int Numberof1(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//
//	return count;
//}
//int Func(int a, int b)
//{
//	int n = 0;
//	n = a ^ b;
//	int ret2 = Numberof1(n);
//	return ret2;
//}
//
//int main()
//{
//	int m = 1;
//	int n = 2;
//	int ret1 = Func(m, n);
//	printf("%d\n", ret1);
//	return 0;
//}
//
//
//















////获取一个二进制中数中的奇数位和偶数位
//
//int main()
//{
//	int m = 13;
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d  ", (m >> i) & 1);
//	}
//	printf("\n");
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d  ", (m >> i) & 1);
//	}
//	return 0;
//}











//#include<stdio.h>
//int main()
//{
//    return 0;
//}


#include<stdio.h>
int main()
{
    int number = 0;
    double c = 0;
    double math = 0;
    double english = 0;

    scanf("%d;%lf,%lf,%lf", &number, &c, &math, &english);
    printf("The each subject score of No. %d is %.2lf, %.2lf, %.2lf.", number, c, math, english);
    return 0;
}
