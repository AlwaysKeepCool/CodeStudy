//递归实现k的n次方
double Pow(int k, int n)
{
	if (n == 0)
		return 1.0;
	else if (n > 0)
		return k * Pow(k, n - 1);
	else
		return 1.0 / (Pow(k, -n));
}

int main()
{
	int k = 0, n = 0;
	scanf("%d %d", &k, &n);
	double  ret = Pow(k, n);
	printf("%lf", ret);
	return 0;
}