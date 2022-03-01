#include"List.h"
//带头 双向 循环 链表

void TestList1()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushBack(&phead,1);
	ListPushBack(&phead, 2);
	ListPushBack(&phead, 3);
	ListPushBack(&phead, 4);
	ListPushBack(&phead, 5);
	ListPrint(phead);

	ListPopBack(&phead);
	ListPopBack(&phead);
	ListPopBack(&phead);
	ListPopBack(&phead);
	ListPopBack(&phead);
	//ListPopBack(&phead);


	ListPrint(phead);
}

void TestList2()
{
	ListNode* phead = NULL;
	ListInit(&phead);
	ListPushFront(&phead, 1);
	ListPushFront(&phead, 2);
	ListPushFront(&phead, 3);
	ListPushFront(&phead, 4);
	ListPushFront(&phead, 5);
	ListPrint(phead);

	/*ListPopFront(&phead);
	ListPopFront(&phead);
	ListPopFront(&phead);
	ListPopFront(&phead);
	ListPrint(phead);*/
	ListNode* pos=ListFind(phead,5);
	ListInsert(pos, 666);
	ListPrint(phead);

	pos = ListFind(phead, 5);
	ListErase(pos);
	ListPrint(phead);


	ListNodeDestroy(&phead);
	ListPrint(phead);

}




int main()
{
	TestList2();
	return 0;
}