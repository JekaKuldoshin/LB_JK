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
	mon* next = NULL;
};

struct mon* new_spis(void);              //Структура для заполнения списка
void print_spis(mon* head);             //Функция для вывода списка
int search_spis(mon* head);            //Функция для поиска по критерием 
struct mon* add_spis(int el, mon tt, mon* head);  //Структура для добавления списка
struct mon* del_spis(int el, mon* head);      //Структура для удаление списка
struct mon* sort_spis(mon* head,mon tt);   //Структура для сортировки списка
void addfile_in_spis(mon* head);     //Функция для добавления списка в файл
struct mon* create_from_file();     //Структура для создания списка из файла

#endif