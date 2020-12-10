#include<iostream>
#include<ctime>
#include<iomanip>
#include<conio.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int const SIZE = 100;
	int arr[SIZE];
	int avar = 0; //среднее арифметическое
	int sum = 0;
	int q = 0; //количество элементов в массиве

	cout << "Начальный массив:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (100 - (-100) + 1) + (-100); //рандомные числа от -100 до 100

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];   //выводим начальный массив 
		cout << " ";
	}
	cout << endl << endl;
	cout << "Модернизированный массив:" << endl;




	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] >= 0)
		{
			sum += arr[i];   //добавляем каждый элемент массива
			q += 1;         //считаем количество элементов
		}

	}


	avar = sum / q;          //находим среденее арифметическое 

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] <= 0)   //все что меньше нуля, происходит замена на среднее ариметическое 
		{
			arr[i] = avar;
		}

		cout << setw(4) << arr[i];
	}
	cout << endl;


	_getch();
	return 0;






}