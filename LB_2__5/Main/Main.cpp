#include "Matrix.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
link_menu:
	int choice = 0;  //Меню


	int N;  //кол-во строк и столбцов

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
			int* arr = new int[N * N];            //Создал одномерный массив как двумерный
			printf("Одномерный массив ->\n");
			byChance_1(arr, N);                   //Обратился к функции ЗАПОЛНЕНИЯ
			for (int i = 0; i < N * N; i++)       //Вывел результат заполнения
				printf("%4d", *(arr + i));
			printf("\n");
			
			printf("\nОдномерный как двумерный:\n");
			for (int i = 0; i < N; i++)           //Модернизирую массив в матрицу
			{
				for (int j = 0; j < N; j++)
					printf("%4d", *(arr + i * N + j));

				printf("\n");
			}

			Action_with_matrix_1(arr, N);        //Функция для обмена

			printf("\nМодернизированный массив: \n");   //Вывод модернизированного массива

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
			int** arr = new int* [N];       //Создал двумерный массив как двумерный
			for (int i = 0; i < N; i++)
			{
				*(arr + i) = new int[N];
			}

			printf("Двумерный массив ->\n");
			byChance_2(arr, N);                //Обратился к функции ЗАПОЛНЕНИЯ

			for (int i = 0; i < N; i++) {     //Вывел результат заполнения
				for (int j = 0; j < N; j++)
				{
					printf("%4d", *(*(arr + i) + j));
				}
				printf("\n");
			}
			printf("\n");

			printf("\nМодернизированный массив: \n");
			Action_with_matrix_2(arr, N);               //Функция для обмена
			for (int i = 0; i < N; i++) {              //Вывод модернизированного массива
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

