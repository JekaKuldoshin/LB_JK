//8. Поменять числа главной и боковой диагоналей местами[123567890] = > [321567098]

#include <iostream>
#include<math.h>
#include<conio.h>
#include<time.h>
#include<iomanip>


#define N 3


using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int b;

	cout << "Поменяйте числа главной и боковой диагоналей местами" << endl<<endl;
	

	cout << "Начальный массив: " << endl;

	int arr[N][N]
	{
		{1,2,3},
		{5,6,7},
		{8,9,0},

	};

	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	cout << "\nМодернизированный массив: " << endl;
	for (int i = 0; i < N; i++)

	{

		for (int j = 0; j < N; j++)
			if (i == j )
			{

				b = arr[i][j];

				arr[i][j] = arr[i][N - 1 - j];

				arr[i][N - 1 - j] = b;

			}


	}

	

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			cout << setw(4) << arr[i][j];
		}
		cout << endl;
	}
	_getch();
	return 0;


}