#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//喝汽水问题 ，一瓶汽水一元，2个空瓶可以换一瓶汽水，给20元，可以喝多少瓶汽水
int main()
{
	int money = 0;
	scanf("%d", &money);
	int count = money;
	int empty = money;
	while (empty / 2)
	{
		count += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", count);
	return 0;
}