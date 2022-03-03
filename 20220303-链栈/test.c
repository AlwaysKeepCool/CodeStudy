#include"ListStack.h"


void TestListStack()
{
	LinkStackNode* pst;	LinkStackInit(&pst);

	
	LinkStackPush(&pst, 1);
	LinkStackPush(&pst, 2);
	LinkStackPush(&pst, 3);
	LinkStackPush(&pst, 4);
	LinkStackPush(&pst, 5);
	LinkStackShow(pst);

	LinkStackPop(&pst);
	LinkStackPop(&pst);
	LinkStackShow(pst);

	printf("top=%d", LinkStackTop(pst));

}



int main()
{
	TestListStack();
	return 0;

}