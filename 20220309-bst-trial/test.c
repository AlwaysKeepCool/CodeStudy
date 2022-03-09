#include"bst.h"


void TestBSTree()
{
	int arr[] = { 27,15,19,18,28,34,65,49,25,37 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	BSTree bst;
	BstInit(&bst);

	for (int i = 0; i < n; ++i)
		BstInsert(&bst, arr[i]);

}


int main()
{
	TestBSTree();
	return 0;
} 