#include "Fun.h"

void byChance(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 20;
	}
}

int Sum(int* arr, int size)
{

	int count = 0;
	int result = 0;

	for (int i = 0; i < size; i++)
	{
		if (*(arr + i) > 9)
		{

			result = *(arr + i) + result;
			count++;
		}
	}

	return result;

}

int* PrintArr(int arr[], int& count, int size, int* NEWarr)
{



	for (int i = 0; i < size; i++)
	{

		if (*(arr + i) > 9)
		{
			*(NEWarr + count) = *(arr + i);
			count++;

		}
	}


	return NEWarr;
}