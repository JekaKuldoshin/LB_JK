#include "Fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	int selection1;
	int selection2;
	mon spis[N];
link_menu1:
	
	system("cls");
	cout << "|                                 Меню                                  |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "| 1 – Ввод с консоли                    | 3 - Выход                     |" << endl;
	cout << "| 2 – Ввод рандомно                     |                               |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;

	cout << "Сделайте выбор -> ";
	cin >> selection1;

	switch (selection1)
	{
	case 1:
		Bring(spis, N);     /*Ввод с консоли*/
		/*goto link_menu2;*/
		break;
	case 2:
		byChance(spis, N);  /* Ввод рандомно*/
		/*goto link_menu2;*/
		break;
	case 3:
		goto link_exit;
		break;

	default:
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;
		_getch();
		goto link_menu1;
	}

	


	/*------------------------------------------------------------*/
link_menu2:
	system("cls");
	cout << "|                                 Меню                                  |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;
	cout << "| 1 – сортировка                    | 3 - обновить числа                |" << endl;
	cout << "| 2 – печать                        | 4 - выход                         |" << endl;
	cout << "|-----------------------------------------------------------------------|" << endl;


	cout << "Сделайте выбор -> ";
	cin >> selection2;

	switch (selection2)
	{
	case 1:
		Sort(spis);
		Print(spis);
		goto link_menu2;
		break;
	case 2:
		Print(spis);        	
		goto link_menu2;
		break;
	case 3:
		goto link_menu1;
		break;
	case 4:
		goto link_exit;
		break;

	default:
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;	
		_getch();	
		goto link_menu2;
	}

	link_exit:
	system("cls");
	cout << "Thanks for your attention!!" << endl;

	return 0;

}
