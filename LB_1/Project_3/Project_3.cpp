//расчитать 8 степень числа используя только три оператора умножения.

#include<iostream>
#include<stdio.h>
#include<math.h>


int main()
{

    setlocale(LC_ALL, "Rus");
        int a,b,c,d;
        printf("Введите число которое нужно возвести в а^8: ");
        scanf_s("%d", &a);
        b = a * a;
        c = b * b;
        d = c * c;

        printf("Результат: %.d\n",d);


}