#include "Bring.h"

void Bring(int arr[])
{
	system("cls");
	cout << "������� �������� �������: \n";

	for (int i = 0; i < SIZE; i++)
	{
		cout << "| " << i+1 << " | = ";
		cin >> arr[i];
		cout << endl;
	}
}