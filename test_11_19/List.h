#pragma once
#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
using namespace std;
typedef struct Node {
	int date;
	struct Node* pNext; //÷∏’Î”Ú
}NODE, * PNODE;

PNODE create_list();

void traverse_list(const PNODE pHead);

bool if_empty(PNODE);

int length_list(PNODE );

bool insert_list(PNODE ,int,int);

bool delete_list(PNODE, int, int*);

void sort_list(PNODE);

void bubble_sort(int arr[], int n);

