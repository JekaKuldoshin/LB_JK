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

	int sc;                       /*���*/
	string name;                  /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
};

#ifndef Choice_1 
#define Choice_1 if (selection == 1){Bring(spis, N, selection);     /*���� � �������*/	goto link_menu2;}if (selection == 2){	byChance(spis, N, selection);  /* ���� ��������*/}else{	cout << "\n������! ����� ���� �����������!" << endl;_getch();	goto link_menu1;}
#endif

#ifndef Choice_2
#define Choice_2 if (selection == 1) { Sort(spis);            /*������� ��������� � ������� ����������*/ Print(spis);          /* ���������� � ������� ������*/ goto link_menu2; } if (selection == 2) {	Print(spis);        /* ���������� � ������� ������*/	goto link_menu2;}if (selection == 3){	goto link_menu1;       /* �������� �� ���������*/}if (selection == 4){	goto link_exit;       /* �������� �� ���������*/}else{	cout << "\n������! ����� ���� �����������!" << endl;	_getch();	goto link_menu2;}
#endif

#ifndef DEBUG_1
#define DEBUG_1 cout << "| " __DATE__ <<" |"<< endl <<"| " <<  __TIME__ << "    |" << endl <<"---------------" << endl;
#endif

#ifndef DEBUG_2
#define DEBUG_2 cout << endl << "����: " << __FILE__ << endl << "�������: " << __FUNCTION__ << endl << endl;
#endif
