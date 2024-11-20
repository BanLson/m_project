#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
using namespace std;

void bubuleSort(int* arr, int sz);

typedef struct Node {
	int date;
	struct Node* pNext;
}NODE,* PNODE;

PNODE creat_list();

void travel_list(const PNODE);

bool Is_Empty(const PNODE);

void BubbleSort(PNODE);

void swap(int* a, int* b);