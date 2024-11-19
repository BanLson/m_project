#define _CRT_SECURE_NO_WARNINGS 1
#include "List.h"

//函数声明
void test1();
void test2();
int main()
{
	//test1();
	test2();
	return 0;
}
void test1()
{
	PNODE pHead = NULL;
	pHead = create_list();
	traverse_list(pHead);
	//if_empty(pHead);
	/*int l = length_list(pHead);
	cout << "链表长度是：" << l << endl;*/
	//printf("链表长度是：%d", length_list(pHead));
	insert_list(pHead, 4, 10);
	traverse_list(pHead);

	int val = 0;
	delete_list(pHead, 4, &val);
	traverse_list(pHead);

	sort_list(pHead);
	traverse_list(pHead);

}
void test2()
{
	int arr[10] = { 10,9,7,44,66,332,22,1,8,2 };
	//bubble(arr,(sizeof(arr)/sizeof(int)));
	bubble_sort(arr, 10);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		cout << arr[i] << " ";	
		//printf("%d ", arr[i]);
	}
}