#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "windows.h"
int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    long n;
    double dbln;
    double term;
    double sum=0;
    long k2 = 1;
    short k1 = 1;
    const double eps = 0.000001;

    for (n=0; ;n++, k1 = -k1 , k2 = 2 * k2)
    {
        dbln = n;
        term = k1 * 1 - ((k2) / (k2 + 1));
        if (fabs(term) >= eps) // функция fabs нужно для приведения |term|
        {
            sum= sum + term;
        }
        else
        {
            break;
        }

        if (n == 9)
        {
            printf("Сумма 10 членов ряда = %10.7lf\n", sum);
            break;
        }




    }
    printf("Полная сумма ряда = %lf\n", sum);
    return 0;
}
