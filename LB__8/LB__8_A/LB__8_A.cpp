////ЛАБОРАТОРНАЯ РАБОТА № 8А
////
////Задача авиадиспетчера по бронированию мест.Запрос - "Курите?".Если "ДА" – бронируются места с 1 по 5, если "НЕТ" – с 6 по 10. 
////Если мест в нужном секторе нет, вопрос задается повторно.Выход из программы – после заполнения всех 10 мест
//

#include <iostream>
#include <clocale>
#include<conio.h>
#include<math.h>

using namespace std;


int main()
{
    setlocale(LC_ALL, "rus");
    
    int const a = 10;
    int b[a];
    int x = 0, y = 5;
    bool count = true;
    int pass = 1;
    int answ_x = 0; //5-x=answ_x
    int answ_y = 0; //10-y=answ_y
    
    while (count)
    {
        
        int mesto;
        
        cout <<" " <<pass << "  пассажир |" << endl;
        cout << "=============|" << endl << endl;
        cout << "Перед тем как забронировать место, ответьте на один вопрос.";
        cout << "\nВы курите?" << endl;
        cout << "1.Да" << endl;
        cout << "2.Нет" << endl;
        cout << "-----------------------------" << endl;
        cout << "Ваш ответ-> ";
        cin >> mesto;
        if (mesto == 1 || mesto == 2)
        {

            if (mesto == 1)
                if (x != 5)
                {
                    x++;
                    cout << "\nВаше посадочное место ->  " << x << "\n";
                    cout << "Приятного полета!" << endl;

                    answ_x == (5 - x);

                    if (answ_x == 1)
                    {
                        cout << "Остался 1 билет" << endl;
                        goto link;
                    }
                    if ((answ_x == 2) || (answ_x == 3) || (answ_x == 4))
                    {
                        cout << "Осталось "<< answ_x << " билета" << endl;
                        goto link;
                    }
                    if (answ_x == 5)
                    {
                        cout << "Осталось " << answ_x << " билетов" << endl;
                        goto link;
                    }
                    link:
                    ++b[x];
                    pass++;
                }
                else
                {
                    cout << "Извините, мест больше нет\n";
                    cout << "В отделе для курящих еще -> " << 10 - y << " мест\n";
                }
            if (mesto == 2)
                if (y != 10)
                {
                    y++;
                    cout << "\nВаше посадочное место ->  " << y << "\n";
                    cout << "Приятного полета!" << endl;
                    ++b[y];
                    pass++;
                }
                else
                {
                    cout << "Извините, мест больше нет\n";
                    cout << "В отделе для некурящих еще -> " << 5 - x << " мест\n";
                }
            _getch();

            
            system("cls");
        }
        else
        {
            cout << "\nОшибка! Пункт меню отсутствует!" << endl;
            _getch();
            system("cls");
        }
        
        mesto = 0;
        if (y == 10 && x == 5)
            count = false;
    }
    pass--;
    cout << "Все места заняты.\nНа борту "<<pass<<" пассажиров." << endl;


    _getch();
    return 0;
}