#pragma once

#include <iostream>
#include "windows.h"
#include <conio.h>

using namespace std;

class MATH {
	int a;           // Переменная для квадрата
	int b, c;       // Переменные для прямоугольника
	int S1, S2;    // Переменные для результата

public:
	MATH();                 // Конструктор без параметров  
	void count();          // Функция для подсчета S
	void show()const;     // Функция для вывода константное, потому что оно не изменяет данные 
	
};
