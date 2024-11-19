#include "List.h"

PNODE create_list()
{
	int len;
	int val;
	int i;
	PNODE pHead = (PNODE) malloc(sizeof(NODE));
	assert(pHead);

	PNODE pTail = (PNODE)malloc(sizeof(NODE));//生成尾节点
	assert(pTail);
	pTail = pHead;//把尾节点和首节点连接起来
	pTail->pNext = NULL;	
	cout << "请输入生成链表结点的数目:";
	cin >> len;
	for (i = 1; i <= len; i++)
	{
		cout << "请输入第" << i << "个节点的值:";
		cin >> val;
		PNODE pNew = (PNODE)malloc(sizeof(NODE));
		assert(pNew);
		pNew->date = val;
		pTail->pNext = pNew;
		pNew->pNext = NULL;
		pTail = pNew;
	}
	return pHead;
}

void traverse_list(const PNODE pHead)
{
	PNODE p = pHead;
	while (NULL != p->pNext)
	{
		p = p->pNext;
		cout << p->date<<" ";
	}
	cout << endl;
}

bool if_empty(PNODE pHead)
{
	if (NULL == pHead->pNext)
		return false;
	else
		return true;
}

int length_list(PNODE pHead)
{
	PNODE p = pHead;
	int l = 0;
	while (NULL != p->pNext)
	{
		p = p->pNext;
		++l;
	}
	return l;
}

bool insert_list(PNODE pHead,int pos,int val)
{
	int i = 0;
	PNODE p = pHead;
	while (NULL != p->pNext && i < pos - 1)
	{
		p = p->pNext;
		++i;
	}
	if (i > pos - 1 || NULL == p)
	{
		return false;
	}
	PNODE pNew = (PNODE)malloc(sizeof(NODE));
	assert(pNew);
	pNew->date = val;
	PNODE q = p->pNext;
	p->pNext = pNew;
	pNew->pNext = q;
	return true;
}

bool delete_list(PNODE pHead, int pos, int* pVal)
{
	int i = 0;
	PNODE p = pHead;
	while (NULL != p->pNext && pos - 1 > i)
	{
		p = p->pNext;
		++i;
	}
	if (pos - 1 < i || NULL == p)
	{
		return false;
	}
	*pVal = p->date;
	PNODE q = (PNODE)malloc(sizeof(NODE));
	assert(q);
	q = p->pNext;

	//删除p后面的节点
	p->pNext = p->pNext->pNext;
	free(q);
	q = NULL;
	return true;
}

void sort_list(PNODE pHead)
{

}

void bubble_sort(int arr[], int n)
{
	int j, i, tem;
	for (i = 0; i < n-1; i++)
	{
		int count = 0;
		for (j = 0; j < n - 1 - i; j++)
		{
			if (arr[j-1] > arr[j])
			{
				tem = arr[j - 1];
				arr[j - 1] = arr[j];
				arr[j] = tem;
				count = 1;
			}
		}
		if (count == 0)
		{
			break;
		}
	}
}