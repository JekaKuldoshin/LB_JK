#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <string>
#include<conio.h>
using namespace std;

#define PRINT_TYPE

#define N 3

struct mon
{

	int sc;                       /*год*/
	string name;                  /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;             /*частота*/
};

#ifndef Choice_1 
#define Choice_1 if (selection == 1){Bring(spis, N, selection);     /*Ввод с консоли*/	goto link_menu2;}if (selection == 2){	byChance(spis, N, selection);  /* Ввод рандомно*/}else{	cout << "\nОшибка! Пункт меню отсутствует!" << endl;_getch();	goto link_menu1;}
#endif

#ifndef Choice_2
#define Choice_2 if (selection == 1) { Sort(spis);            /*Сделали обращение к функции сортировки*/ Print(spis);          /* Обратились к функции вывода*/ goto link_menu2; } if (selection == 2) {	Print(spis);        /* Обратились к функции вывода*/	goto link_menu2;}if (selection == 3){	goto link_menu1;       /* Переходы по программе*/}if (selection == 4){	goto link_exit;       /* Переходы по программе*/}else{	cout << "\nОшибка! Пункт меню отсутствует!" << endl;	_getch();	goto link_menu2;}
#endif

#ifndef DEBUG_1
#define DEBUG_1 cout << "| " __DATE__ <<" |"<< endl <<"| " <<  __TIME__ << "    |" << endl <<"---------------" << endl;
#endif

#ifndef DEBUG_2
#define DEBUG_2 cout << endl << "Файл: " << __FILE__ << endl << "Функция: " << __FUNCTION__ << endl << endl;
#endif
