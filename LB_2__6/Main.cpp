#include "Fun.h"

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    char str[N];
    char result;
    int where, what;
    system("cls");
    printf("Введите текст-> ");
    gets_s(str);

    printf("С какого символа вы хотите начать удаление-> ");
    scanf_s("%d", &where);

    printf("Какое количество букв вы хотите удалить-> ");
    scanf_s("%d", &what);

    for ( i = 0; str[i]; i++);
    {
        if ((where < i) && (what < i))
        {
            printf("Результат -> ");
            delete_str(str, where, what);
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
    printf("\n");
    printf("\n");
    
    /*delete[] str;*/
    return 0;
}