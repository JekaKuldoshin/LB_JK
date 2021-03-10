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
    cout << "¬ведите количество елементов массива" << endl;
    cin >> size;
    system("cls");
    int* arr = new int[size];
link_menu1:
    system("cls");
    cout << "|                         ћеню                        |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "| 1 Ц ввод с экрана                                   |" << endl;
    cout << "| 2 Ц случайным образом                               |" << endl;
    cout << "| 3 Ц вернутс€ к выбору количества елементов массива  |" << endl;
    cout << "|-----------------------------------------------------|" << endl;
    cout << "—делайте выбор -> ";
    cin >> selection;

    if (selection == 1)
    {
        Bring(arr,size);     /*¬вод с консоли*/
        goto link_menu2;
    }
    if (selection == 2)
    {
        byChance(arr,size);  /* ¬вод рандомно*/
    }
    if (selection == 3)
    {
        goto link_menuBring;
    }
    else
    {
        cout << "\nќшибка! ѕункт меню отсутствует!" << endl;
        _getch();
        goto link_menu1;
    }

    /*-------------------------------------------------------------*/
   
link_menu2:
    system("cls");
    int* p = new int[s];
    cout << "|                                    ћеню                                  |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;
    cout << "| 1 Ц вывод массива                    | 3 - вернутс€ в главное меню       |" << endl;
    cout << "| 2 Ц вывод суммы двухзначных чисел    | 4 - выход                         |" << endl;
    cout << "|--------------------------------------------------------------------------|" << endl;


    cout << "—делайте выбор -> ";
    cin >> selection;

    if (selection == 1)
    {
        PrintArr(arr, p,size);            /*—делали обращение к функции печати массива*/
        goto link_menu2;
    }
    if (selection == 2)
    {

        Sum(arr, p,size);        /* ќбратились к функции суммы двухзначных чисел*/
        goto link_menu2;
    }
    if (selection == 3)
    {
        goto link_menu1;       /* ѕереходы по программе*/
    }
    if (selection == 4)
    {
        goto link_exit;       /* ѕереходы по программе*/
    }
    else
    {
        cout << "\nќшибка! ѕункт меню отсутствует!" << endl;
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