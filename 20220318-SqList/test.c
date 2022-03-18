#include"SqList.h"

void TestSqList()
{
	SqList s;
	int e = 0;
	SqListInit(&s);
	SqListPrint(s);

	//在第一个位置插入1
	SqListInsert(&s, 1, 6);
	SqListInsert(&s, 2, 0);
	SqListInsert(&s, 3, 2);


	SqListPrint(s);

	//删除第1个的值，并把值赋给e
	SqListDelete(&s, 1,&e);
	SqListPrint(s);
	printf(" e=%d", e);

	printf("\n");


	//找到第一个元素值为6的元素，并返回其位序
	
	int pos=SqListSearch(s,999);
	printf("位序为%d", pos);



}


int main()
{
	TestSqList();
	return 0;
}