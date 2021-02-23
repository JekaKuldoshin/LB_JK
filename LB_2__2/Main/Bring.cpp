#include "Bring.h"

void Bring(mon spis[], int spis_size, int selection)         /* функция для ввода с консоли*/
{

	for (int i = 0; i < N; i++) {
		system("cls");
		cout << "| Проект поиска внеземных сигналов №" << i + 1 << " |" << endl;
		cout << "|-------------------------------------|" << endl;
		cout << "Введите год -> ";
		cin >> spis[i].sc;                                      /*вводим в список [1].год */
		cout << "Введите имя научного руководителя -> ";
		cin >> spis[i].name;
		cout << "Введите диаметр антенны (м) -> ";
		cin >> spis[i].size;
		cout << "Введите рабочую частоту (МГц) -> ";
		cin >> spis[i].mhz;
	}
}