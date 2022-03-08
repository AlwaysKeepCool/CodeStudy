#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<memory.h>
#include<stdbool.h>

#define HEAP_DEFAULT_SIZE 20

typedef int HeapElemType;
typedef struct MinHeap
{
	HeapElemType* base;
	size_t		  capacity;
	size_t		  size;
}MinHeap;

void HeapInit(MinHeap* pmhp,HeapElemType n);
void HeapInsert(MinHeap* php, HeapElemType n);
void HeapShiftUp(MinHeap* php, int start);
void HeapShow(MinHeap* php);
void Swap(int* a,int* b);
void HeapErase(MinHeap* php);
void HeapShiftDown(MinHeap* php, int start, int n);
void HeapCreate(MinHeap* php, HeapElemType arr[], int n);
HeapElemType HeapTop(MinHeap* php);
void HeapSort(MinHeap* php,HeapElemType arr[],int n);
bool HeapEmpty(MinHeap* php);
