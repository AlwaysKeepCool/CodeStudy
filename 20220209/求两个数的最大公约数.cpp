
//�������������Լ��
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int m, n, max;
	
	scanf("%d%d",&m,&n);
	max = m;
	if (m < n)
	{
		max = n;

	}
	while (1)
	{
		
		if (m % max == 0 && n % max == 0)
		{
			printf("���Լ��Ϊ%d", max);
			break;
		}
		max--;
	}
	return 0;
}


//շת����������Լ��
int main()
{
	int m, n, t;
	scanf("%d%d", &m, &n);
	while (m%n)
	{
		t = m % n;
		m = n;
		n = t;
	}
	printf("���Լ��Ϊ%d\n", n);
	return 0;
}











