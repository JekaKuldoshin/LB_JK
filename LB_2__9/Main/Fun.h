#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>
#include <malloc.h>

using namespace std;

struct List {
	char name[10];
	char type[7];
	float tem;
	int sp;
	List* next = NULL;
	List* prev = NULL;
};

struct List* create();
void print(List* head, List* tail);
int search(List* head, List* tail);
void ADD(int el, List tt, List* head, List* tail);
void del(int el, List* head, List* tail);
struct List* sort(List* head, List* tail);
void addfile(List* head, List* tail);
struct List* CreateFromFile();

#endif