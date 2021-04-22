#pragma once
#ifndef FX
#define FX
#define  _CRT_SECURE_NO_WARNINGS
#include <string>
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include<conio.h>
using namespace std;

#define N 3                    /*количество элементов*/
//#define PRINT_TYPE 1           /*Выбор в меню*/

struct mon
{

	int sc;                       /*год*/
	string name;                  /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
};

//#define PRINT_TYPE_2 if (selection2 == 1) { Sort(spis);            /*Сделали обращение к функции сортировки*/ Print(spis);          /* Обратились к функции вывода*/ goto link_menu2; } if (selection2 == 2) {	Print(spis);        /* Обратились к функции вывода*/	goto link_menu2;}if (selection2 == 3){	goto link_menu1;       /* Переходы по программе*/}if (selection2 == 4){	goto link_exit;       /* Переходы по программе*/}else{	cout << "\nОшибка! Пункт меню отсутствует!" << endl;	_getch();	goto link_menu2;}
////используется для выбора в меню №2

void byChance(mon spis[], int spis_size);
void Sort(mon spis[]);
void Print(mon spis[]);
void Bring(mon spis[], int spis_size);
#endif