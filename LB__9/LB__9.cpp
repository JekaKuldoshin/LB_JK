#include <iostream>
#include <time.h>
#include<conio.h>
#include <iomanip>

using namespace std;

#define N 12

int main() 
{
    setlocale(LC_ALL, "rus");
    srand(time(NULL));


    int a[N][N], i, j, b;
    

    cout << "Начальный массив: " << endl;

    for (i = 0; i < N; i++) {             //Создаем и выводим
        for (j = 0; j < N; j++) {
            a[i][j] = rand() % 10 - 5;
            cout << setw(4) << a[i][j];
        }
        cout << endl;
    }
    cout << endl;
    for (i = 0; i < N; i++)     
        for (j = 0; j < N; j++)
            if (i >= j&&i+j<=N-1) {     //если под ГД и над главной диагональю 
                b = a[i][j];                         //Замена происходит через доп. переменную
                a[i][j] = a[i][N - 1 - j];
                a[i][N - 1 - j] = b;
            }

    cout << "Модернизированный массив: " << endl;

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            cout<< setw(4)<< a[i][j];
        }
        cout << endl;
    }
    return 0;
}
