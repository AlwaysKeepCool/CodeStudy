#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//����ˮ���� ��һƿ��ˮһԪ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Ժȶ���ƿ��ˮ
int main()
{
	int money = 0;
	scanf("%d", &money);
	int count = money;
	int empty = money;
	while (empty / 2)
	{
		count += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("%d", count);
	return 0;
}