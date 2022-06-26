#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//·ÇµÝ¹éÑ­»·
int Fibon(int n)
{
	int result = 0, pre_result = 1, pre_pre_result = 1;
	result = pre_result;
	
	while (n>2)
	{
		result = pre_pre_result + pre_result;		
		pre_pre_result = pre_result;
		pre_result = result;
		n--;
	}
	return result;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	printf("%d", Fibon(n));
	return 0;
}

