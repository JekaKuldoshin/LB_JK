#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "windows.h"
using namespace std;

int main(void) {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	double x;
	
	double a = 12.5, b = 1.3;
	
	double t1, t2;   
	double ax, bx; 
	

	/*х=8*/



	printf("Введите x >");
	scanf("%lf", &x);


	

	bx = b * x;
	t1 = (1/pow(a,4)) * ((pow(x,3) / 3) -3* bx + 3 * pow(b,2)* log(x + (pow(b,3)) / x)); 

	
	/*t1 = (pow(x, 3) - 9 * b * x + 9 * pow(9, 2) * log(x + (pow(b, 3) / x))) / (3 * pow(a, 4));*/


		ax = a * x;
		t2 = (1 / (1 - sin(ax))) + (1 / a) * tan(ax / 2);

	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}