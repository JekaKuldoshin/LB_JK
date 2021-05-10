#include "Fun.h"

int main()
{
exit:
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int selection;
    int selection_menu;
    Tabl data(1960, "Дрейк", 26, 1420);
    bool choice=true;
    while (choice)
    {
        
        cout << "|                                            Меню                                      |" << endl;
        cout << "|--------------------------------------------------------------------------------------|" << endl;
        cout << "| 1 – Инициализация объекта через конструктор | 3 – Просмотр данных через Get          |" << endl;
        cout << "| 2 – Инициализация объекта через ввод        | 4 - Просмотр данных через Set          |" << endl;
        cout << "|--------------------------------------------------------------------------------------|" << endl;
        cout << "|                                  5 - Выход из программы                              |" << endl;
        cout << "|--------------------------------------------------------------------------------------|" << endl;
        cout << "Ваш выбор -> ";
        cin >> selection;

        switch (selection)
        {
        case (1):
            while (choice)
            {
                system("cls");
                cout << "|                                       Меню                                     |" << endl;
                cout << "|--------------------------------------------------------------------------------|" << endl;
                cout << "| 1 – Просмотр одной из переменных класса | 2 - Просмотр всех переменных класса  |" << endl;
                cout << "|--------------------------------------------------------------------------------|" << endl;
                cout << "|                             3 - Выход в главное меню                           |" << endl;
                cout << "|--------------------------------------------------------------------------------|" << endl;
                cout << "Ваш выбор -> ";
                cin >> selection_menu;
                switch (selection_menu)
                {
                case (1):
                    system("cls");
                    while (choice)
                    {
                        selection_menu = NULL;
                        cout << "|                    Меню                              |" << endl;
                        cout << "|------------------------------------------------------|" << endl;
                        cout << "| 1 - Вывод по году    | 3 - Вывод по диаметру антены  |" << endl;
                        cout << "| 2 - Вывод по имени   | 4 - Поиск по рабочей частоте  |" << endl;;
                        cout << "|------------------------------------------------------|" << endl;
                        cout << "|              5 - Выход в главное меню                |" << endl;
                        cout << "|------------------------------------------------------|" << endl;

                        cout << "Ваш выбор -> ";
                        cin >> selection_menu;
                        switch (selection_menu)
                        {

                        case (1):
                            system("cls");
                            cout << "Год -> ";
                            data.ShowSC();                      //Класс для вывода года
                            cout << endl << endl;
                            cout << "Для перехода в меню нажмите Enter...";
                            _getch();
                            system("cls");
                            break;
                        case (2):
                            system("cls");
                            cout << "Научный руководитель -> ";
                            data.ShowName();                      //Класс для вывода имени
                            cout << endl << endl;
                            cout << "Для перехода в меню нажмите Enter...";
                            _getch();
                            system("cls");
                            break;
                        case(3):
                            system("cls");
                            cout << "Диаметр антенны -> ";
                            data.ShowSize();                      //Класс для вывода диаметр
                            cout << endl << endl;
                            cout << "Для перехода в меню нажмите Enter...";
                            _getch();
                            system("cls");
                            break;
                        case (4):
                            system("cls");
                            cout << "Рабочая частота (МГц) -> ";
                            data.ShowMHZ();                      //Класс для вывода частота
                            cout << endl << endl;
                            cout << "Для перехода в меню нажмите Enter...";
                            _getch();
                            system("cls");
                            break;
                        case (5):
                            system("cls");
                            goto exit;
                            break;

                        default:
                            system("cls");
                            cout << "Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...";
                            _getch();
                            system("cls");
                            break;
                        }
                    }
                case(2):
                    system("cls");
                    data.ShowAll();        //Класс для вывода данных
                    cout << endl;
                    cout << "Для перехода в меню нажмите Enter...";
                    _getch();
                    break;
                case(3):
                    system("cls");
                    goto exit;
                    break;

                default:
                    system("cls");
                    cout << "Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...";
                    _getch();
                    system("cls");
                    break;
                }
            }
            break;
        case (2):
            system("cls");
            cout << "Введите год -> ";
            cin >> data.sc;
            cout << "Введите имя научного руководителя -> ";
            cin >> data.name;
            cout << "Введите диаметр антенны (м) -> ";
            cin >> data.size;
            cout << "Введите рабочую частоту (МГц) -> ";
            cin >> data.mhz;
            system("cls");
            data.ShowAll();
            cout << endl;
            cout << "Для перехода в меню нажмите Enter...";
            _getch();
            system("cls");
            break;
        case (4):           //Set
            system("cls");
            data.SetSC(1660);
            data.SetName("Троицкий");
            data.SetSize(14);
            data.SetMHZ(1875);
            data.ShowAll();
            cout << endl;
            cout << "Для перехода в меню нажмите Enter...";
            _getch();
            system("cls");
            goto exit;
            break;

        case (5):
            system("cls");
            cout << "Thanks for your attention!!" << endl;
            return 0;
            break;

        default:
            system("cls");
            cout << "Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...";
            _getch();
            system("cls");
            break;

        case (3):
            system("cls");
            unsigned int transferSC = data.GetSC();
            string transferName = data.GetName();
            int transferSize = data.GetSize();
            int transferMHZ = data.GetMHZ();

            cout << "Год -> ";
            cout << transferSC << endl;
            cout << "Научный руководитель -> ";
            cout << transferName << endl;
            cout << "Диаметр антенны -> ";
            cout << transferSize << endl;
            cout << "Рабочая частота (МГц) -> ";
            cout << transferMHZ << endl << endl;
            cout << endl;
            cout << "Для перехода в меню нажмите Enter...";
            _getch();
            system("cls");
            break;

         }
    }
    return 0;
}