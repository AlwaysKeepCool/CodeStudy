//���������ڴ��еĴ���
#include<stdio.h>

int main()
{
	int n = 9;
	//00000000 00000000 00000000 00001001
	float* pFloat = (float*)&n;
	printf("n��ֵΪ��%d\n", n);//9
	printf("*pFloat��ֵΪ��%f\n", *pFloat); //0.000000
	//��int��ȡ�����ְ���float����� 0 00000000 00000000000000000001001
	//                            S    E           M           ->0
	*pFloat = 9.0;
	//1001.0
	//0 10000010 00100000000000000000000
	printf("num��ֵΪ��%d\n", n); //1091567616
	//float->signed int
	printf("*pFloat��ֵΪ��%f\n", *pFloat);// 9.000000
	return 0;
}