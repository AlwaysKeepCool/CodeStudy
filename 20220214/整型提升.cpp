//#include<stdio.h>
////无符号的整型恒大于0
//int main()
//{
//	unsigned int i;
//	//00000000 00000000 00000000 00001001
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}


#include<stdio.h>
#include<string.h>

//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	//-1 -2 -3 -4...-127 -128 127 126 125...2 1 0 -1 -2...-127 -128
//	printf("%d", strlen(a));//255
//	//strlen碰到\0结束
//	return 0;
//}











//
//unsigned char i = 0;
////无符号char的取值范围为0~255
//int main()
//{
//	for (i = 0; i <= 255; i++)
//	{
//		printf("hello world\n");//死循环
//	}
//	return 0;
//}