#pragma once
#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <string>
#include<conio.h>
using namespace std;

#define N 3                    /*���������� ���������*/
#define PRINT_TYPE 2           /*����� � ����*/

struct mon
{

	int sc;                       /*���*/
	string name;                  /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;             /*�������*/
};

 
#define PRINT_TYPE_2 if (selection2 == 1) { Sort(spis);            /*������� ��������� � ������� ����������*/ Print(spis);          /* ���������� � ������� ������*/ goto link_menu2; } if (selection2 == 2) {	Print(spis);        /* ���������� � ������� ������*/	goto link_menu2;}if (selection2 == 3){	goto link_menu1;       /* �������� �� ���������*/}if (selection2 == 4){	goto link_exit;       /* �������� �� ���������*/}else{	cout << "\n������! ����� ���� �����������!" << endl;	_getch();	goto link_menu2;}
//������������ ��� ������ � ���� �2


#define DEBUG_1 cout << "| " __DATE__ <<" |"<< endl <<"| " <<  __TIME__ << "    |" << endl <<"---------------" << endl;
//�������� DEBUG ���������� � ������� Print.cpp


#define DEBUG_2 cout << endl << "����: " << __FILE__ << endl << "�������: " << __FUNCTION__ << endl << endl;
//�������� DEBUG ���������� � ������� Print.cpp

