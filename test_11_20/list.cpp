#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

void swap(int* a, int* b)
{
	int tem = *a;
	*a = *b;
	*b = tem;
}

PNODE creat_list()
{
	PNODE pHead = (PNODE)malloc(sizeof(NODE));
	assert(pHead);
	PNODE pTail = (PNODE)malloc(sizeof(NODE));
	assert(pTail);
	pTail = pHead;
	pTail->pNext = NULL;
	//初始化链表Node
	int len = 0, val = 0;
	cout << "请输入创建链表的长度：";
	cin >> len;
	int i = 0;
	for (i = 0; i < len; i++)
	{
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		assert(pNew);
		cout << "请输入第" << i + 1 << "个节点的值：";
		cin >> pNew->date;
		pTail->pNext = pNew;
		pTail = pNew;
		pNew->pNext = NULL;
	}

	return pHead;
}

void travel_list(const PNODE pHead)
{
	PNODE p = pHead;
	while (NULL != p->pNext)
	{
		p = p->pNext;
		cout << p->date << " ";
	}
	cout << endl;
}

bool Is_Empty(const PNODE pHead)
{
	PNODE p = pHead;
	if (NULL == p->pNext)
	{
		return false;
	}
	return true;
}

void BubbleSort(PNODE pHead)
{
	/*int i = 0, j = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ((*(arr + j)) > (*(arr + j + 1)))
			{
				int tem = *(arr + j);
				*(arr + j) = *(arr + j + 1);
				*(arr + j + 1) = tem;
				flag = 1;
			}
		}
		if (0 == flag)
		{
			break;
		}
	}*/
	int count = 0;
	PNODE p, q, tail;
	p = pHead;
	//计算结点个数
	while (p->pNext != NULL)
	{
		count++;
		p = p->pNext;
	}
	for (int i = 0; i < count - 1; i++)
	{
		int num = count - i - 1;
		q = pHead->pNext;
		p = q->pNext;
		tail = pHead;

		//设置内层循环
		while (num--)
		{
			if (q->date > p->date)
			{
				/*q->pNext = p->pNext;
				p->pNext = q;
				tail->pNext = p;*/
				swap(&(q->date), &(p->date));
			}
			tail = tail->pNext;
			q = q->pNext;
			p = p->pNext;
		}
	}
}