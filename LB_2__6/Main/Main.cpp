#include "Fun.h"

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    int choice;         //выбор меню
    char str[N];              
    int where, what;     //с какого элемента, какое количество
    while (true)
    {
        
        system("cls");

        printf("Ввести строку - 1  |\n");
        printf("Выход - 2          |\n");
        printf("-------------------|\n");
        printf("Введите свой выбор -> ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
                system("cls");
                printf("Введите строку-> ");
                for (int i = 0; i < N; i++)     //инициализуирую 
                {
                    *(str + i) = '\0';
                }
                scanf("%s", str);

                    printf("С какого символа вы хотите начать удаление-> ");
                    scanf("%d", &where);
                    printf("Какое количество букв вы хотите удалить-> ");
                    scanf("%d", &what);



                    for (i = 0; *(str + i); i++);                 //Перебор строки
                    {
                        if ((where < i) && (what < i))        //Проверка на кол-в. элементов
                        {
                            printf("Результат -> ");
                            printf("%s\n\n", delete_str(str, where, what));   //Заходим в функцию
                            system("pause");
                            system("cls");

                        }
                        else
                        {
                            system("cls");
                            printf("Ошибка!\n");
                            printf("Вы выбрали слишком много элементов. \n");

                            printf("Пожалуйста, выберите в следующий раз меньше!\n\n");
                            system("pause");
                            /*delete[] str;*/
                        }
                    }
                
                
            
        break;
        case 2:
            return 0;
                break;
            
        default:
            
                printf("\nОшибка! Пункт меню отсутствует!\n");
                _getch();
                
                break;
        }
    }
    printf("\n");
    printf("\n");

    for (i = 0; i < N; i++)
    {
        *(str + i) = '\0';
    }
    delete[] str;       //Очистка 
    return 0;
}