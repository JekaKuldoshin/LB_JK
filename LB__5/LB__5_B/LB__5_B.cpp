#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <conio.h>
#include "windows.h"




int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	unsigned k;

	
		printf("Введите число k > ");
		scanf("%u", &k);
		
		if (k % 100 == 10 || k % 100 == 11)

		{
			printf("У меня %d грибов", k);

			if (k % 100 == 1)
			{
				printf("У меня %d гриб", k);

				if (k % 100 >= 2)
				{
					printf("У меня %d грибa", k);
				}
			}
		}
}