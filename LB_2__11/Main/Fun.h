#pragma once
#ifndef XT
#define XT
#include <iostream>
#include <string>
#include "windows.h"
#include <conio.h>
#include <iomanip>

using namespace std;

class Tabl
{
public:
    unsigned int sc;              /*год*/
    string name;                  /*имя*/
    unsigned int size;            /*диаметр*/
    unsigned int mhz;             /*частота*/

    Tabl(unsigned int theSC = 0, string theName = "None", int theSize = 0, int theMHZ = 0)
    {
       
        sc = theSC;
        name = theName;
        size = theSize;
        mhz = theMHZ;
    }

    unsigned int GetSC()
    {
        return sc;
    }

    string GetName()
    {
        return name;
    }
    
    int GetSize()
    {
        return size;
    }
    int GetMHZ()
    {
        return mhz;
    }

///////

    void SetSC(unsigned int addSC)
    {
        sc = addSC;
    }

    void SetName(string addName)
    {
        name = addName;
    }
    
    void SetSize(unsigned int addSize)
    {
        size = addSize;
    }
    void SetMHZ(unsigned int addMHZ)
    {
        mhz = addMHZ;
    }

    /////////    

    void ShowSC()
    {
        cout << sc;
    }

    void ShowName()
    {
        cout << name;

    }
   
    void ShowSize()
    {
        cout << size;
    }
    void ShowMHZ()
    {
        cout << mhz;
    }
    
    ////////

    void ShowAll()  //Функция для печати всех элементов
    {
        cout << "----------------------------------------------------------------------" << endl;
        cout << "|                  Проекты поиска внеземных сигналов                 |" << endl;
        cout << "|--------------------------------------------------------------------|" << endl;
        cout << "|Год |Научный              |Диаметр     |Рабочая частота             |" << endl;
        cout << "|    |руководитель         |антенны (м) |частота (МГц)               |" << endl;
        cout << "|----|---------------------|------------|----------------------------|" << endl;
        cout << "|" << setw(4) << sc << "|" << setw(21) << left <<
            name << setw(-21) << "|" << setw(12) << size << 
            "|" << setw(28) << mhz << "|" << endl;
        cout << "|--------------------------------------------------------------------|" << endl;
        cout << "|Примечание: наблюдались объекты от 2 звезд до нескольких галактик   |" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        
    }
};
#endif