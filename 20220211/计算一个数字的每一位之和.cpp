//计算一个数字的每一位之和
//迭代的思路
int DigitSum(int n)
{
	int sum = 0, ret = 0;
	if (n < 9)
		return n;
	else
	{
		return DigitSum(n / 10) + n % 10;
		//ret = n % 10;//1
		//n = n / 10;//2
		//DigitSum(n);
	}
	//	sum = sum + ret;//4
	//	return sum;
}

int main()
{
	int sum = 0;
	int num = 1729;
	sum = DigitSum(num);
	printf("%d\n", sum);

	return 0;
}





