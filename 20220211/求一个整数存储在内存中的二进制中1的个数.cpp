//编写代码实现：求一个整数存储在内存中的二进制中1的个数。
//0000000000101
//0000000000001
//& >> 1

int main()
{
	int count = 0;
	int num = 13;
	while (num)
	{
		if (num & 1 == 1)
			count++;
		num = num >> 1;
	}
	printf("%d\n", count);


	return 0;
}




//拓展
int main()
{
	int num = 5;
	int count = 0;//计数
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("二进制中1的个数 = %d\n", count);
	return 0;
}