#include "SeqList.h"

//����
void TestSeqList1()
{
	SeqList s;
	SeqListInit(&s);
	//��ʼ��
	SeqListPushBack(&s, 1);
	SeqListPushBack(&s, 2);
	SeqListPushBack(&s, 3);
	SeqListPushBack(&s, 4);
	SeqListPushBack(&s, 5);
	SeqListPrint(&s);

	seqListPopBack(&s);
	seqListPopBack(&s);
	SeqListPrint(&s);//��Ȼ���ﴫ�ṹ��Ҳ�У�����ѹջ

	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPushFront(&s, 0);
	SeqListPrint(&s);

	SeqListInsert(&s, 2, 520);
	SeqListPrint(&s);

	SeqListErase(&s, 2);
	SeqListPrint(&s);

	int pos=SeqListSearch(&s, 2);
	if (pos != -1)
	{
		SeqListErase(&s, pos);
	}
	SeqListPrint(&s);

	SeqListDestory(&s);


}



int  main()
{

	TestSeqList1();

	return 0;
}