#pragma once
#ifndef XT
#define XT

#include <iostream>
#include "windows.h"
#include <conio.h>

using namespace std;



class SUM
{
private:
    int s;
public:
    int x;
    int y;

    SUM(int valueX = 0, int valueY = 0)  //Конструктор с параметрами
    {
        x = valueX;
        y = valueY;
    }


    void SetX(int valueX)
    {
        x = valueX;
    }

    void SetY(int valueY)
    {
        y = valueY;
    }

    int GetS()
    {
        return s;
    }

    void Print()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;

    }

    void ResultSum()
    {
        s = x + y;
        cout << "Ответ = " << s << endl;
    }
};

#endif