#include "struct.h"
#include "Bring.h"
#include "byChance.h"
#include "Sort.h"
#include "Print.h"

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));
	int selection;
	mon spis[N];
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
		Bring(spis, N, selection);     /*Ввод с консоли*/
		goto link_menu2;
	}
	if (selection == 2)
	{
		byChance(spis, N, selection);  /* Ввод рандомно*/
	}
	else
	{
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;
		_getch();
		goto link_menu1;
	}

	/*------------------------------------------------------------*/
link_menu2:
	system("cls");
	cout << "|                                 Меню                                  |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "| 1 – сортировка                    | 3 - вернутся в главное меню       |" << endl;
	cout << "| 2 – печать                        | 4 - выход                         |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;


	cout << "Сделайте выбор -> ";
	cin >> selection;

	if (selection == 1)
	{
		Sort(spis);            /*Сделали обращение к функции сортировки*/
		Print(spis);          /* Обратились к функции вывода*/
		goto link_menu2;
	}
	if (selection == 2)
	{

		Print(spis);        /* Обратились к функции вывода*/
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

}
