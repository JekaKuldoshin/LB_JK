#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

int main()
{
	system("cls");


	setlocale(LC_ALL, "Rus");
	int a, b, c, p, S;
	printf("Введите число a:\n");
	scanf_s("%d", &a);
	printf("Введите число b:\n");
	scanf_s("%d", &b);
	printf("Введите число c:\n");
	scanf_s("%d", &c);
	system("cls");



	p = (a + b + c) / 2;
	printf("Результат периметра: p=%d\n", p);

	S = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("Результат формулы Герона: S=%d\n", S);



}