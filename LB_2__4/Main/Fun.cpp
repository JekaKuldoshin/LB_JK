#include "Fun.h"

void Bring(int* array, int size) 
{
	system("cls");
	cout << "������� �������� �������: \n";

	for (int i = 0; i < size; i++)
	{
		cout << "| " << i + 1 << " | = ";
		cin >> *(array + i);
		cout << endl;
	}
}

void byChance(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 20;
	}
}

void PrintArr(int* array, int* p, int size)
{
	system("cls");
	int count = 0;


	cout << "�������� ������� -> ";
	for (int i = 0; i < size; i++)
	{
		     
		cout << *(array + i) << " ";
	}
	cout << "\n\n";
	cout << "������ ��� ����������� ����� -> ";
	for (int i = 0; i < size; i++)
	{
		if (*(array + i) > 9)
		{
			*(p + count) = *(array + i);
			count++;

		}
	}

	for (int i = 0; i < count; i++)
		cout << *(p + i) << " ";


	cout << endl;
	cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
	_getch();



}

void Sum(int* array, int* p, int size)
{
	system("cls");
	int count = 0;
	int result = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(array + i) > 9)
		{
			*(p + count) = *(array + i);
			
			result = *(p + count) + result;
			count++;
		}
	}
	cout << "����� ����������� ����� -> " << result;
	cout << endl;
	cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
	_getch();



}

