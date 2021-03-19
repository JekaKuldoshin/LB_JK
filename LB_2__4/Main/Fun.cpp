#include "Fun.h"

void byChance(int* array, int size)
{
	for (int i = 0; i < size; i++)
	{
		*(array + i) = rand() % 20;
	}
}

int Sum(int* NEWarr, int count)
{
	int result = 0;

	for (int i = 0; i < count; i++)
	{
		result = *(NEWarr + i) + result;
	}
	return result;
}

int* PrintArr(int* arr, int& count, int size, int* NEWarr)
{
	int j = 0;


	for (int i = 0; i < size; i++)
	{

		if (*(arr + i) > 9)
		{
			*(NEWarr + j) = *(arr + i);
			j++;
		}
	}


	return NEWarr;
}