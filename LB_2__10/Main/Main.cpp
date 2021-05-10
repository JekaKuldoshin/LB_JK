#include "Fun.h" 

int main()
{
    setlocale(LC_ALL, "ru");
    int selection;
    SUM cl_sum;
    while (true)
    {
        cout << "|                                  Меню                                  |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "| 1 – Заполнение через объекты       | 4 - Функция инициализации x, y    |" << endl;
        cout << "| 2 - Заполнения через указатели     | 5 - Функция подсчета суммы s      |" << endl;
        cout << "| 3 - Вывод всех переменных класса   | 6 - Выход                         |" << endl;
        cout << "|------------------------------------------------------------------------|" << endl;
        cout << "Ваш выбор -> ";
        cin >> selection;
        
        switch (selection)
        {
        case (1):
            system("cls");

            cout << "Введите значение x -> ";
            cin >> cl_sum.x;
            cout << endl;
            cout << "Введите значение y -> ";
            cin >> cl_sum.y;
            system("cls");
            cout << "Успех!!\nЗаполнения элементов класса через объекты было выполнено.\n\nДля перехода в меню нажмите Enter..." << endl;
            _getch();
            system("cls");
            break;

        case (3):
            system("cls");
            system("cls");
            cl_sum.Print();      //Функция печати 
            cout << "s = " << cl_sum.GetS() << endl; //Обращение к закрытому классу
            _getch();
            system("cls");
            break;

        case (4):             //Коструктор по умолчанию
            cl_sum.SetX(2);     //инициализируют элементы данных
            cl_sum.SetY(3);    //инициализируют элементы данных
            cl_sum.GetS();    //Обращение к закрытому классу
            system("cls");
            cout << "Успех!!\nИнициализации x, y было выполнено\nДля перехода в меню нажмите Enter..." << endl;
            _getch();
            system("cls");
            break;

        case (5):
            system("cls");
            cout << cl_sum.x << " + "<< cl_sum.y << endl;
            cl_sum.ResultSum();     //Выводим сумму
            _getch();
            system("cls");
      
            break;

        case(6):
            system("cls");
            cout << "Thanks for your attention!!" << endl;
            return 0;
            break;

        default:
            system("cls");
            cout<<"Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...";
            _getch();
            system("cls");
            break;

        case (2):
            system("cls");        //Обращение через укащатели
            SUM* r = &cl_sum;
            cout << "Введите значение x -> ";
            cin >> r->x;
            cout << endl;
            cout << "Введите значение y -> ";
            cin >> r->y;
            system("cls");
            cout << "Успех!!\nЗаполнения элементов класса через указатель было выполнено.\nДля перехода в меню нажмите Enter..." << endl;
            //дописать про успех заполнения 
            _getch();
            system("cls");
            break;

            
        }
    }
}