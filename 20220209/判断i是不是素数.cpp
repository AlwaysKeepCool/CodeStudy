//�ж�i�ǲ�������
//����һ
int main()
{
	int i,n;
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d��������", n);
			break;
		}
	}
	if (n == i)
	{
		printf("%d������", n);
	}
	
	return 0;
}


//������
int main()
{
	int i, n;
	int flag = 1;//���迪ʼȫ������
	scanf("%d", &n);
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{	
			flag = 0;
			printf("%d��������", n);
			break;
		}
	}
	if (n == i)
	{
		printf("%d������", n);
	}

	return 0;
}
