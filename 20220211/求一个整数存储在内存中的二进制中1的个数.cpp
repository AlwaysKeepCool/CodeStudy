//��д����ʵ�֣���һ�������洢���ڴ��еĶ�������1�ĸ�����
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




//��չ
int main()
{
	int num = 5;
	int count = 0;//����
	while (num)
	{
		if (num % 2 == 1)
			count++;
		num = num / 2;
	}
	printf("��������1�ĸ��� = %d\n", count);
	return 0;
}