#include "PrintArr.h"

void PrintArr(int arr[], int* p[])
{
	system("cls");
	int NEWarr[SIZE];
	int count = 0;


	cout << "�������� ������� -> ";
	for (int i = 0; i < SIZE; i++)
	{
		p[i] = &arr[i];     //p[i] = A + i
		cout << *p[i] << " ";
	}
	cout << "\n\n";
	cout << "������ ��� ����������� ����� -> ";
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 9)
		{
			NEWarr[count] = arr[i];
			count++;

		}
	}

	for (int i = 0; i < count; i++)
		cout << NEWarr[i] << " ";


	cout << endl;
	cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
	_getch();

}