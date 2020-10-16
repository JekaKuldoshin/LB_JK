#include<iostream>
#include<stdio.h>
//int, short, long, char, float, double
using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	printf("Количество байт памяти: int %d \n", sizeof(int));
	printf("Количество байт памяти: short %hd\n", sizeof(short));
	printf("Количество байт памяти : long %ld\n", sizeof(long));
	printf("Количество байт памяти: char %c\n", sizeof(char));
	printf("Количество байт памяти: float %f\n", sizeof(float));
	printf("Количество байт памяти: double %lf\n", sizeof(double));


}