#include "Struct.h"
#include "Bring.h"
#include "byChance.h"
#include "PrintArr.h"
#include "Sum.h"

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

	/*-----------------------------------------------------------*/
//#if PRINT_TYPE == 1
//		Bring(arr);     /*Ввод с консоли*/	goto link_menu2;
//#endif
//
//#if PRINT_TYPE == 2
//	byChance(arr);  /* Ввод рандомно*/
//#endif
	/*-------------------------------------------------------------*/

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

	/*-------------------------------------------------------------*/
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
		PrintArr(arr, p);            /*Сделали обращение к функции печати массива*/
		goto link_menu2;
	}
	if (selection == 2)
	{

		Sum(arr, p);        /* Обратились к функции суммы двухзначных чисел*/
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