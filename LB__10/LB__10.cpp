//8. Поменять числа главной и боковой диагоналей местами[123567890] = > [321567098]

#include <iostream>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<iomanip>

#define N 9
#define ROWS 3
#define COLS 3

int arr3[N];

using namespace std;

void Transfer(int arr[N])
{

	arr[N];

	int arr2[N][N]{};
	for (int i = 0; i < COLS; i++)     //Переводим в матрицу 
		for (int j = 0; j < ROWS; j++)
		{
			arr2[i][j] = arr[ROWS * i + j];
		}
	cout << "----------------------------------" << endl;
	cout << "Выводим матрицу:" << endl;

	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			cout << setw(4) << arr2[i][j];
		}
		cout << endl;
	}

	///////////////////////////////////////////////
	cout << "\nМодернизированный массив: " << endl;
	int b;
	for (int i = 0; i < COLS; i++)

	{

		for (int j = 0; j < ROWS; j++)
			if (i == j)
			{

				b = arr2[i][j];               //Делаем обмен

				arr2[i][j] = arr2[i][COLS - 1 - j];

				arr2[i][COLS - 1 - j] = b;

			}


	}



	for (int i = 0; i < COLS; i++) { //Выводим модернизированный массив
		for (int j = 0; j < ROWS; j++) {
			cout << setw(4) << arr2[i][j];
		}
		cout << endl;
	}

	/////////////////////////////////////////

	for (int i = 0; i < COLS; i++)     //Переводим в матрицу 
		for (int j = 0; j < ROWS; j++)
		{
			arr3[ROWS * i + j] = arr2[i][j];
		}


}

int main()
{
	setlocale(LC_ALL, "Ru");

	int arr[N]{ 1,2,3,5,6,7,8,9,0 };

	cout << "Количество элементов одномерного массива ->  " << N << endl;

	cout << "Элементы массива -> ";


	for (int i = 0; i < N; i++)
	{
		cout << arr[i] << " | ";
	}
	cout << endl;

	Transfer(arr);

	cout << "----------------------------------" << endl;

	cout << "Одномерный массив -> ";
	for (int i = 0; i < ROWS * COLS; i++)
	{

		cout << arr3[i] << " | ";
	}
	cout << endl;
	_getch();
	return 0;
}