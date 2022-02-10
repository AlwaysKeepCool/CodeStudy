/*编写代码实现，模拟用户登录情景，并且只能登录三次。（只允许输入三次密码，如果密码正确则
提示登录成，如果三次均输入错误，则退出程序。*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char password[20] = {};

	int i = 0;
	//假设密码是123456
	for (i = 0; i < 3; i++)
	{
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//一定要用双引号括起来 不然就为整形123456
		{
			printf("密码正确！");
			break;
		}
		else
			printf("密码错误请重新输入！\n");
	}
	if (i == 3)
	{
		printf("密码错误三次退出程序");
	}
	return 0;
}

/*心得
用双引号“”括起来的不管是数字还是字母均为字符串    ‘‘单引号括起来的为字符*/