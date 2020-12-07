#include<iostream>
#include<ctime>
#include<iomanip>
#include<conio.h>


using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	srand(time(NULL));

	int const SIZE = 100;
	int arr[SIZE];
	int avar = 0;
	int sum = 0;
	int q = 0;

	cout << "Начальный массив:" << endl;
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % (100 - (-100) + 1) + (-100);

	}

	for (int i = 0; i < SIZE; i++)
	{
		cout << setw(4) << arr[i];
		cout << " ";
	}
	cout << endl << endl;
	cout << "Модернизированный массив:" << endl;




	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] >= 0)
		{
			sum += arr[i];
			q += 1;
		}

	}


	avar = sum / q;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] <= 0)
		{
			arr[i] = avar;
		}

		cout << setw(4) << arr[i];
	}
	cout << endl;


	_getch();
	return 0;






}