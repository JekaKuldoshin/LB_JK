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
    unsigned int sc;              /*���*/
    string name;                  /*���*/
    unsigned int size;            /*�������*/
    unsigned int mhz;             /*�������*/

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

    void ShowAll()  //������� ��� ������ ���� ���������
    {
        cout << "----------------------------------------------------------------------" << endl;
        cout << "|                  ������� ������ ��������� ��������                 |" << endl;
        cout << "|--------------------------------------------------------------------|" << endl;
        cout << "|��� |�������              |�������     |������� �������             |" << endl;
        cout << "|    |������������         |������� (�) |������� (���)               |" << endl;
        cout << "|----|---------------------|------------|----------------------------|" << endl;
        cout << "|" << setw(4) << sc << "|" << setw(21) << left <<
            name << setw(-21) << "|" << setw(12) << size << 
            "|" << setw(28) << mhz << "|" << endl;
        cout << "|--------------------------------------------------------------------|" << endl;
        cout << "|����������: ����������� ������� �� 2 ����� �� ���������� ��������   |" << endl;
        cout << "----------------------------------------------------------------------" << endl;
        
    }
};
#endif