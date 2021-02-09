//8. Проверить, является ли натуральное число N с i - й по j - ю цифру палиндромом.
#include <iostream>
#include <cstring>

using namespace std;

bool polidrom(string word)
{
    int len = word.length();
    for (int i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            return false;
        }
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    while (true)
    {
        string str;
        cout << "Проверка елемента на палидром" << endl;
        cout << "Введите число: ";
        cin >> str;
        if (polidrom(str))
        {
            cout << "Число является палидромом!";
        }
        else
        {
            cout << "Число не является палидромом!";
        }
        cout << endl;
        system("pause");
        system("cls");
    }
    return 0;
}

