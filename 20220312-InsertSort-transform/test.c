#include"sort.h"


void TestSort1()
{ //              0  1  2  3  4  5 6  7
	int ar[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n);


	//InsertSort_1(ar, 0, n);
	InsertSort_2(ar, 0, n);

	PrintArray(ar, 0, n);



}


void TestSort2()
{
	int ar[] = { 0,49,38,65,97,76,13,27,49 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n);

	//InsertSort_3(&ar, 0, n);
	//PrintArray(ar, 0, n);
	ShellSort(ar,n);
	PrintArray(ar, 0, n);



}



void TestSort3()
{
	int ar[] = { 49,38,65,97,76,13,27,49 };
	int n = sizeof(ar) / sizeof(ar[0]);
	PrintArray(ar, 0, n);

	BinInsertSort(ar, 0, n);
	PrintArray(ar, 0, n);


}


int main()
{
	//TestSort1();
	TestSort2();
	//TestSort3();

	return 0;
}