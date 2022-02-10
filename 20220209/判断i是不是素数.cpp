//判断i是不是素数
//方法一
int main()
{
	int i,n;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d不是素数", n);
			break;
		}
	}
	if (n == i)
	{
		printf("%d是素数", n);
	}
	
	return 0;
}


//方法二
int main()
{
	int i, n;
	int flag = 1;//假设开始全是素数
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{	
			flag = 0;
			printf("%d不是素数", n);
			break;
		}
	}
	if (n == i)
	{
		printf("%d是素数", n);
	}

	return 0;
}
