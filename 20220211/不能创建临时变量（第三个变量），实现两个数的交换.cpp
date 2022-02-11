//不能创建临时变量（第三个变量），实现两个数的交换。
//一道变态的面试题：

int main()
{
	int a = 10, b = 20;
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a=%d b=%d\n", a, b);
	return 0;
}

