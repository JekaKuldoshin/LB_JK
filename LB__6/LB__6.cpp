#define  _CRT_SECURE_NO_WARNINGS

#include "windows.h"
#include <stdio.h>
#include <math.h>
#include <conio.h>
int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);



    long n;              
    double sum = 0;        
    double term;        
    const double eps = 0.00000001; //Точность сравнения в виде числа с плавающей точкой двойной точности (задаем переменной число с не изменным числом)
    
      
    for (n = 0; ; n++) {

        term = pow(-1, n) * (1 - ((pow(2, n)) / (pow(2, n) + 1)));
 
        if ((fabs(term)) >= eps)   // |term|-поставили в модуль для сравнения с ерs
           
            sum += term;
        else break;
        
        if (n == 9)
            printf("Сумма 10 членов ряда = %1.7lf\n", sum);
    }
    
    printf("Полная сумма ряда = %1.7lf\n", sum);
    _getch();
    return 0;
}