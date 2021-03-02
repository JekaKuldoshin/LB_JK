//8. В целочисленном массиве определить сумму
//двухзначных чисел.Все двузначные числа переписать в новый массив.

#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <conio.h>

using namespace std;

#define SIZE 10



void Bring( int arr[])
{
	system("cls");
	cout << "Введите элементы массива: \n";
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "| " << i << " | = ";
		cin >> arr[i];
		cout << endl;
	}
}

void byChance(int arr[])
{
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
	}
}

void PrintArr(int arr[], int* p[])
{
	system("cls");
	int NEWarr[SIZE];

	cout << "Элементы массива -> ";
	for (int i = 0; i < SIZE; i++)
	{
		p[i] = &arr[i];     //p[i] = A + i
		cout << *p[i] << " ";
	}
	cout << "\n\n";
	cout << "Массив для двухзначных чисел -> ";
	for (int i = 0; i < SIZE; i++)
	{
		if (*p[i] > 9)
			cout << *p[i] << " ";
	}
	cout << "\n------\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << *p[i] << " ";
	}


	cout << endl;
	cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
	_getch();
	
}

void Sum(int arr[], int* p[])
{
	system("cls");
	int result = 0;
	for (int i = 0; i < SIZE; i++)
	{
		if (*p[i] > 9)
		{
			result = *p[i] + result;
		}
	}
	cout << result;
	cout << endl;
	cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
	_getch();
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int arr[SIZE];
	int* p[SIZE];
	int selection;
link_menu1:
	system("cls");
	cout << "|               Меню                |" << endl;
	cout << "|-----------------------------------|" << endl;
	cout << "| 1 – ввод с экрана                 |" << endl;
	cout << "| 2 – случайным образом             |" << endl;
	cout << "|-----------------------------------|" << endl;
	cout << "Сделайте выбор -> ";
	cin >> selection;

	if (selection == 1)
	{
		Bring(arr);     /*Ввод с консоли*/
		goto link_menu2;
	}
	if (selection == 2)
	{
		byChance(arr);  /* Ввод рандомно*/
	}
	else
	{
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;
		_getch();
		goto link_menu1;
	}

	/*________________________________*/
	link_menu2:
	system("cls");
	cout << "|                                    Меню                                  |" << endl;
	cout << "|--------------------------------------------------------------------------|" << endl;
	cout << "| 1 – вывод массива                    | 3 - вернутся в главное меню       |" << endl;
	cout << "| 2 – вывод суммы двухзначных чисел    | 4 - выход                         |" << endl;
	cout << "|--------------------------------------------------------------------------|" << endl;


	cout << "Сделайте выбор -> ";
	cin >> selection;

	if (selection == 1)
	{
		PrintArr(arr,p);            /*Сделали обращение к функции печати массива*/
		goto link_menu2;
	}
	if (selection == 2)
	{

		Sum(arr,p);        /* Обратились к функции суммы двухзначных чисел*/
		goto link_menu2;
	}
	if (selection == 3)
	{
		goto link_menu1;       /* Переходы по программе*/
	}
	if (selection == 4)
	{
		goto link_exit;       /* Переходы по программе*/
	}
	else
	{
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;
		_getch();
		goto link_menu2;
	}
link_exit:
	system("cls");
	cout << "Thanks for your attention!!" << endl;

	return 0;



	//for (int i = 0; i < SIZE; i++)
	//{
	//	p[i] = &arr[i];     //p[i] = A + i
	//	cout << *p[i] << " ";
	//}
	//cout << "\n----\n";
	//for (int i = 0; i < SIZE; i++)
	//{
	//	if (*p[i] > 9)
	//		cout << *p[i] << endl;
	//}



}
