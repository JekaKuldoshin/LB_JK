//ЛАБОРАТОРНАЯ РАБОТА № 8В
//
//Найти сумму цифр в введенном с экрана числе, их количество и напечатать число наоборот.


#include <iostream>
#include<math.h>
#include<conio.h>


using namespace std;

int main()
{

    setlocale(LC_ALL, "rus");

    int change_1 = 0;
    int n = 0;
    int const SIZE = n;

link:
    cout << "Введите количество элементов которые будут зафиксированы в массиве -> ";
    cin >> n;



    if (n > 0)
    {

        int* arr = new int[n];
        int summ = 0;

        // Заполнение массива с клавиатуры
        for (int i = 0; i < n; i++) {
            cout << "[" << i + 1 << "]" << ": ";
            cin >> arr[i];
        }

        
        cout << "\nВаш массив: ";

        for (int i = 0; i < n; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;


        for (int i = 0; i < n; i++)
        {
            summ += arr[i];

        }
        cout << "\nКоличество элементов в массиве -> " << n << endl;
        cout << "Сумма масива -> " << summ << endl << endl;

        int buffer; // - временное хранилище
        cout << "Ваш модернизированный массив: ";

        for (int i = 0; i < (n / 2); i++) {
            buffer = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = buffer;
        }
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }

    }
    else
    {
        if (n = 0)
        {
            cout << "Ошибка! Массив не может принимать значение нуля." << endl;
            _getch();
            system("cls");
            goto link;
        }
        else
        {
            cout << "Ошибка! Массив не может принимать значение меньше нуля." << endl;
            _getch();
            system("cls");
            goto link;
        }
    }  
    //Прописал случаи с неправильным набором константы



    cout << endl;

    _getch();
    return 0;
}
