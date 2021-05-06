#include "fun.h"

struct mon* new_spis(void)          
{
	system("cls");
	mon* temp, * tail; //новый элемент, конец списка  
	char c;            //Проверка символа для меню
	int i = 0;                      //счетчик для исправной работы заполнения списка
	struct mon* head = tail = temp = (mon*)malloc(sizeof(mon));     //Выделение памяти под данные списка
	do    //tail = temp указатель конца списка tail переставить на новый элемент temp
	{     //head указатель начала
		if (i == 0)
		{
			printf("Введите данные:\n");   //заполнение данных
			printf("Введите год -> ");
			scanf_s("%d", &temp->sc);
			printf("Введите имя научного руководителя -> ");
			scanf_s("%s", temp->name, 10);
			setbuf(stdin, NULL);             //отключаем буферизац-0 ию ввода
			printf("Введите диаметр антены -> ");
			scanf_s("%d", &temp->size);
			printf("Введите рабочую частоту -> ");
			scanf_s("%d", &temp->mhz);

			tail->next = temp; //в случае уже существующих данных, программа укажет на новое место

			tail = temp;    //переход на новый елемент
			printf("\nПродолжить ввод? +/-");    //остановка программы для выбора действия
			c = _getch();
			system("cls");
		}
		else
		{
			temp = (mon*)malloc(sizeof(mon));
			printf("Введите данные:\n");   //заполнение данных
			printf("Введите год -> ");
			scanf_s("%d", &temp->sc);
			printf("Введите имя научного руководителя -> ");
			scanf_s("%s", temp->name, 10);
			setbuf(stdin, NULL);             //отключаем буферизац-0 ию ввода
			printf("Введите диаметр антены -> ");
			scanf_s("%d", &temp->size);
			printf("Введите рабочую частоту -> ");
			scanf_s("%d", &temp->mhz);

			tail->next = temp; //в случае уже существующих данных, программа укажет на новое место

			tail = temp;    //переход на новый елемент
			printf("\nПродолжить ввод? +/-");    //остановка программы для выбора действия
			c = _getch();
			system("cls");
		}
		i++;              //счетчик для исправной работы заполнения списка
	} while (c != '-');
	temp->next = NULL;
			
	system("cls");
	printf("Успех!!\nСоздание списка было выполнено!\n\nДля перехода в меню нажмите Enter...");
	_getch();
	return head;
}

void print_spis(mon* head)        //Функ-я вывода всего списка
{
	system("cls");
	mon* temp;      //Объявление элемента списка *temp 
	temp = head;   //и поставить его на начало списка
	int i = 1;           //Счетчик строчек списка
	while (temp != NULL)  //Выводить пока не станет пуст
	{
		printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;   //переход на новый елемент
		i++;
	}
	
}

