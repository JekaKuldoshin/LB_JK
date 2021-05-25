#include "fun.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int point = 0, count = 0, size = 0, poz;
	Tlist* head = NULL;       //указатель на начало списка
	Tlist* next = NULL;
	Tlist* prev = NULL;
	Tlist* tail = NULL;      //указатель на конец списка

	while (true)
	{

		system("cls");
		printf("|                                          Меню                                          |\n");
		printf("|----------------------------------------------------------------------------------------|\n");
		printf("| 1 - Создание списка                | 6 - Добавление элемента (в любое заданное место)  |\n");
		printf("| 2 - Печать с начала                | 7 - Удаление любого элемента                      |\n");
		printf("| 3 - Печать с конца                 | 8 - Сортировка                                    |\n");
		printf("| 4 - Поиск по критерию с начала     | 9 - Запись списка в файл                          |\n");
		printf("| 5 - Поиск по критерию с конца      | 10 - Создание нового списка из файла              |\n");
		printf("|----------------------------------------------------------------------------------------|\n");
		printf("|                                 11 - Выход из программы                                |\n");
		printf("|----------------------------------------------------------------------------------------|\n");
		printf("Ваш выбор -> ");
		scanf_s("%d", &point);

		switch (point) {
		case(1): 
			listCreation(head, tail, count, point, size);
			break;

		case(2):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			listPrintFromHead(head);
			printf("\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;

		case(3):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			listPrintFromTail(tail);
			printf("\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;

		case(4):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			else
				searchByParamFromHead(head, count);
			break;

		case(5):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			else
				searchByParamFromTail(tail, count);
			break;

		case(6):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			else
			{
				system("cls");
				listPrintFromHead(head);
				printf("\n\nВведите номер строки -> ");
				scanf_s("%d", &poz);
				addToList(head, count, poz);
				system("cls");
				printf("Успех!!\nДобавление элемента в список было выполнено!\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			break;
	

		case(7):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
			break;
		}
			   else {
				system("cls");
				listPrintFromHead(head);
				printf("\n\nВведите номер удаляемого элемента -> ");
				scanf_s("%d", &poz);
				deleteFromList(head, count, poz);
		}
			   break;

		case(8): 
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
			break;
		}
			   else
				listSorting(head, count);
			    createFile(head, count);
				createListFromFile(head, tail);
			break;

		case(9):
			if (head == NULL) {
				system("cls");
				printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
				_getch();
				break;
			}
			else
				createFile(head, count);
			system("cls");
			printf("Успех!!\nЗапись списка в файл было выполнено!\n\nДля перехода в меню нажмите любую клавишу...");
			_getch();
			break;

		case(10):
			createListFromFile(head, tail);
			system("cls");
			printf("Успех!!\nСоздание нового списка из файла было выполнено!\n\nДля перехода в меню нажмите любую клавишу...");
			_getch();
			break;

		case(11):
			system("cls");
			printf("Thanks for your attention!!\n");
			return 0;

		default:
			system("cls");
			printf("Ошибка! Пункт меню отсутствует!\n\nНажмите на Enter чтобы продолжить...");
			_getch();
			break;
		}
	}

	free(head);
	return 0;
}

