//ЛАБОРАТОРНАЯ РАБОТА № 6А
//
//Компьютер загадывает число.отгадать его(больше - меньше) и посчитать количество попыток.
//
//ЛАБОРАТОРНАЯ РАБОТА № 6Б
//
//Проверка знаний таблицы умножения(10 примеров, случайным образом; выставляется оценка).



#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>
#include <time.h>
int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int i;
    int my_num;
    int comp_num;

    for(my_num=comp_num;)
        srand(time(NULL));
        int comp_num = 1 + rand() % 100;

        printf("%d", comp_num);


    







}


