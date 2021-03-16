#include "byChance.h"

void byChance(int arr[])
{
	srand(time(NULL));
	for (int i = 0; i < SIZE; i++)
	{
		arr[i] = rand() % 20;
	}
}