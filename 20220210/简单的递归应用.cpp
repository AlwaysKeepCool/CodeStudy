#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//void print(int n)
//{
//	if (n > 9)
//	{
//
//		//n = n / 10;
//		//这里太容易出错了
//		print(n/10);
//	}
//	printf("%d ", n%10);
//}
//
//int main()
//{
//	int num;//  n=1234
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}


















#include<string.h>

//int main()
//{
//	char arr[] = "happy";
//	printf("%d\n", strlen("happy"));
//	return 0;
//}



//int my_strlen(char* p )
//{
//	int count = 0;
//	while((*p) != '\0')
//	{
//		count++;
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "happy";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//
//







//字符串长度
//int my_strlen(char* str)
//{
//	if ((*str) != '\0')  //‘\0’打成‘0’了
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	printf("%d\n", my_strlen(arr));
//	return 0;
//}
//



//
////迭代方式求n的阶层
//
//int Fun(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fun(n - 1);
//}
//
//int main()
//{
//	int n = 5;
//	int ret = Fun(n);
//	printf("%d\n", ret);
//	return 0;
//}






//求第n个斐波那契数。（不考虑溢出）