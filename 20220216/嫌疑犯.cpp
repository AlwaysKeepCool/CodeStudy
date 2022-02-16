#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//4个嫌疑犯
//A:不是我
//B;是C
//C:是D
//D:C在胡说
//已知三个人说了真话 一个说的假话

int main()
{
	char ch = 'A';
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			printf("凶手是%c", killer);
	}
	return 0;
}