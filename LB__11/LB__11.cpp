#include <iostream>

using namespace std;

bool GetIsPalindrom(int Value, int StartIndex, int EndIndex, int DigCount)
{
    if (StartIndex == EndIndex)       /*программа будет находить последовательно первое, далее последние число,   */
        return true;                  /*до тех пор пока А=В, а если А!=В переходим к return false*/

    int  FirstDig = (int)(Value / pow(10, DigCount - StartIndex)) % 10,        /*находит число А*/
        SecondDig = (int)(Value / pow(10, DigCount - EndIndex)) % 10;          /*находит число В*/

    if (FirstDig == SecondDig)                                                /*в том случае когда А=В и Первое число = последнему,*/
        return GetIsPalindrom(Value, StartIndex + 1, EndIndex - 1, DigCount);   /*переходим к Рекурсии - функция обращается сама к себе*/

    return false;                              /*если А!=В, то мы выходим из рекурсии*/
}


int main()
{
    setlocale(LC_ALL, "rus");
    while (true)
    {
        cout << "Проверка элемента на палидром                          |" << endl;
        cout << "-------------------------------------------------------|" << endl;
        cout << "Примечание: элемент может принимать в себя целые числа |" << endl;
        cout << "-------------------------------------------------------|" << endl;
        cout << "Введите элемент ->  ";
        int  iValue;
        cin >> iValue;
        int   DigCount = 1;                              /*создали переменную для нахождения кол-ва чисел */
        while (iValue / pow(10, DigCount) > 1)
        {                                                /*создали цикл для нахождения кол-ва чисел*/
            DigCount++;
        }
        bool  bPalindrom = GetIsPalindrom(iValue, 1, DigCount, DigCount);     /*вызываем функцию и передаем значения*/
        if (bPalindrom)
        {
            cout << "Элемент (" << iValue << ") является палидромом!" << endl << endl;
        }
        else
        {
            cout << "Элемент (" << iValue << ") не является палидромом!" << endl << endl;
        }

        system("pause");
        system("cls");
    }
}