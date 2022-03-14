#include<stdio.h>
#include<stdlib.h>


#define P 7

typedef struct HashNode
{
	int data;
	struct HashNode* link;
}HashNode;

typedef HashNode* HashTable[P]; //数组指针

//除留余数法
int Hash(int key)
{
	return key % P;
}

void HashInsert(HashTable pht, int x)
{
	int index = Hash(x);
	HashNode* node = (HashNode*)malloc(sizeof(HashNode));
	if (node == NULL)
	{
		exit(-1);
	}
	node->data = x;

	node->link = pht[index];
	pht[index] = node;
}

void HashInit(HashTable pht)
{
	for (int i = 0; i < P; ++i)
		pht[i] = NULL;
}

void HashShow(HashTable pht)
{
	for (int i = 0; i < P; ++i)
	{
		printf(" %d: ",i);
		HashNode* p = pht[i];
		while (p != NULL)
		{
			printf("%d->", p->data);
			p = p->link;
		}
		printf("NULL.\n");
	}
}

void main()
{
	int ar[] = { 1,2,15,3,9 };
	int n = sizeof(ar) / sizeof(ar[0]);
	HashTable ht;
	HashInit(ht);

	for (int i = 0; i < n; ++i)
		HashInsert(ht, ar[i]);

	HashShow(ht);
 	return 0;
}