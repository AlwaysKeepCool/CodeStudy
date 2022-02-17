#include<stdio.h>
#include<stdlib.h>
#include<string.h>


void GetMemory(char* p)
{
	p = (char*)malloc(100);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(str);
	strcpy(str, "hello world");
	printf(str);
}


/*str传给GetMemory函数的时候是值传递，所以
GetMemory函数的形参p是str的一份临时拷贝。
在GetMemory函数内部动态申请空间的地址，存放在p
中，不会影响外边str,所以当GetMemory函数返回之
后，str依然是NULL。所以strcpy会失败。

当GetMemory函数返回之后，形参p销毁，使得动态开辟
的100个字节存在内存泄漏。无法释放。*/




void GetMemory(char** p, int num)
{
	*p = (char*)malloc(num);
}
void Test(void)
{
	char* str = NULL;
	GetMemory(&str, 100);
	strcpy(str, "hello");
	printf(str);
}
/*此时用&str传递指针的地址，用二级指针接受，可以完美解决内存
泄露的问题*/


/*这个问题出现的主要原因是对 一维指针的传参方式自认为是地址传递，经过一系列的实验才明白*/
