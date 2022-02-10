//编写代码，演示多个字符从两端移动，向中间汇聚。

#include<stdio.h>
#include<string.h>

int main()
{
	char arr1[] = "welcome to bit!!!!!!";
	char arr2[] = "####################";
	int sz = strlen(arr1);
	int left = 0, right = sz - 1;
	while (left <= right)
	{

		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;

}

//下面代码，打印结果是什么？为什么？（突出'\0'的重要性）
#include <stdio.h>

int main()
{
	char arr1[] = "bit";
	char arr2[] = { 'b', 'i', 't' };
	char arr3[] = { 'b', 'i', 't', '\0' };
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%s\n", arr3);
	return 0;
}
//重点
//定义字符型数组时 如果像arr1这样定义，则默认在其后面有\0
//若像arr2一样则必须加上\0  并且当用strlen求字符串长度时，arr3中的\0并不会使其+1,只占内存并不会使数量+1；

//写一个函数判断一年是不是闰年。
int is_leap_year(int n)
{
	if ((n % 400 == 0) || (n % 4 == 0) && (n % 100 != 0))
	{
		return 1;
	}
	else
		return 0;
}
int main()
{
	int n,m;
	scanf("%d", &n);

	m = is_leap_year(n);
	if (m == 1)
		printf("该年是闰年！");
	else
		printf("该年不是闰年！");
	
	return 0;
}