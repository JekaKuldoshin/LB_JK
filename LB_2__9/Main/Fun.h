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

struct mon {                   //Структура для данных
	unsigned int sc;                /*год*/
	char name[10];                 /*имя*/
	unsigned int size;            /*диаметр*/
	unsigned int mhz;            /*частота*/
};

struct Tlist {       //Структура для передачи данных и перемещения 
	mon data;
	struct Tlist* next;    //указатель на следующий элемент
	struct Tlist* prev;   //указатель на предыдущий элемент
};


void listCreation(Tlist*& head, Tlist*& tail, int& count, int point, int size);  //Функция заполнения списка
void listPrintFromHead(Tlist* head);              //Функция вывода с начала
void listPrintFromTail(Tlist* tail);             //Функция вывода с конца
int searchByParamFromHead(Tlist* head, int count);   //Функция посика с начала
int searchByParamFromTail(Tlist* tail, int count);  //Функция посика с конца
void addToList(Tlist*& head, int& count, int poz);    //Добавить в список
void deleteFromList(Tlist*& head, int& count, int poz);     //Удалить из списка
void listSorting(Tlist* head, int count);              //Сортировка
void createFile(Tlist* head, int count);             //Создание файла
void createListFromFile(Tlist*& head, Tlist*& tail);     //Создание списка из файла

#endif