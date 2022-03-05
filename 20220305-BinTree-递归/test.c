#include"bintree.h"


void TestBinTree1()
{
	const char* str = "AB#DF###CE###";
	BinTree bt;
	BinTreeInit(&bt);
	//BinTreeCreate_1(&bt);
	//bt = BinTreeCreate_2();
	int index = 0;
	bt = BinTreeCreate_3(str, &index);
	
	
	//AB#DF###CE###
	printf("size:%d\n", Size(bt));

	//先序遍历
	printf("VLR:");
	BinTreeVLR(bt);
	printf("\n");

	//中序遍历
	printf("LVR:"); 
	BinTreeLVR(bt); 
	printf("\n");

	//后序遍历
	printf("LRV:");
	BinTreeLRV(bt);
	printf("\n");

	//层次遍历
	printf("Level:");
	BinTreeLevel(bt);
	printf("\n");


	printf("size = %d\n", Size(bt));
	printf("height = %d\n", Height(bt));

	char key = 'B';
		BinTreeNode * p = BinTreeFind(bt, key);

		BinTreeNode* pr = BinTreeParent(bt, p);
}

void TestBinTree2()
{
	const char* str = "AB#DF###CE###";
	BinTree bt;
	BinTreeInit(&bt);
	int index = 0;
	bt = BinTreeCreate_3(str, &index);

	BinTree bt_clone = BinTreeClone(bt);
}

 int main()
{
	//TestBinTree1();
	TestBinTree2();
	return 0;
}