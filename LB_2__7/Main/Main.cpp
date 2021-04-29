#include "fun.h"
int main(void) {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	srand(time(NULL));

	struct Tabl t {};
	int choice;
	while (true)
	{
	link_menu:
	system("cls");
	cout << "|                                            Меню                                           |" << endl;
	cout << "|-------------------------------------------------------------------------------------------|" << endl;
	cout << "| 1 – Ввод с экрана и запись в файл           | 4 - Добавить запись в конец файла           |" << endl;
	cout << "| 2 – Ввод случайным образом и запись в файл  | 5 - Печать одной записи из файла по номеру  |" << endl;
	cout << "| 3 – Добавить запись в начало файла          | 6 - Печать всех записей из файла            |" << endl;
	cout << "|-------------------------------------------------------------------------------------------|" << endl;
	cout << "|                               7 - Выход из программы                                      |" << endl;
	cout << "|-------------------------------------------------------------------------------------------|" << endl;
	printf("Ваш выбор -> ");
	scanf_s("%d", &choice);

	switch (choice) {
	case(1): input(t);
		break;

	case(2): random(t);
		break;

	case(3):add_before(t);
		goto link_menu;
		break;

	case(4): add_after(t);
		break;

	case(5):
		choice_str(t);
		goto link_menu;
		printf("\n\n\n");
		break;

	case(6):
		print_all_str(t);
		goto link_menu;
		break;

	case(7):
		system("cls");
		printf("Thanks for your attention!!\n");
		return 0;

	default:
		system("cls");
		printf("Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...");
		_getch();
		break;
	}
	}
	return 0;
}
