#include "Fun.h"

int main(void) {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int i = 0;
    char str[N];
    char result;
    int where, what;
    system("cls");
    printf("������� �����-> ");
    gets_s(str);

    printf("� ������ ������� �� ������ ������ ��������-> ");
    scanf_s("%d", &where);

    printf("����� ���������� ���� �� ������ �������-> ");
    scanf_s("%d", &what);

    for ( i = 0; str[i]; i++);
    {
        if ((where < i) && (what < i))
        {
            printf("��������� -> ");
            delete_str(str, where, what);
        }
        else
        {
            system("cls");
            printf("������!\n");
            printf("�� ������� ������� ����� ���������. \n");

            printf("����������, �������� � ��������� ��� ������!\n\n");
            system("pause");
            /*delete[] str;*/
        }
    }
    printf("\n");
    printf("\n");
    
    /*delete[] str;*/
    return 0;
}