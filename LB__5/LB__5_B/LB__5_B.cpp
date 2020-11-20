
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	system("chcp 1251");
	system("cls");

	unsigned int k;
	while (true) {
		system("cls");
		printf("Введите k > ");
		scanf("%u", &k);

		
		if ((k % 10 > 4) || (k % 10 == 0) || (k % 100 == 11) || (k % 100 == 12) || (k % 100 == 13) || (k % 100 == 14))
		{
			printf("У меня %u грибов", k);
			goto link;
		}

		if (k % 10 == 1)
		{
			printf("У меня %u гриб", k);
			goto link;
		}

		if ((k % 100 == 2) || (k % 100 == 3) || (k % 100 == 4));
		{
			printf("У меня %u гриба", k);
			goto link;
		}
		link:


		_getch();
	}

}