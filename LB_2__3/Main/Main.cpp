#include "Fun.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    srand(time(NULL));
link1:
    int arr[size]{};
    int NEWarr[size]{};
    int check = 1;
    int count = 0;
    int result = 0;
    int selection;

    while (check)
    {
        system("cls");
        cout << "Количество елементов массива -> " << size << endl << endl;

        byChance(arr);
        cout << "Элементы массива -> ";
        for (int i = 0; i < size; i++)
        {

            cout << *(arr + i) << " ";
        }
        cout << "\n\n";

        cout << "Массив для двухзначных чисел -> ";

        int* NEWarrr = PrintArr(arr, count, NEWarr); /*Сделали обращение к функции печати массива*/

        for (int i = 0; i < count; i++)
        {
            cout << *(NEWarr + i) << " ";
        }
        cout << endl;
        cout << endl;

        cout << "Сумма двухзначных чисел -> " << Sum(NEWarr, count);
        cout << endl;
        cout << "\nНажмите клавишу Enter для возврата в меню..." << endl;
        _getch();
        system("cls");

        cout << "|     Меню    |" << endl;
        cout << "|-------------|" << endl;
        cout << "| 1 – повтор  |" << endl;
        cout << "| 2 - выход   |" << endl;
        cout << "|-------------|" << endl;
        cout << "Ввод -> ";
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
            cout << "\nОшибка! Пункт меню отсутствует!" << endl;
            _getch();
        }
    }
link_exit:
    system("cls");
    cout << "Thanks for your attention!!" << endl;

    return 0;



}