#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//���1~100000��ˮ�ɻ��� 
//ˮ�ɻ�����ָһ��nλ�������λ���ֵ�n�η�֮�͵��ڸ�������
int main()
{
	for (int i = 1; i < 100000; i++)
	{

		//����Ϊ��λ��
		int tmp = i;
		int count = 1;
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//��ÿһλ��
		int sum = 0;
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//�ж�
		if (sum == i)
			printf("%d\n", i);

	}
	
	return 0;
}