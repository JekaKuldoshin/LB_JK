#include "Fun.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));

    int size;
    int selection;
    int s = 0;
    

link_menuBring:
    system("cls");
    cout << "������� ���������� ��������� �������" << endl;
    cin >> size;
    system("cls");
    int* arr = new int[size];
link_menu1:
    system("cls");
    cout << "|                         ����                        |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "| 1 � ���� � ������                                   |" << endl;
    cout << "| 2 � ��������� �������                               |" << endl;
    cout << "| 3 � �������� � ������ ���������� ��������� �������  |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "�������� ����� -> ";
    cin >> selection;

    if (selection == 1)
    {
        Bring(arr,size);     /*���� � �������*/
        goto link_menu2;
    }
    if (selection == 2)
    {
        byChance(arr,size);  /* ���� ��������*/
    }
    if (selection == 3)
    {
        goto link_menuBring;
    }
    else
    {
        cout << "\n������! ����� ���� �����������!" << endl;
        _getch();
        goto link_menu1;
    }

    /*-------------------------------------------------------------*/
   
link_menu2:
    system("cls");
    int* p = new int[s];
    cout << "|                                    ����                                  |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "| 1 � ����� �������                    | 3 - �������� � ������� ����       |" << endl;
    cout << "| 2 � ����� ����� ����������� �����    | 4 - �����                         |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;


    cout << "�������� ����� -> ";
    cin >> selection;

    if (selection == 1)
    {
        PrintArr(arr, p,size);            /*������� ��������� � ������� ������ �������*/
        goto link_menu2;
    }
    if (selection == 2)
    {

        Sum(arr, p,size);        /* ���������� � ������� ����� ����������� �����*/
        goto link_menu2;
    }
    if (selection == 3)
    {
        goto link_menu1;       /* �������� �� ���������*/
    }
    if (selection == 4)
    {
        goto link_exit;       /* �������� �� ���������*/
    }
    else
    {
        cout << "\n������! ����� ���� �����������!" << endl;
        _getch();
        goto link_menu2;
    }
link_exit:
    system("cls");
    cout << "Thanks for your attention!!" << endl;

    return 0;

    
    cout << endl;
    delete[] p;
    delete[] arr;
}