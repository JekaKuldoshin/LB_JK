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
	
	int selection2;
	mon spis[N];
link_menu1:
	system("cls");
	
#if PRINT_TYPE == 1
	Bring(spis, N, PRINT_TYPE);     /*Ввод с консоли*/	goto link_menu2;
#endif

#if PRINT_TYPE == 2
	byChance(spis, N, PRINT_TYPE);  /* Ввод рандомно*/
#endif

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

#ifdef PRINT_TYPE_2
	PRINT_TYPE_2     /*Делаем свой выбор через обращение к макросу*/
#endif

link_exit:
	system("cls");
	cout << "Thanks for your attention!!" << endl;

	return 0;

}
