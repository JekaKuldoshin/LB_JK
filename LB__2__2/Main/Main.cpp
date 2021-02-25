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
	Choice_1                      /*Делаем свой выбор через обращение к макросу*/  
	

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
	Choice_2                           /*Делаем свой выбор через обращение к макросу*/


link_exit:
	system("cls");
	cout << "Thanks for your attention!!" << endl;

	return 0;

}
