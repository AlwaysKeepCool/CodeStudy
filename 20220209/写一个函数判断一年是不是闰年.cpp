//дһ�������ж�һ���ǲ������ꡣ
int is_leap_year(int n)
{
	if ((n % 400 == 0) || (n % 4 == 0) && (n % 100 != 0))
		return 1;
	else
		return 0;
}
int main()
{
	int n, m;
	scanf("%d", &n);

	m = is_leap_year(n);
	if (m == 1)
		printf("���������꣡");
	else
		printf("���겻�����꣡");

	return 0;
}
