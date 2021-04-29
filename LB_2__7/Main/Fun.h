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
};

void input(mon t);
void random(mon t);
void add_before(mon t);
void add_after(mon t);
void choice_str(mon t);
void print_all_str(mon t);

#endif