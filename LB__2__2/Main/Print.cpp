#include "Print.h"

void Print(mon spis[])
{
	system("cls");
#ifdef DEBUG_1
	DEBUG_1
#endif
	cout << "----------------------------------------------------------------------" << endl;
	cout << "|                  ������� ������ ��������� ��������                 |" << endl;
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|��� |�������              |�������     |������� �������             |" << endl;
	cout << "|    |������������         |������� (�) |������� (���)               |" << endl;
	cout << "|----|---------------------|------------|----------------------------|" << endl;

	for (int i = 0; i < N; i++)
	{
		cout << "|" << setw(4) << spis[i].sc << "|" << setw(21) << left <<
			spis[i].name << setw(-21) << "|" << setw(12) << spis[i].size << "|" << setw(28) << spis[i].mhz << "|" << endl;
	}
	cout << "|--------------------------------------------------------------------|" << endl;
	cout << "|����������: ����������� ������� �� 2 ����� �� ���������� ��������   |" << endl;
	cout << "----------------------------------------------------------------------" << endl;
#ifdef DEBUG_2
	DEBUG_2
#endif
	cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
	_getch();
	system("cls");
	

}
