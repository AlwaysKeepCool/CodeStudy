#include"SList.h"

void TestSList()
{
	//SListNode phead;//直接定义一个头节点？
	//此时只需要一个指针即可，不需要结点！！！！
	SListNode* pList = NULL;//因为头指针只有指针域没有数据域，这里只需要一个指针变量即可

	SListPrint(pList);
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 1);
	SListPushBack(&pList, 1);
	SListPrint(pList);

	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPopBack(&pList);
	SListPrint(pList);

	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 4);
	SListPushFront(&pList, 5);
	//头插打印过来的值是颠倒过来的
	SListPrint(pList);

	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPopFront(&pList);
	SListPrint(pList);
	SListPopFront(&pList);


	SListPushFront(&pList, 1);
	SListPushFront(&pList, 2);
	SListPushFront(&pList, 3);
	SListPushFront(&pList, 4);
	SListPrint(pList);

	SListNode* pos=SListSearch(pList, 2);
	if (pos!= NULL)
	{
		pos->data = 666;
	}
	SListPrint(pList);



	
}




int main()
{
	TestSList();
	return 0;
}