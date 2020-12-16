
#include<iostream>
#include<chrono>
#include <clocale>
#include<conio.h>
#include<iomanip>
#include<algorithm>

using namespace std;

//ф-ция для времени
class Timer
{
private:
	// Псевдонимы типов используются для удобного доступа к вложенным типам
	using clock_t = std::chrono::high_resolution_clock;
	using second_t = std::chrono::duration<double, std::ratio<1> >;

	std::chrono::time_point<clock_t> m_beg;

public:
	Timer() : m_beg(clock_t::now())
	{
	}

	void reset()
	{
		m_beg = clock_t::now();
	}

	double elapsed() const
	{
		return std::chrono::duration_cast<second_t>(clock_t::now() - m_beg).count();
	}
};





//ф-ция "Быстрая сортировка Хоара"-сортировки
void quickSort(int* numbers, int left, int right)
{
	int pivot; // разрешающий элемент
	char  Result_i = '+';
	int RESULT;
	int l_hold = left; //левая граница
	int r_hold = right; // правая граница

	pivot = numbers[left];
	while (left < right) // пока границы не сомкнутся
	{
		while ((numbers[right] >= pivot) && (left < right))
			right--; // сдвигаем правую границу пока элемент [right] больше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[left] = numbers[right]; // перемещаем элемент [right] на место разрешающего
			left++; // сдвигаем левую границу вправо
		}
		while ((numbers[left] <= pivot) && (left < right))
			left++; // сдвигаем левую границу пока элемент [left] меньше [pivot]
		if (left != right) // если границы не сомкнулись
		{
			numbers[right] = numbers[left]; // перемещаем элемент [left] на место [right]
			right--; // сдвигаем правую границу вправо
		}

	}

	numbers[left] = pivot; // ставим разрешающий элемент на место
	pivot = left;
	left = l_hold;
	right = r_hold;

	if (left < pivot) // Рекурсивно вызываем сортировку для левой и правой части массива
	{

		quickSort(numbers, left, pivot - 1);

	}
	if (right > pivot)
	{

		quickSort(numbers, pivot + 1, right);

	}

	cout << "\nИтерация: " << Result_i; // просмотр количества итераций

}

