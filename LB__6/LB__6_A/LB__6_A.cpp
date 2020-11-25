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
int main(void) 
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int my_num;
    srand(time(NULL));
    int comp_num = 1 + rand() % 100;
    int count = 0;

    printf("|\t                           PC    VS    HUMAN                        |\n");
    printf("|===========================================================================|\n");
    printf("|                                                                           |\n");
    printf("|\t\t\tПопробуй угадать число ПК до 10                     |\n");
    printf("|                                                                           |\n");
    printf("|===========================================================================|\n");

    

    do
    {
        link:
        int comp_num = 1 + rand() % 10;

        printf("Введите число >");
        scanf("%d", &my_num);
        count++;

        if (my_num == comp_num)
        {
            printf("Поздравляем! Вы угадали с %d попытки, число загаданное PC = %d\n\n", count, comp_num);
            break;
        }
        if (my_num > 10)
        {
            printf("ERROR!! PC создает число до 10!\n\n");
            goto link;
        }

        if (my_num <= comp_num)
        {
            printf("Вы ввели число меньше, попробуйте в следующий раз больше. PC=%d\n\n", comp_num);
        }

        if (my_num >= comp_num)
        {
            printf("Вы ввели число большe, попробуйте в следующий раз меньше. PC=%d\n\n", comp_num);
        }
        


    }
    while (my_num != comp_num); //no
    _getch();
    return 0;
}







