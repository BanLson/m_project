#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <iostream>
using namespace std;
typedef int ElemType;
typedef struct Node* PtrToNode;
typedef struct Node {
	ElemType Data;
	PtrToNode Next;
}*List;
void test1();

int main()
{
	/*cout << "hello world\n";
	cout << "hello world";*/
	test1();
	return 0;
}
void test1()
{
	List t=NULL;
	List p=NULL;
	t->Next = p->Next;
	p->Next = t;
}
