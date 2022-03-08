#include"heap.h"

void TestMinHeap()
{
	int arr[] = { 27,15,19,18,28,34,65,49,25,37 };
	int n = sizeof(arr) / sizeof(arr[0]);

	MinHeap mhp;
	HeapInit(&mhp, 10);

	for (int i = 0; i < n; ++i)
	{
		HeapInsert(&mhp, arr[i]);
	}

	HeapShow(&mhp);

	HeapErase(&mhp);
	HeapShow(&mhp);



}


void TestMinHeap_2()
{
	int arr[] = {53,17,78,9,45,65,87,23 };
	int n = sizeof(arr) / sizeof(arr[0]);
	MinHeap mhp;
	HeapCreate(&mhp, arr, n);

	HeapShow(&mhp);// 9  17  65  23  45  78  87  53

	while (!HeapEmpty(&mhp))
	{
		int top = HeapTop(&mhp);
		HeapErase(&mhp);
		printf("% d ", top);
	}

	printf("\n");
}


int main()
{
	//TestMinHeap();
	TestMinHeap_2();
	return 0;
}