int search_spis(mon* head) {
	system("cls");
	int choice;      //Для меню
	mon* temp = head; //Для нахождения нужной позиции поиска элемента и поставить его на начало списка
	int i = 1;   //Для подсчета строки списка
	bool q = true;
	while (true)
	{
		system("cls");
		printf("|                     Меню                             |\n");
		printf("|------------------------------------------------------|\n");
		printf("| 1 - Поиск по году    | 3 - Поиск по диаметру антены  |\n");
		printf("| 2 - Поиск по имени   | 4 - Поиск по рабочей частоте  |\n");
		printf("|------------------------------------------------------|\n");
		printf("|             5 - Вернуться в главное меню             |\n");
		printf("|------------------------------------------------------|\n");
		printf("Ваш выбор -> ");
		scanf_s("%d", &choice);
		system("cls");
		switch (choice) {

		case 1:
			unsigned int sc1;     //переменная для сравниванием с переменной которая в списке
			temp = head;         //сделали temp началом списка

			printf("Введите год -> "); 
			scanf("%d", &sc1);
			


			while (temp != NULL) {  //цикл работает до тех пор пока не будет пустого значения
				if (temp->sc == sc1) { //Сравнивание данных
					q = false; 
					system("cls");   //Вывод
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;  //Переход к следующему елементу
			}
			if (q)  //Проверка элементов
			{
				printf("Ошибка! В списке данного года нет!!!"); 
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			q = true; //Возвращаем True
			temp = NULL;
			i = 1;        //Возвращаем cчетчик на 1 
			free(temp);  //Очистка 
			break;


		case 2:

			char name1[10]; //переменная для сравниванием с переменной которая в списке
			temp = head;         //сделали temp началом списка

			printf("Введите имя научного руководителя -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("Ошибка! В списке данного имени нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 3:

			unsigned int size1;
			temp = head;

			printf("Введите диаметр антены -> ");
			scanf("%d", &size1);
			


			while (temp != NULL) {
				if (temp->size == size1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n",i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("Ошибка! В списке данного диаметра антены нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}

			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 4:

			unsigned int mhz1;
			temp = head;

			printf("Введите рабочую частоту -> ");
			scanf("%d", &mhz1);
			

			while (temp != NULL) {
				if (temp->mhz == mhz1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("Ошибка! В списке данной рабочей частоты нет!!!");
				printf("\n\nДля перехода в меню нажмите Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			return 0;
			break;


		default:
			system("cls");
			printf("Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...");
			_getch();
			break;
		}
	}
}

struct mon* add_spis(int el, mon tt, mon* head) {
	mon* temp = (mon*)malloc(sizeof(mon));   //Выделение памяти под данные списка

	if (el == 1) {      //Если el=1, то указатель поставить на начало списка
		temp->next = head;
		head = temp;

	}
	else {
		mon* temp_pos = head;    //Для нахождения было поставленно на начало

		for (int i = 0; i < el - 2; i++) // el - 2, т.к. отсчет с 0
		{
			temp_pos = temp_pos->next;// сдвинули на нужное место
		}
		temp->next = temp_pos->next;   //придерживался варианта
		temp_pos->next = temp;        // как в презентацие

	}
	temp->sc = tt.sc;               
	strcpy(temp->name, tt.name);
	temp->size = tt.size;
	temp->mhz = tt.mhz;
	return head;
}

struct mon* del_spis(int el, mon* head) {
	mon* temp_pos = head;   //Для нахождения было поставленно на начало

	if (el == 1) {        //Если el=1, то указатель поставить на начало списка
		head = head->next;
		free(temp_pos);
	}
	else {
		for (int i = 0; i < el - 2; i++)
		{
			temp_pos = temp_pos->next;// сдвинули на нужное место
		}
		mon* temp = temp_pos->next;   //указатель на удаляемый элемент

		if (temp->next == NULL)      // ПОСЛЕДНИЙ
		{
			temp_pos->next = NULL; //NULL  в предпоследний элемент
		}
		else
		{ 
			temp_pos->next = temp->next;    // убрать связь
		}     // удаляемого элемента
		free(temp); //удалить элемент
	}
	return head;
}

struct mon* sort_spis(mon* head, mon tt) {
	int choice;      //Для меню
	int lines = 0;       //счетчик для посчета количества строчек
	mon* ptr, * trash, * tmp;  //Переменные для сортировки
	while (true)
	{
		system("cls");
		printf("|                     Меню                                       |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("| 1 - Сортировка по году    | 3 - Сортировка по диаметру антены  |\n");
		printf("| 2 - Сортировка по имени   | 4 - Сортировка по рабочей частоте  |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("|             5 - Вернуться в главное меню                       |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("Ваш выбор -> ");
		scanf_s("%d", &choice);
		system("cls");
		struct mon* temp = head;  //Для нахождения нужной позиции поиска элемента и поставить его на начало списка
		while (temp != NULL)      //Цикл для посчета строк
		{
			temp = temp->next; //переставить указатель temp на следующий за ним элемент
			lines++;
		}

		switch (choice) {

		case (1):
			
			
			tmp = (struct mon*)malloc(sizeof(struct mon));  //Выделение памяти под данные списка

			for (int n = 0; n < lines; n++) {  //Цикл под кол-ва строк

				ptr = head;  //ставили на начало списка
				while (ptr->next != NULL) {        //переходить к следующему элементу пока не закончаться

					temp = ptr->next;  //temp = переход к следующему элементу
					if (ptr->sc >= temp->sc) {   //сравнивание

						trash = temp->next;  //trash = переход к следующему элементу
						*tmp = *ptr;       //обмен
						*ptr = *temp;      //обмен
						free(temp);        //очистка temp
						ptr->next = (struct mon*)malloc(sizeof(struct mon));
						*ptr->next = *tmp;   //ptr переходит к следующему элементу = *tmp 
						ptr->next->next = trash; // убраем связь
					}

					ptr = ptr->next;
				}

			}
			free(tmp);       //очистка tmp
			system("cls");
			printf("Успех!!\nСортировка списка по году было выполнено!\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;


		case (2):
			tmp = (struct mon*)malloc(sizeof(struct mon));

			for (int n = 0; n < lines; n++) {

				ptr = head;
				while (ptr->next != NULL) {

					temp = ptr->next;
					if (strcmp(ptr->name, temp->name) > 0) { //Функция побайтно сравнивает 
						            //коды символов двух строк, на которые указывают аргументы функции.
						trash = temp->next;
						*tmp = *ptr;
						*ptr = *temp;
						free(temp);
						ptr->next = (struct mon*)malloc(sizeof(struct mon));
						*ptr->next = *tmp;
						ptr->next->next = trash;
					}

					ptr = ptr->next;
				}
			}
			free(tmp);
			system("cls");
			printf("Успех!!\nСортировка списка по имени было выполнено!\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;

		case (3):
			tmp = (struct mon*)malloc(sizeof(struct mon));

			for (int n = 0; n < lines; n++) {

				ptr = head;
				while (ptr->next != NULL) {

					temp = ptr->next;
					if (ptr->size >= temp->size) {

						trash = temp->next;
						*tmp = *ptr;
						*ptr = *temp;
						free(temp);
						ptr->next = (struct mon*)malloc(sizeof(struct mon));
						*ptr->next = *tmp;
						ptr->next->next = trash;
					}

					ptr = ptr->next;
				}
			}
			free(tmp);
			system("cls");
			printf("Успех!!\nСортировка списка по диаметру антены было выполнено!\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;
		case (4):
			tmp = (struct mon*)malloc(sizeof(struct mon));

			for (int n = 0; n < lines; n++) {

				ptr = head;
				while (ptr->next != NULL) {

					temp = ptr->next;
					if (ptr->mhz >= temp->mhz) {

						trash = temp->next;
						*tmp = *ptr;
						*ptr = *temp;
						free(temp);
						ptr->next = (struct mon*)malloc(sizeof(struct mon));
						*ptr->next = *tmp;
						ptr->next->next = trash;
					}

					ptr = ptr->next;
				}

			}
			free(tmp);
			system("cls");
			printf("Успех!!\nСортировка списка по рабочей частоте было выполнено!\n\nДля перехода в меню нажмите Enter...");
			_getch();
			break;
		case (5):
			goto exit;
			break;
			

		default:
			system("cls");
			printf("Ошибка! Пункт меню отсутствует!\nНажмите на любую клавишу чтобы продолжить...");
			_getch();
			break;

		}
	}
	
exit:
	return(head);
}

void addfile_in_spis(mon* head) {  //Функ-я добавления записи в файл 

	system("cls");
	mon* temp;       //Объявление элемента списка *temp 
	temp = head;    //Поставили на начало
	int i = 1;     //Счетчик строчек списка

	FILE* file;      
	fopen_s(&file, "Result.txt", "w");    //Открыли для записи
	if (file == NULL) {                  //проверка открытия
		system("cls");
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");   //Проверка на наличее файла
		_getch();
			goto link_exit;
	}
	while (temp != NULL)     //цикл будет работать пока не дойдет конца temp
	{
		fprintf_s(file, "%-4d  %-10s  %-4d  %-4d\n", temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;  //переход к следующему
		i++;               //Счетчик строчек списка
	}
	system("cls");
	printf("Успех!!\nЗапись списка в файл было выполнено!\n\nДля перехода в меню нажмите любую клавишу...");
	_getch();
link_exit:;
}

struct mon* create_from_file() {


	struct mon* head = (struct mon*)malloc(sizeof(struct mon)); //Выделение памяти head под данные списка
	struct mon* tail = head, * temp = head;   //Выделение памяти tail под данные списка b и ставим на начало списка
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "Result.txt", "r");  //Читаем файл с записями
	if (file == NULL) {       //Проверка на наличее файла
		system("cls");
		puts("Ошибка открытия файла!!!\nНажмите на любую клавишу чтобы вернуться в меню...");   //Проверка на наличее файла
		_getch();
		goto link_exit;
	}
	 
	char text;             //Переменная для ранее заполненых записей
	while (true) {
		text = fgetc(file);        //ранее заполненых записей
		if (text == '\n')size++;           //Size++ находим размер
		else if (text == EOF) break;       //пока с == ЕОF - конец файла
	}

	fseek(file, 0, SEEK_SET);       //SEEK_SET - начало файла
	while (i != size) {
		fscanf_s(file, "%d", &temp->sc);
		fscanf_s(file, "%s", temp->name, 10);
		fscanf_s(file, "%d", &temp->size);
		fscanf_s(file, "%d", &temp->mhz);

		i++;
		tail->next = temp;   //переставить указатель tail 
		tail = temp;        //передали значение 
		temp = (mon*)malloc(sizeof(mon));
	}
	tail->next = NULL; // предпоследний элемент

	fclose(file);
	system("cls");
	printf("Успех!!\nСоздание нового списка из файла было выполнено!\n\nДля перехода в меню нажмите любую клавишу...");
	_getch();
	return head;
link_exit:;
}