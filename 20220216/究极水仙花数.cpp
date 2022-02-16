#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//求出1~100000的水仙花数 
//水仙花数是指一个n位数，其各位数字的n次方之和等于该数本身
int main()
{
	for (int i = 1; i < 100000; i++)
	{

		//该数为几位数
		int tmp = i;
		int count = 1;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//求每一位数
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//判断
		if (sum == i)
			printf("%d\n", i);

	}
	
	return 0;
}