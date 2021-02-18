#include <iostream>
#include <iomanip>
#include <windows.h>
#include <time.h>
#include <string>
#include<conio.h>

using namespace std;
#define N 3


struct mon
{

	int sc;
	string name;
	unsigned int size;
	unsigned int mhz;
};


void Bring(mon spis[], int spis_size, int selection)
{

	for (int i = 0; i < N; i++) {
		system("cls");
		cout << "| Проект поиска внеземных сигналов №" << i + 1 << " |" << endl;
		cout << "|-------------------------------------|" << endl;
		cout << "Введите год -> ";
		cin >> spis[i].sc;
		cout << "Введите имя научного руководителя -> ";
		cin >> spis[i].name;
		cout << "Введите диаметр антенны (м) -> ";
		cin >> spis[i].size;
		cout << "Введите рабочую частоту (МГц) -> ";
		cin >> spis[i].mhz;
	}

	/*for (int i = 0; i < N; i++)
	{
		cout << setw(10) << spis[i].sc << setw(10) <<
			spis[i].name << setw(10) << spis[i].size << setw(10) << spis[i].mhz << endl;
	}*/

}

void byChance(mon spis[], int spis_size, int selection)
{
	for (int i = 0; i < N; i++) {
		spis[i].sc = rand() % 200 + 1820;
		spis[i].name = "avtor_" + to_string(rand() % 50 + 100);

		spis[i].size = rand() % 1000 + 10;
		spis[i].mhz = rand() % 1000 + 10;


	}
}

void Sort(mon spis[])
{
	mon temp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N; j++) {
			if (spis[i].sc > spis[j].sc) {
				//swap(spis[i], spis[j]);
				temp = spis[i]; spis[i] = spis[j];
				spis[j] = temp;
			}
		}
	}
}

void Print(mon spis[])
{
	system("cls");

	cout << "----------------------------------------------------------------------" << endl;
	cout << "|                  Проекты поиска внеземных сигналов                 |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|Год |Научный              |Диаметр     |Рабочая частота             |" << endl;
	cout << "|    |руководитель         |антенны (м) |частота (МГц)               |" << endl;
	cout << "|----|---------------------|------------|----------------------------|" << endl;

	for (int i = 0; i < N; i++)
	{
		cout << "|" << setw(4) << spis[i].sc << "|" << setw(21) << left <<
			spis[i].name << setw(-21) << "|" << setw(12) << spis[i].size << "|" << setw(28) << spis[i].mhz << "|" << endl;
	}
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << endl;
	cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
	_getch();
	system("cls");


}

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
		Bring(spis, N, selection);
		goto link_menu2;
	}
	if (selection == 2)
	{
		byChance(spis, N, selection);
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

		Print(spis);
		goto link_menu2;
	}
	if (selection == 3)
	{
		goto link_menu1;
	}
	if (selection == 4)
	{
		goto link_exit;
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

