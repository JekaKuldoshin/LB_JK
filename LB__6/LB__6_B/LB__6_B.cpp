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

    

    printf("|===========================================================================|\n");
    printf("|                                                                           |\n");
    printf("|                   Проверь свои знания таблицы умножения                   |\n");
    printf("|                                                                           |\n");
    printf("|===========================================================================|\n");

    int pc_result, human_result, N1, N2;
    int count = 0;


    for (int i = 0; i < 10; i++)
    {
        srand(time(NULL));
      N1= rand() % 10;
      N2= rand() % 10;
      pc_result = N1 * N2;

      printf("\n%d * %d =", N1, N2);
      scanf("%d", &human_result);

      if (human_result != pc_result)
      {
          printf("Вы допустили ошибку!\n");
          continue;
      }
      else
      {
          printf("Правильно, вам начисленно +1 бал\n\n");
          count++;
      }




    }

    if ((count % 10 > 4) || (count % 10 == 0))
    {
        printf("Поздравляем! Вы заработали %d баллов", count);
        goto link;
    }

    if (count % 10 == 1)
    {
        printf("\nВы заработали %d балл!\nКак выучишь таблицу умножения приходи :)\n", count);
        goto link;
    }

    if ((count % 100 == 2) || (count % 100 == 3) || (count % 100 == 4))
    {
        printf("\nВы заработали %d балла!\nКак выучишь таблицу умножения приходи :)\n", count);
        goto link;
    }
link:


    _getch();
    return 0;
}


