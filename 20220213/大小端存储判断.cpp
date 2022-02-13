//百度2015年系统工程师笔试题：
//请简述大端字节序和小端字节序的概念，设计一个小程序来判断当前机器的字节序



//大端字节序是指数据的高位存储在内存的低位
#include<stdio.h>

int main()
{
	int num = 1;
	//0X0001
	//大端    0X0001
	//小端    0X1000
	char* p =(char*) &num;
	if (*p == 1)
	{
		printf("为小端！");
	}
	else
		printf("为大端！");
	return 0;
}









