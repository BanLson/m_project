#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"

void print(int* arr, int sz);
void test1();
void test2();

int main()
{
	//test1();
	test2();
	return 0;
}

void print(int* arr, int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(arr + i));
	}
	printf("\n");
}

void test1()
{
	int arr[] = { 10,9,8,7,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(int);
	cout << "Ã°ÅÝÅÅÐòÇ°" << endl;
	print(arr, sz);

	cout << "Ã°ÅÝÅÅÐòºó" << endl;
	bubuleSort(arr, sz);
	print(arr, sz);

}

void test2()
{
	PNODE pHead = NULL;
	pHead = creat_list();
	travel_list(pHead);
	/*if (Is_Empty(pHead))
		cout << "Á´±í²»Îª¿Õ" << endl;
	else
		cout << "Á´±íÎª¿Õ" << endl;*/
	BubbleSort(pHead);
	cout << "BubbleSort" << endl;
	travel_list(pHead);
}