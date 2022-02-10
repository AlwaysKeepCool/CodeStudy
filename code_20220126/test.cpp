#include <iostream>
using namespace std;

struct List {
	char data;
	List* next;
	List(char _x, List* _next) : data(_x), next(_next) {}
};

List* sameNode(List* headA, List* headB) {
	List* ptr = headA;
	int lenA = 0, lenB = 0;
	//计算长度1
	while (ptr != nullptr) {
		lenA++;
		ptr = ptr->next;
	}
	ptr = headB;
	while (ptr != nullptr) {
		lenB++;
		ptr = ptr->next;
	}
	
	//求长度差
	int dif = 0;
	List* A = headA;
	List* B = headB;
	if (lenA > lenB) {
		dif = lenA - lenB;
		while (dif > 0) {
			A = A->next;
			dif--;
		}
	}
	else {
		dif = lenB - lenA;
		while (dif > 0) {
			B = B->next;
			dif--;
		}
	}

	//找交点
	while (A != B) {
		A = A->next;
		B = B->next;
	}

	return A;
}

int main() {
	List* node1 = new List('a', nullptr);
	List* node2 = new List('b', nullptr);
	List* node3 = new List('c', nullptr);
	List* node4 = new List('d', nullptr);
	List* node5 = new List('e', nullptr);
	List* node6 = new List('f', nullptr);
	List* node7 = new List('g', nullptr);

	//第一条链
	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	//第二条链
	node7->next = node6;
	node6->next = node4;

	List* headA = node1;
	List* headB = node7;
	
	List* ans = sameNode(headA, headB);
	cout << ans->data << endl;
	
	return 0;
}