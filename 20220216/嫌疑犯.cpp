#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//4�����ɷ�
//A:������
//B;��C
//C:��D
//D:C�ں�˵
//��֪������˵���滰 һ��˵�ļٻ�

int main()
{
	char ch = 'A';
	char killer = 0;
	for (killer = 'A'; killer <= 'D'; killer++)
	{
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
			printf("������%c", killer);
	}
	return 0;
}