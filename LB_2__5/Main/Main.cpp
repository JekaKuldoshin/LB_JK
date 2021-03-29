#include "Matrix.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
link_menu:
	int choice = 0;


	int N;

	printf("Введите кол-во строк и столбцов -> ");
	scanf_s("%d", &N);
	system("cls");

	if (N > 0)
	{
		printf("1 - Одномерный как двумерный (*А)  |\n");
		printf("2 - Двумерный как двумерный  (**А) |\n");
		printf("3 - Exit                           |\n");
		printf("------------------------------------\n");
		printf("Сделайте свой выбор -> ");
		scanf_s("%d", &choice);
		system("cls");
		if (choice == 1)
		{
			int* arr = new int[N * N];
			printf("Одномерный массив ->\n");
			byChance_1(arr, N);
			printf("\nОдномерный как двумерный:\n");
			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
					printf("%4d", *(arr + i * N + j));

				printf("\n");
			}

			Action_with_matrix_1(arr, N);

			printf("\nМодернизированный массив: \n");

			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
					printf("%4d", *(arr + i * N + j));

				printf("\n");
			}

			//Освобождение памяти
			delete[] arr;
			arr = nullptr;
			printf("\n");
			printf("Нажмите клавишу Enter для возврата в меню...\n");
			_getch();
			system("cls");
			goto link_menu;


		}
		if (choice == 2)
		{
			int** arr = new int* [N];
			for (int i = 0; i < N; i++)
			{
				*(arr + i) = new int[N];
			}

			printf("Двумерный массив ->\n");
			byChance_2(arr, N);

			printf("\nМодернизированный массив: \n");
			Action_with_matrix_2(arr, N);
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < N; j++)
				{
					printf("%4d", *(*(arr + i) + j));
				
				}
				printf("\n");
			}
			printf("\n");
			
			for (int i = 0; i < N; i++)
			{
				delete[] arr[i];
			}
			delete[] arr;
			printf("Нажмите клавишу Enter для возврата в меню...\n");
			_getch();
			system("cls");
			goto link_menu;

		}
		if (choice == 3)
		{
			return 0;
		}


	}

}

