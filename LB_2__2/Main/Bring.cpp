#include "Bring.h"

void Bring(mon spis[], int spis_size, int selection)         /* ������� ��� ����� � �������*/
{

	for (int i = 0; i < N; i++) {
		system("cls");
		cout << "| ������ ������ ��������� �������� �" << i + 1 << " |" << endl;
		cout << "|-------------------------------------|" << endl;
		cout << "������� ��� -> ";
		cin >> spis[i].sc;                                      /*������ � ������ [1].��� */
		cout << "������� ��� �������� ������������ -> ";
		cin >> spis[i].name;
		cout << "������� ������� ������� (�) -> ";
		cin >> spis[i].size;
		cout << "������� ������� ������� (���) -> ";
		cin >> spis[i].mhz;
	}
}