#include"SqList.h"

void TestSqList()
{
	SqList s;
	int e = 0;
	SqListInit(&s);
	SqListPrint(s);

	//�ڵ�һ��λ�ò���1
	SqListInsert(&s, 1, 6);
	SqListInsert(&s, 2, 0);
	SqListInsert(&s, 3, 2);


	SqListPrint(s);

	//ɾ����1����ֵ������ֵ����e
	SqListDelete(&s, 1,&e);
	SqListPrint(s);
	printf(" e=%d", e);

	printf("\n");


	//�ҵ���һ��Ԫ��ֵΪ6��Ԫ�أ���������λ��
	
	int pos=SqListSearch(s,999);
	printf("λ��Ϊ%d", pos);



}


int main()
{
	TestSqList();
	return 0;
}