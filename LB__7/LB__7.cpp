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
        
        for (x; x < 4; x += 0.125) {
            
            if (x <= 2)  y = 1-sqrt(1 - (x - 1) * (x - 1));
            
            else if (x <= 4) y = 1-sqrt(1 - (x - 3) * (x - 3));
            
            
           
            printf("| %5.2lf | %10.7lf |", x + n * 4, y);
            h = (y + 3) * 20; //установка размера строки ( | 1.00 |  1.0000000 |) h = ( 1.0000000 + 3) * 20 = 80  + еще пробел, до * 81 элемент.
            
            

            for (h; h > 0; h--) printf(" ");
            printf("*\n");
        }  


        printf("Нажмите клавишу Enter...");
        getchar();
    }  
    return 0;
} 