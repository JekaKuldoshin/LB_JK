#include "Sum.h"

int Sum(int arr[])
{
	system("cls");
	int result = 0;

	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] > 9)
		{
			result = arr[i] + result;
		}
	}
	return result;
}