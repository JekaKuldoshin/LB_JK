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

#define N 3                    /*���������� ���������*/
//#define PRINT_TYPE 1           /*����� � ����*/

struct mon
{

	int sc;                       /*���*/
	string name;                  /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
};

//#define PRINT_TYPE_2 if (selection2 == 1) { Sort(spis);            /*������� ��������� � ������� ����������*/ Print(spis);          /* ���������� � ������� ������*/ goto link_menu2; } if (selection2 == 2) {	Print(spis);        /* ���������� � ������� ������*/	goto link_menu2;}if (selection2 == 3){	goto link_menu1;       /* �������� �� ���������*/}if (selection2 == 4){	goto link_exit;       /* �������� �� ���������*/}else{	cout << "\n������! ����� ���� �����������!" << endl;	_getch();	goto link_menu2;}
////������������ ��� ������ � ���� �2

void byChance(mon spis[], int spis_size);
void Sort(mon spis[]);
void Print(mon spis[]);
void Bring(mon spis[], int spis_size);
#endif