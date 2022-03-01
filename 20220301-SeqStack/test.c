#include"stack.h"


void TestStack1()
{
	
	SeqStack st;
	SeqStackInit(&st,100);

	SeqStackPush(&st,1);
	SeqStackPush(&st,2);
	SeqStackPush(&st,3);
	SeqStackPush(&st,4);
	SeqStackPush(&st,5);

	SeqStackShow(&st);

	SeqStackPop(&st);
	SeqStackPop(&st);
	SeqStackPop(&st);
	
	SeqStackShow(&st);

	SeqStackTop(&st);

	SeqStackDestroy(&st);
	SeqStackShow(&st);

}




int main()
{
	TestStack1();
	return 0;
}