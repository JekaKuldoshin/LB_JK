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
	unsigned int sc;              /*���*/
	char name[10];                /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
	mon* next = NULL;
};

struct mon* new_spis(void);
void print_spis(mon* head);
int search_spis(mon* head);
struct mon* add_spis(int el, mon tt, mon* head);
struct mon* del_spis(int el, mon* head);
struct mon* sort_spis(mon* head,mon tt);
void addfile_in_spis(mon* head);
struct mon* create_from_file();

#endif