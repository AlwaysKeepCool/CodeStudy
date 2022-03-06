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


void TestBinTree3()
{
	const char* str = "AB#DF###CE###";
	BinTree bt;
	BinTreeInit(&bt);
	int index = 0;
	bt = BinTreeCreate_3(str, &index);

	BinTreeVLR_Nor(bt);
	printf("\n"); 
	BinTreeLVR_Nor(bt);


}

void TestBinTree4()
{
	const char* vlr = "ABCDEFGH";
	const char* lvr = "CBEDFAGH";
	const char* lrv = "CEFDBHGA";

	BinTree bt;
	BinTreeInit(&bt);

	bt=BinTreeCreate_4(vlr, lvr, strlen(vlr));
}


 int main()
{
	//TestBinTree1();
	//TestBinTree2();
	//TestBinTree3();
	TestBinTree4();
	return 0;
}