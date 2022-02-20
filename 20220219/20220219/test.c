#include "SeqList.h"

//测试
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	//初始化
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);

	seqListPopBack(&s);
	seqListPopBack(&s);
	SeqListPrint(&s);//虽然这里传结构体也行，但会压栈

	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);

	SeqListInsert(&s, 2, 520);
	SeqListPrint(&s);

	SeqListErase(&s, 2);
	SeqListPrint(&s);


}



int  main()
{

	TestSeqList1();

	return 0;
}