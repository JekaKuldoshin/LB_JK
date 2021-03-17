#include "Fun.h"

void byChance(int arr[])
{
	for (int i = 0; i < size; i++)
	{
		*(arr + i) = rand() % 20;
	}
}




int* PrintArr(int arr[], int& count, int* NEWarr)
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

int Sum(int NEWarr[], int& count)
{
	int result = 0;

	for (int i = 0; i < count; i++)
	{
		result = *(NEWarr + i) + result;
	}
	return result;
}