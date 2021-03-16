#include "PrintArr.h"

int* PrintArr(int arr[], int& count)
{
	system("cls");
	/*int buff[SIZE]{};*/
	

		int* NEWarr = new int[count];
		
		for (int i = 0; i < SIZE; i++)
		{
			if (arr[i] > 9)
			{
				*(NEWarr + count) = *(arr + i);
				count++;
			}

		}
	
		
		return NEWarr;
}