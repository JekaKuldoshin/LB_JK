#include "Sum.h"

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
	cout << "����� ����������� ����� -> " <<result;
	cout << endl;
	cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
	_getch();
}