//将字符串逆序输出
//方法一 用循环方法
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

void resever_table(char arr[])
{
	int left = 0,right=strlen(arr)-1;
	while (left < right)
	{
		char tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++; right--;
	}
	
//	printf("%d\n", right);
}

int main()
{
	int i = 0;
	char arr[] = "abcdef";//输入abcdef
	resever_table(arr);
	/*for (i = 0; i <strlen(arr) ; i++)
	{
		printf("%c", arr[i]);
	}*/
	printf("%s", arr);
	return 0;
}







//方法二  学习用递归解决问题

void resever_table(char* str)
{
	int sz = strlen(str);
	char tmp = *str;//1
	*str = *(str + sz - 1);//2
	*(str + sz - 1) = '\0';//3
	if(strlen(str+1)>=2)
	{
		resever_table(str + 1);//4
	}
	
	
	*(str + sz - 1) = tmp;		//5
}


int main()
{
	int i = 0;
	char arr[] = "abcdef";//输入abcdef
	resever_table(arr);
	/*for (i = 0; i <strlen(arr) ; i++)
	{
		printf("%c", arr[i]);
	}*/
	printf("%s", arr);
	return 0;
}




