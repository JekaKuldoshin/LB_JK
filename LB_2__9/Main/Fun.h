#pragma once
#ifndef XT
#define XT

#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
#include <time.h>
#include <conio.h>
#include <malloc.h>
#include <stdio.h>

using namespace std;

struct mon {                   //��������� ��� ������
	unsigned int sc;                /*���*/
	char name[10];                 /*���*/
	unsigned int size;            /*�������*/
	unsigned int mhz;            /*�������*/
};

struct Tlist {       //��������� ��� �������� ������ � ����������� 
	mon data;
	struct Tlist* next;    //��������� �� ��������� �������
	struct Tlist* prev;   //��������� �� ���������� �������
};


void listCreation(Tlist*& head, Tlist*& tail, int& count, int point, int size);
void listPrintFromHead(Tlist* head);
void listPrintFromTail(Tlist* tail);
int searchByParamFromHead(Tlist* head, int count);
int searchByParamFromTail(Tlist* tail, int count);
void addToList(Tlist*& head, int& count, int poz);
void deleteFromList(Tlist*& head, int& count, int poz);
void listSorting(Tlist* head, int count);
void createFile(Tlist* head, int count);
void createListFromFile(Tlist*& head, Tlist*& tail);

#endif