#pragma once
#ifndef XT
#define XT
#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <iostream>
#include <ctime>
#include < stdio.h > 
#include <conio.h>


using namespace std;

struct mon {
	unsigned int sc;              /*год*/
	char name[10];                /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
	mon* next = NULL;
};

struct mon* create(void);
void print(mon* head);
int search(mon* head);
struct mon* ADD(int el, mon tt, mon* head);
struct mon* del(int el, mon* head);
struct mon* sort(mon* head);
void addfile(mon* head);
struct mon* CreateFromFile();

#endif