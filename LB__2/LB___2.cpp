﻿
#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>


int main(void)
{
    system("chcp 1251");
    system("cls");


    /* int sc1, sc2, sc3;
     char name1[6], name2[9], name3[8];
     int size1, size2, size3;
     int mhz1, mhz2, mhz3;*/


    int sc1 = 1960, sc2 = 1970, sc3 = 1978;
    char name1[6] = "Дрейк", name2[9] = "Троицкий", name3[8] = "Хоровиц";
    int size1 = 26, size2 = 14, size3 = 300;
    int mhz1 = 1420, mhz2 = 1875, mhz3 = 1665;

    /*printf("1.Введите: год, научного руководителя, диаметр антенны (м), рабочая частота (мгц) >");
    scanf("%d %s %d %d", &sc1, &name1, &size1, &mhz1);
    getchar();

    printf("2.Введите: год, научного руководителя, диаметр антенны (м), рабочая частота (мгц) >");
    scanf("%d %s %d %d", &sc2, &name2, &size2, &mhz2);
    getchar();

    printf("3.Введите: год, научного руководителя, диаметр антенны (м), рабочая частота (мгц) >");
    scanf("%d %s %d %d", &sc3, &name3, &size3, &mhz3);*/



    printf("----------------------------------------------------------------------\n");
    printf("|Проекты поиска внеземных сигналов                                   |\n");
    printf("|--------------------------------------------------------------------|\n");
    printf("|Год |Научный              |Диаметр     |Рабочая частота             |\n");
    printf("|    |руководитель         |антенны (м) |частота (МГц)               |\n");
    printf("|----|---------------------|------------|----------------------------|\n");


    printf("|%-4d|%-21s|%-12d|%-28d|\n", sc1, name1, size1, mhz1);


    printf("|%-4d|%-21s|%-12d|%-28d|\n", sc2, name2, size2, mhz2);


    printf("|%-4d|%-21s|%-12d|%-28d|\n", sc3, name3, size3, mhz3);
    printf("|--------------------------------------------------------------------|\n");
    printf("|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |\n");
    printf("----------------------------------------------------------------------\n");

    return 0;


}