int main()
{
	setlocale(LC_ALL, "rus");
	int buffer, selection;
link:
	cout << "------------------------------|" << endl;
	cout << " Расчетно графическое задание |" << endl;
	cout << "                              |" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size1 = 5;
	cout << "Размер массива -> " << size1 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A1 = new int[size1];
	for (int i = 0; i <= (size1 - 1); i++)
	{
		A1[i] = rand() % (size1 * 5);
		cout << A1[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A1, 0, size1 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size1; k++)
	{
		cout << A1[k] << " | ";
	}
	Timer t1;
	cout << endl;
	double time1 = t1.elapsed();
	cout << "\nВремя выполнение  ->  " << time1 << '\n';
	int num1 = size1;


	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size2 = 10;
	cout << "Размер массива -> " << size2 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A2 = new int[size2];
	for (int i = 0; i <= (size2 - 1); i++)
	{
		A2[i] = rand() % (size2 * 5);
		cout << A2[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A2, 0, size2 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size2; k++)
	{
		cout << A2[k] << " | ";
	}
	Timer t2;
	cout << endl;
	double time2 = t2.elapsed();
	cout << "\nВремя выполнение  ->  " << time2 << '\n';
	int num2 = size2;



	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	//////////////////////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size3 = 15;
	cout << "Размер массива -> " << size3 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A3 = new int[size3];
	for (int i = 0; i <= (size3 - 1); i++)
	{
		A3[i] = rand() % (size3 * 5);
		cout << A3[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A3, 0, size3 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size3; k++)
	{
		cout << A3[k] << " | ";
	}
	Timer t3;
	cout << endl;
	double time3 = t3.elapsed();
	cout << "\nВремя выполнение  ->  " << time3 << '\n';
	int num3 = size3;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	//////////////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size4 = 20;
	cout << "Размер массива -> " << size4 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A4 = new int[size4];
	for (int i = 0; i <= (size4 - 1); i++)
	{
		A4[i] = rand() % (size4 * 5);
		cout << A4[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A4, 0, size4 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size4; k++)
	{
		cout << A4[k] << " | ";
	}
	Timer t4;
	cout << endl;
	double time4 = t4.elapsed();
	cout << "\nВремя выполнение  ->  " << time4 << '\n';
	int num4 = size4;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	//////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;


	/*int size = 0;*/
	int size5 = 25;
	cout << "Размер массива -> " << size5 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A5 = new int[size5];
	for (int i = 0; i <= (size5 - 1); i++)
	{
		A5[i] = rand() % (size5 * 5);
		cout << A5[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A5, 0, size5 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size5; k++)
	{
		cout << A5[k] << " | ";
	}
	Timer t5;
	cout << endl;
	double time5 = t5.elapsed();
	cout << "\nВремя выполнение  ->  " << time5 << '\n';
	int num5 = size5;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size6 = 30;
	cout << "Размер массива -> " << size6 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A6 = new int[size6];
	for (int i = 0; i <= (size6 - 1); i++)
	{
		A6[i] = rand() % (size6 * 5);
		cout << A6[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A6, 0, size6 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size6; k++)
	{
		cout << A6[k] << " | ";
	}
	Timer t6;
	cout << endl;
	double time6 = t6.elapsed();
	cout << "\nВремя выполнение  ->  " << time6 << '\n';
	int num6 = size6;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size7 = 35;
	cout << "Размер массива -> " << size7 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A7 = new int[size7];
	for (int i = 0; i <= (size7 - 1); i++)
	{
		A7[i] = rand() % (size7 * 5);
		cout << A7[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A7, 0, size7 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size7; k++)
	{
		cout << A7[k] << " | ";
	}
	Timer t7;
	cout << endl;
	double time7 = t7.elapsed();
	cout << "\nВремя выполнение  ->  " << time7 << '\n';
	int num7 = size7;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;

	/*int size = 0;*/
	int size8 = 40;
	cout << "Размер массива -> " << size8 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A8 = new int[size8];
	for (int i = 0; i <= (size8 - 1); i++)
	{
		A8[i] = rand() % (size8 * 5);
		cout << A8[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A8, 0, size8 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size8; k++)
	{
		cout << A8[k] << " | ";
	}
	Timer t8;
	cout << endl;
	double time8 = t8.elapsed();
	cout << "\nВремя выполнение  ->  " << time8 << '\n';
	int num8 = size8;

	cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////
	cout << "------------------------------|" << endl;
	cout << "    Неупорядочнный массив     |" << endl;
	cout << "                              |" << endl;
	cout << "   Быстрая сортировка Хоара   |" << endl;
	cout << "------------------------------|" << endl << endl;


	/*int size = 0;*/
	int size9 = 45;
	cout << "Размер массива -> " << size9 << endl << endl;
	/*cin >> size;*/
	/*if (size > 0)
	{*/
	int* A9 = new int[size9];
	for (int i = 0; i <= (size9 - 1); i++)
	{
		A9[i] = rand() % (size9 * 5);
		cout << A9[i] << " | ";
	}
	//for (int k = 0; k < size; k++)
	//{
	//	A[k] = size - k; // запись значений по убыванию
	//	cout << A[k] << " | ";
	//}

	quickSort(A9, 0, size9 - 1); // сортировка

	cout << "\nМассив после сортировки:\n";
	for (int k = 0; k < size9; k++)
	{
		cout << A9[k] << " | ";
	}
	Timer t9;
	cout << endl;
	double time9 = t9.elapsed();
	cout << "\nВремя выполнение  ->  " << time9 << '\n';
	int num9 = size9;

	cout << "\nНажмите клавишу Enter для получения результатов..." << endl;
	_getch();
	system("cls");

	/////////////////////////////////////////////////////
	int n = 6;

	cout << endl;
	cout << " |-------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " |                                                                       Неупорядочнный массив                                                     |" << endl;
	cout << " |----------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " |                            |                                           Количество элементов в массиве                                           |" << endl;
	cout << " |                            |--------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " |                            | " << setw(n) << num1 << setw(5) << "     | " << setw(n) << num2 << setw(5) << "     | " << setw(n) << num3 << setw(5) << "     | " << setw(n) << num4 << setw(5) << "     | " << setw(n) << num5 << setw(5) << "     | " << setw(n) << num6 << setw(5) << "     | " << setw(n) << num7 << setw(5) << "     | " << setw(n) << num8 << setw(5) << "     | " << setw(n) << num9 << setw(5) << "     |" << endl;
	cout << " |----------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
	cout << " |  Быстрая сортировка Хоара  | " << setw(10) << time1 << " | " << setw(10) << time2 << " | " << setw(10) << time3 << " | " << setw(10) << time4 << " | " << setw(10) << time5 << " | " << setw(10) << time6 << " | " << setw(10) << time7 << " | " << setw(10) << time8 << " | " << setw(10) << time9 << " |" << endl;
	cout << " |----------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;


	cout << "\nНажмите клавишу Enter для перехода в меню..." << endl;
	_getch();
	system("cls");
	/////////////////////////////////////////////////////////
link1:
	system("cls");
	cout << "Выберете стиль заполнения массива:" << endl <<
		"1.Неупорядочнный массив" << endl <<
		"2.Упорядочнный массив" << endl <<
		"3.Упорядочный массив в обратном порядке" << endl <<
		"4.Выход из программы" << endl;
	cout << endl;

	cout << "Ваш выбор -> ";
	cin >> selection;
	system("cls");

	if (selection == 1)
	{
		goto link;
	}
	if (selection == 4)
	{
		goto link_exit;
	}

	if (selection == 2)
	{



		/////////////////////////////////////////////////////////


		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size1 << endl << endl;
		for (int k = 0; k < size1; k++)
		{
			cout << A1[k] << " | ";
		}

		quickSort(A1, 0, size1 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size1; k++)
		{
			cout << A1[k] << " | ";
		}
		Timer t_1;
		cout << endl;
		double time_1 = t_1.elapsed();
		cout << "\nВремя выполнение  ->  " << time_1 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size2 << endl << endl;
		for (int k = 0; k < size2; k++)
		{
			cout << A2[k] << " | ";
		}

		quickSort(A2, 0, size2 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size2; k++)
		{
			cout << A2[k] << " | ";
		}
		Timer t_2;
		cout << endl;
		double time_2 = t_2.elapsed();
		cout << "\nВремя выполнение  ->  " << time_2 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size3 << endl << endl;
		for (int k = 0; k < size3; k++)
		{
			cout << A3[k] << " | ";
		}

		quickSort(A3, 0, size3 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size3; k++)
		{
			cout << A3[k] << " | ";
		}
		Timer t_3;
		cout << endl;
		double time_3 = t_3.elapsed();
		cout << "\nВремя выполнение  ->  " << time_3 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size4 << endl << endl;
		for (int k = 0; k < size4; k++)
		{
			cout << A4[k] << " | ";
		}

		quickSort(A4, 0, size4 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size4; k++)
		{
			cout << A4[k] << " | ";
		}
		Timer t_4;
		cout << endl;
		double time_4 = t_4.elapsed();
		cout << "\nВремя выполнение  ->  " << time_4 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		/////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size5 << endl << endl;
		for (int k = 0; k < size5; k++)
		{
			cout << A5[k] << " | ";
		}

		quickSort(A5, 0, size5 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size5; k++)
		{
			cout << A5[k] << " | ";
		}
		Timer t_5;
		cout << endl;
		double time_5 = t_5.elapsed();
		cout << "\nВремя выполнение  ->  " << time_5 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size6 << endl << endl;
		for (int k = 0; k < size6; k++)
		{
			cout << A6[k] << " | ";
		}

		quickSort(A6, 0, size6 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size6; k++)
		{
			cout << A6[k] << " | ";
		}
		Timer t_6;
		cout << endl;
		double time_6 = t_6.elapsed();
		cout << "\nВремя выполнение  ->  " << time_6 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size7 << endl << endl;
		for (int k = 0; k < size7; k++)
		{
			cout << A7[k] << " | ";
		}

		quickSort(A7, 0, size7 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size7; k++)
		{
			cout << A7[k] << " | ";
		}
		Timer t_7;
		cout << endl;
		double time_7 = t_7.elapsed();
		cout << "\nВремя выполнение  ->  " << time_7 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size8 << endl << endl;
		for (int k = 0; k < size8; k++)
		{
			cout << A8[k] << " | ";
		}

		quickSort(A8, 0, size8 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size8; k++)
		{
			cout << A8[k] << " | ";
		}
		Timer t_8;
		cout << endl;
		double time_8 = t_8.elapsed();
		cout << "\nВремя выполнение  ->  " << time_8 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		/////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "                              |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size9 << endl << endl;
		for (int k = 0; k < size9; k++)
		{
			cout << A9[k] << " | ";
		}

		quickSort(A9, 0, size9 - 1); // сортировка

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size9; k++)
		{
			cout << A9[k] << " | ";
		}
		Timer t_9;
		cout << endl;
		double time_9 = t_9.elapsed();
		cout << "\nВремя выполнение  ->  " << time_9 << '\n';


		cout << "\nНажмите клавишу Enter для получения результатов..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////////////////

		int n_ = 6;

		cout << endl;
		cout << " |------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                                                                           Упорядочнный массив                                                  |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                           |                                           Количество элементов в массиве                                           |" << endl;
		cout << " |                           |--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                           | " << setw(n_) << num1 << setw(5) << "     | " << setw(n_) << num2 << setw(5) << "     | " << setw(n_) << num3 << setw(5) << "     | " << setw(n_) << num4 << setw(5) << "     | " << setw(n_) << num5 << setw(5) << "     | " << setw(n_) << num6 << setw(5) << "     | " << setw(n_) << num7 << setw(5) << "     | " << setw(n_) << num8 << setw(5) << "     | " << setw(n_) << num9 << setw(5) << "     |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " | Быстрая сортировка Хоара  | " << setw(10) << time_1 << " | " << setw(10) << time_2 << " | " << setw(10) << time_3 << " | " << setw(10) << time_4 << " | " << setw(10) << time_5 << " | " << setw(10) << time_6 << " | " << setw(10) << time_7 << " | " << setw(10) << time_8 << " | " << setw(10) << time_9 << " |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;


		cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
		_getch();
		system("cls");
		goto link1;
	}

	/////////////////////////////////////////////////////////
	if (selection == 3)
	{
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size1 << endl << endl;
		for (int k = 0; k < size1; k++)
		{
			cout << A1[k] << " | ";
		}

		quickSort(A1, 0, size1 - 1); // сортировка


		for (int i = 0; i < (size1 / 2); i++)
		{
			buffer = A1[i];
			A1[i] = A1[size1 - 1 - i];               //Обмен 
			A1[size1 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size1; k++)
		{
			cout << A1[k] << " | ";
		}
		Timer tr_1;
		cout << endl;
		double timeR_1 = tr_1.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_1 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		///////////////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size2 << endl << endl;
		for (int k = 0; k < size2; k++)
		{
			cout << A2[k] << " | ";
		}

		quickSort(A2, 0, size2 - 1); // сортировка


		for (int i = 0; i < (size2 / 2); i++)
		{
			buffer = A2[i];
			A2[i] = A2[size2 - 1 - i];               //Обмен 
			A2[size2 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size2; k++)
		{
			cout << A2[k] << " | ";
		}
		Timer tr_2;
		cout << endl;
		double timeR_2 = tr_2.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_2 << '\n';


		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		////////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size3 << endl << endl;
		for (int k = 0; k < size3; k++)
		{
			cout << A3[k] << " | ";
		}

		quickSort(A3, 0, size3 - 1); // сортировка


		for (int i = 0; i < (size3 / 2); i++)
		{
			buffer = A3[i];
			A3[i] = A3[size3 - 1 - i];               //Обмен 
			A3[size3 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size3; k++)
		{
			cout << A3[k] << " | ";
		}
		Timer tr_3;
		cout << endl;
		double timeR_3 = tr_3.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_3 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size4 << endl << endl;
		for (int k = 0; k < size4; k++)
		{
			cout << A4[k] << " | ";
		}

		quickSort(A4, 0, size4 - 1); // сортировка


		for (int i = 0; i < (size4 / 2); i++)
		{
			buffer = A4[i];
			A4[i] = A4[size4 - 1 - i];               //Обмен 
			A4[size4 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size4; k++)
		{
			cout << A4[k] << " | ";
		}
		Timer tr_4;
		cout << endl;
		double timeR_4 = tr_4.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_4 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size5 << endl << endl;
		for (int k = 0; k < size5; k++)
		{
			cout << A5[k] << " | ";
		}

		quickSort(A5, 0, size5 - 1); // сортировка


		for (int i = 0; i < (size5 / 2); i++)
		{
			buffer = A5[i];
			A5[i] = A5[size5 - 1 - i];               //Обмен 
			A5[size5 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size5; k++)
		{
			cout << A5[k] << " | ";
		}
		Timer tr_5;
		cout << endl;
		double timeR_5 = tr_5.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_5 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size6 << endl << endl;
		for (int k = 0; k < size6; k++)
		{
			cout << A6[k] << " | ";
		}

		quickSort(A6, 0, size6 - 1); // сортировка


		for (int i = 0; i < (size6 / 2); i++)
		{
			buffer = A6[i];
			A6[i] = A6[size6 - 1 - i];               //Обмен 
			A6[size6 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size6; k++)
		{
			cout << A6[k] << " | ";
		}
		Timer tr_6;
		cout << endl;
		double timeR_6 = tr_6.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_6 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size7 << endl << endl;
		for (int k = 0; k < size7; k++)
		{
			cout << A7[k] << " | ";
		}

		quickSort(A7, 0, size7 - 1); // сортировка


		for (int i = 0; i < (size7 / 2); i++)
		{
			buffer = A7[i];
			A7[i] = A7[size7 - 1 - i];               //Обмен 
			A7[size7 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size7; k++)
		{
			cout << A7[k] << " | ";
		}
		Timer tr_7;
		cout << endl;
		double timeR_7 = tr_7.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_7 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size8 << endl << endl;
		for (int k = 0; k < size8; k++)
		{
			cout << A8[k] << " | ";
		}

		quickSort(A8, 0, size8 - 1); // сортировка


		for (int i = 0; i < (size8 / 2); i++)
		{
			buffer = A8[i];
			A8[i] = A8[size8 - 1 - i];               //Обмен 
			A8[size8 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size8; k++)
		{
			cout << A8[k] << " | ";
		}
		Timer tr_8;
		cout << endl;
		double timeR_8 = tr_8.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_8 << '\n';

		cout << "\nНажмите клавишу Enter чтобы продолжить..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////
		cout << "------------------------------|" << endl;
		cout << "    Упорядочнный массив       |" << endl;
		cout << "     в обратном порядке       |" << endl;
		cout << "   Быстрая сортировка Хоара   |" << endl;
		cout << "------------------------------|" << endl << endl;


		/*int size = 0;*/

		cout << "Размер массива -> " << size9 << endl << endl;
		for (int k = 0; k < size9; k++)
		{
			cout << A9[k] << " | ";
		}

		quickSort(A9, 0, size9 - 1); // сортировка


		for (int i = 0; i < (size9 / 2); i++)
		{
			buffer = A9[i];
			A9[i] = A9[size9 - 1 - i];               //Обмен 
			A9[size9 - 1 - i] = buffer;

		}

		cout << "\nМассив после сортировки:\n";
		for (int k = 0; k < size9; k++)
		{
			cout << A9[k] << " | ";
		}
		Timer tr_9;
		cout << endl;
		double timeR_9 = tr_9.elapsed();
		cout << "\nВремя выполнение  ->  " << timeR_9 << '\n';

		cout << "\nНажмите клавишу Enter для получения результатов..." << endl;
		_getch();
		system("cls");
		//////////////////////////////////////////////////////////////


		int n_r = 6;

		cout << endl;
		cout << " |------------------------------------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                                                                   Упорядочнный массив в обратном порядке                                       |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                           |                                           Количество элементов в массиве                                           |" << endl;
		cout << " |                           |--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " |                           | " << setw(n_r) << num1 << setw(5) << "     | " << setw(n_r) << num2 << setw(5) << "     | " << setw(n_r) << num3 << setw(5) << "     | " << setw(n_r) << num4 << setw(5) << "     | " << setw(n_r) << num5 << setw(5) << "     | " << setw(n_r) << num6 << setw(5) << "     | " << setw(n_r) << num7 << setw(5) << "     | " << setw(n_r) << num8 << setw(5) << "     | " << setw(n_r) << num9 << setw(5) << "     |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;
		cout << " | Быстрая сортировка Хоара  | " << setw(10) << timeR_1 << " | " << setw(10) << timeR_2 << " | " << setw(10) << timeR_3 << " | " << setw(10) << timeR_4 << " | " << setw(10) << timeR_5 << " | " << setw(10) << timeR_6 << " | " << setw(10) << timeR_7 << " | " << setw(10) << timeR_8 << " | " << setw(10) << timeR_9 << " |" << endl;
		cout << " |---------------------------|--------------------------------------------------------------------------------------------------------------------|" << endl;


		cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
		_getch();
		system("cls");
		goto link1;

	}

	else
	{
		cout << "\nОшибка! Пункт меню отсутствует!" << endl;
		_getch();
		goto link1;
	}
link_exit:
	system("cls");
	cout << "Thanks for your attention!!" << endl;

	return 0;

}
