#include"SList.h"

void TestSList()
{
	//SListNode phead;//ֱ�Ӷ���һ��ͷ�ڵ㣿
	//��ʱֻ��Ҫһ��ָ�뼴�ɣ�����Ҫ��㣡������
	SListNode* pList = NULL;//��Ϊͷָ��ֻ��ָ����û������������ֻ��Ҫһ��ָ���������

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
	//ͷ���ӡ������ֵ�ǵߵ�������
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