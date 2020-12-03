#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"
#include<math.h>

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);


    short n=0;        
    double x=0, y=0;    
    short h=0;        
       
    printf("|   x   |      y     |\n");
    printf("|-------|------------|\n");
    for (n; n < 5; n++) {
        
        for (x=0; x < 4; x += 0.125) //4 потому как график повторяется каждые 4см.
        {
            
            if (x <= 2)  y = sqrt(1 - (x - 1) * (x - 1));
            
            else if (x <= 4) y = -sqrt(1 - (x - 3) * (x - 3));
            
            
           
            printf("| %5.2lf | %10.7lf |", x + n * 4, y); //x+n*4 внешний цикл будет повторяться 5 раз, и для того чтобы числа были не одинаковы 0.00,0.13,..., а чтобы 0.13+0*4=0.13  
            //а вот когда мы перейдем на первый внешний цикл  0.13+1*4=4.13 это и будет точка для Х во втором графике.
            h = (y + 1) * 15.5; //установка размера строки ( | 1.00 |  1.0000000 |) h = ( 1.0000000 + 3) * 20 = 80  + еще пробел, до * 81 элемент.
            
            if (((y + 1) * 15.5 - h) > 0.5) h++;

            for (h; h > 0; h--) printf(" "); //h работает как счетчик на вычитание
            printf("*\n");
        }  


        printf("Нажмите клавишу Enter...");
        getchar();
    }  
    return 0;
} 