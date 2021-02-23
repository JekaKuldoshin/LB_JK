#include "Sort.h"

void Sort(mon spis[])                        /*Сортировка структуры*/
{
	mon temp;
	for (int i = 0; i < N - 1; i++) {
		for (int j = i; j < N; j++) {
			if (spis[i].sc > spis[j].sc) {
				temp = spis[i]; spis[i] = spis[j];
				spis[j] = temp;
			}
		}
	}
}