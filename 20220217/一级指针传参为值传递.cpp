#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void GetMemory(char* p)
{
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}


/*str����GetMemory������ʱ����ֵ���ݣ�����
GetMemory�������β�p��str��һ����ʱ������
��GetMemory�����ڲ���̬����ռ�ĵ�ַ�������p
�У�����Ӱ�����str,���Ե�GetMemory��������֮
��str��Ȼ��NULL������strcpy��ʧ�ܡ�

��GetMemory��������֮���β�p���٣�ʹ�ö�̬����
��100���ֽڴ����ڴ�й©���޷��ͷš�*/




void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
/*��ʱ��&str����ָ��ĵ�ַ���ö���ָ����ܣ�������������ڴ�
й¶������*/


/*���������ֵ���Ҫԭ���Ƕ� һάָ��Ĵ��η�ʽ����Ϊ�ǵ�ַ���ݣ�����һϵ�е�ʵ�������*/
