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

struct Tabl {
	unsigned int sc;              /*год*/
	char name[10];                /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
};

void input(Tabl t);
void random(Tabl t);
void add_before(Tabl t);
void add_after(Tabl t);
void choice_str(Tabl t);
void print_all_str(Tabl t);

#endif