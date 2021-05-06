#include "fun.h"

int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int choice, el;
	struct mon* head = NULL;
	mon tt;

	while (true)
	{
		system("cls");
		printf( "|                                                Меню                                       |\n");
		printf("|-------------------------------------------------------------------------------------------|\n");
		printf("| 1 - Создание списка                                | 5 - Удаление любого элемента         |\n");
		printf("| 2 - Печать списка                                  | 6 - Сортировка                       |\n");
		printf("| 3 – Поиск по критериям                             | 7 - Запись списка в файл             |\n");
		printf("| 4 - Добавление элемента (в любое заданное место)   | 8 - Создание нового списка из файла  |\n");
		printf("|-------------------------------------------------------------------------------------------|\n");
		printf("|                                       9 - Выход из программы                              |\n");
		printf("|-------------------------------------------------------------------------------------------|\n");
		printf("Ваш выбор -> ");
		scanf_s("%d", &choice);

			switch (choice) {
			case(1): head = new_spis();
				break;

			case(2):
				if (head == NULL) {
					system("cls");
					printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
					_getch();
					break;
				}
				print_spis(head);
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
				else
					search_spis(head);

				break;

			case(4):
				if (head == NULL) {
					system("cls");
					printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
					_getch();
					break;
				}
				else
				{
					system("cls");
					print_spis(head);
					cout << "\n\nВведите номер места для нового элемента -> ";
					scanf_s("%d", &el);
					system("cls");
					printf("Введите данные:\n");
					printf("Введите год -> ");
					scanf_s("%d", &tt.sc);
					printf("Введите имя научного руководителя -> ");
					scanf_s("%s", tt.name, 10);
					setbuf(stdin, NULL);
					printf("Введите диаметр антены -> ");
					scanf_s("%d", &tt.size);
					printf("Введите рабочую частоту -> ");
					scanf_s("%d", &tt.mhz);

					head = add_spis(el, tt, head);
					system("cls");
					printf("Успех!!\nДобавление элемента в список было выполнено!\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				break;

			case(5):
				if (head == NULL) {
					system("cls");
					printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
					_getch();
					break;
				}
				else {
					system("cls");
					print_spis(head);
					cout << "\n\nВведите номер удаляемого элемента -> ";
					scanf_s("%d", &el);
					head = del_spis(el, head);
					system("cls");
					printf("Успех!!\nУдаление элемента было выполнено!\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}

				break;

			case(6):
				if (head == NULL) {
					system("cls");
					printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
					_getch();
					break;
				}
				else
					head = sort_spis(head, tt);
				break;

			case(7):
				if (head == NULL) {
					system("cls");
					printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
					_getch();
					break;
				}
				else
					addfile_in_spis(head);
				break;

			case(8): head = create_from_file();
				break;

			case(9):
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