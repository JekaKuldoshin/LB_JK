#include "Fun.h"

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
link1:
    int size;
    int selection;
    int s = 0;
    int count = 0;
    int result = 0;
    int check = 1;

    int* NEWarr = new int[count];
    while (check)
    {
        system("cls");
        cout << "| ������� ���������� ��������� ������� |" << endl;
        cout << "|--------------------------------------|" << endl;
        cout << "���� -> ";
        cin >> size;

        int* arr = new int[size];
        system("cls");

        cout << "���������� ��������� ������� -> " << size << endl << endl;
        byChance(arr, size);

        cout << "�������� ������� -> ";
        for (int i = 0; i < size; i++)
        {

            cout << *(arr + i) << " ";
        }
        cout << "\n\n";
        cout << "������ ��� ����������� ����� -> ";

        int* NEWarrr = PrintArr(arr, count, size, NEWarr); /*������� ��������� � ������� ������ �������*/

        for (int i = 0; i < count; i++)
        {
            cout << *(NEWarr + i) << " ";
        }

        cout << endl;

        cout << endl;
        /* ���������� � ������� ����� ����������� �����*/
        cout << "����� ����������� ����� -> " << Sum(arr, size);
        cout << endl;
        cout << "\n������� ������� Enter ��� �������� � ����..." << endl;
        _getch();
        system("cls");

        cout << "|     ����    |" << endl;
        cout << "|-------------|" << endl;
        cout << "| 1 � ������  |" << endl;
        cout << "| 2 - �����   |" << endl;
        cout << "|-------------|" << endl;
        cout << "���� -> ";
        cin >> selection;
        if (selection == 1)
        {
            goto link1;
        }
        if (selection == 2)
        {
            goto link_exit;
        }
        else
        {
            cout << "\n������! ����� ���� �����������!" << endl;
            _getch();
        }





        delete[] NEWarr;
    }
link_exit:
    system("cls");
    cout << "Thanks for your attention!!" << endl;

    return 0;
}