//ЛАБОРАТОРНАЯ РАБОТА № 8Б
//
//Вставить в массив в любое место k элементов.
//Удалить из массива из любого места k элементов.Проверка на правильность ввода позиции и количества вставляемых / удаляемых элементов.

#include <iostream>
#include<math.h>
#include<conio.h>
#include<time.h>


using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));

    int answ = 0;
    int pos = 0;
    int n = 0;
    int unsigned const SIZE = n;
    int selection = 0;
    int buffer; // - временное хранилище
    int rnd;
    int nArr[n + 1];

    cout << "Введите количество элементов которые будут зафиксированы в массиве -> ";
    cin >> n;


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

        cout << "Выберите действие с массивом:" << endl <<
            "1. Добавить элемент" << endl <<
            "2. Убрать элемент " << endl;
        cin >> selection;

        switch (selection)
        {
        case 1:
            system("cls");
            cout << "Сколько элементов вы хотите добавить?" << endl;
            cout << "Ваш ответ -> ";
            cin >> answ;
            n += answ;
            for (int i = 0; i < answ; i++)
            {
                cout << "[" << i + 1 << "]" << ": ";
                cin >> arr[i];
            }
                for (int i = 0; i < n; i++)
                {
                    rnd = rand() % 10;
                    buffer = arr[rnd];
                    arr[rnd] = arr[i];
                    arr[i] = buffer;
                }
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }



        }


}


//#include <iostream>
//using namespace std;
//
//int main()
//{
//    const int sz = 5; // Размер
//    int arr[sz] = { 1, 2, 3, 4, 5 }; // Инициализация
//
//    int el = 7; // Вставляемый елемент
//    int pos = 3; // Позиция (начиная с - 0)
//
//    int nArr[sz + 1]; // Новый массив
//
//    for (int i = 0; i < pos; i++)
//        nArr[i] = arr[i];
//
//    nArr[pos] = el;
//
//    for (int i = pos + 1; i < sz + 1; i++)
//        nArr[i] = arr[i - 1];
//
//    for (int i = 0; i < sz + 1; i++) // Вывод
//        cout << nArr[i] << ' ';
//    cout << endl;
//
//    system("PAUSE");
//    return 0;
//}