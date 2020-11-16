#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <conio.h>
#include "windows.h"


int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double x, y, r;
	r = 1.0;

	printf("Введите координату x >");
		scanf("%lf", &x);
	printf("Введите координату y >");
			scanf("%lf", &y);

			
			double check = ((x * x) + (y * y));

			if (x > 0 && y < 0 || check > r)
				{
				printf("Точка не попадает в область!\n");
				}
			else
			{
				printf("Точка попадает в область\n");
			}

			_getch();

			
			return 0;
			
	
}




