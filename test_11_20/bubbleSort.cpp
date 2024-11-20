#define _CRT_SECURE_NO_WARNINGS 1
#include "test.h"
void bubuleSort(int* arr, int sz)
{
	int i = 0, j = 0;
 	for (i = 0; i < sz - 1; i++)
	{
		int flag = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if ( (*(arr + j)) > (*(arr + j + 1)) )
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
	}
}