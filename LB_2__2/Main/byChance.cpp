#include "byChance.h"

void byChance(mon spis[], int spis_size, int selection)         /*Рандомное заполнение структуры*/
{
	for (int i = 0; i < N; i++) {
		spis[i].sc = rand() % 200 + 1820;
		spis[i].name = "avtor_" + to_string(rand() % 50 + 100);
		spis[i].size = rand() % 1000 + 10;
		spis[i].mhz = rand() % 1000 + 10;
	}
}