//写一个函数判断一年是不是闰年。
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
		printf("该年是闰年！");
	else
		printf("该年不是闰年！");

	return 0;
}
