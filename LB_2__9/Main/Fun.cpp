#include "fun.h"

void listCreation(Tlist*& head, Tlist*& tail, int& count, int point, int size)
{
	system("cls");
	Tlist* dd, * posl;
	posl = NULL;        //
	char c;             //Переменная для работы с меню
	int i = 0;
	dd = (Tlist*)malloc(sizeof(Tlist));  //Выделяем память
	do {

		if (i == 0)         //Записываем значение в переменную data
		{
			printf("Введите данные:\n");   //заполнение данных
			printf("Введите год -> ");
			scanf_s("%d", &dd->data.sc);
			printf("Введите имя научного руководителя -> ");
			scanf_s("%s", dd->data.name, 10);
			setbuf(stdin, NULL);             //отключаем буферизац-0 ию ввода
			printf("Введите диаметр антены -> ");
			scanf_s("%d", &dd->data.size);
			printf("Введите рабочую частоту -> ");
			scanf_s("%d", &dd->data.mhz);

			dd->prev = posl;
			if (posl != NULL)
				posl->next = dd;
			else
				head = dd;
			posl = dd;
			printf("\nПродолжить ввод? +/-");    //остановка программы для выбора действия
			c = _getch();
			system("cls");
		}
		else
		{
			dd = (Tlist*)malloc(sizeof(Tlist));
			printf("Введите данные:\n");   //заполнение данных
			printf("Введите год -> ");
			scanf_s("%d", &dd->data.sc);
			printf("Введите имя научного руководителя -> ");
			scanf_s("%s", dd->data.name, 10);
			setbuf(stdin, NULL);             //отключаем буферизац-0 ию ввода
			printf("Введите диаметр антены -> ");
			scanf_s("%d", &dd->data.size);
			printf("Введите рабочую частоту -> ");
			scanf_s("%d", &dd->data.mhz);

			dd->prev = posl;
			if (posl != NULL)
				posl->next = dd;
			else
				head = dd;
			posl = dd;
			printf("\nПродолжить ввод? +/-");    //остановка программы для выбора действия
			c = _getch();
			system("cls");
		}
		i++;              //счетчик для исправной работы заполнения списка
	} while (c != '-');
	tail = dd;
	tail->next = NULL;

	system("cls");
	printf("Успех!!\nСоздание списка было выполнено!\n\nДля перехода в меню нажмите Enter...");
	_getch();


	system("cls");
	printf("Успех!!\nСоздание списка было выполнено!\n\nДля перехода в меню нажмите Enter...");
	_getch();
}

void listPrintFromHead(Tlist* head)
{
	int i = 1;          //Счетчик для кол-ва строк списка
	system("cls");
	if (head != NULL) {        //если список не пуст
		Tlist* tmp;     //*temp ставим на начало списка
		tmp = head;
		while (tmp != NULL) {   //Цикл будет работать пока не дойдет до конца
			printf("%d-  %-4d  %-10s  %-4d  %-4d\n",i, tmp->data.sc, tmp->data.name, tmp->data.size, tmp->data.mhz);
			tmp = tmp->next;   //переход к следующему элементу
			i++;              //Счетчик
		}
		printf("\n");
	}
	else
	{
		printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
		_getch();
	}
}

void listPrintFromTail(Tlist* tail) {
	int i = 1;                    //Счетчик для кол-ва строк списка
	system("cls");
	if (tail != NULL) {          //если список не пуст
		Tlist* tmp;               //*temp ставим на конец списка
		tmp = tail;
		while (tmp != NULL) {    //Цикл будет работать пока не дойдет до конца
			printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, tmp->data.sc, tmp->data.name, tmp->data.size, tmp->data.mhz);
			tmp = tmp->prev;    //переход к предыдущему элементу
			i++;                //Счетчик
		}
		printf("\n");
	}
	else
	{
		printf("Ошибка! Список отсутствует!!!\n\nНажмите на Enter чтобы продолжить...");
		_getch();
	}
}

int searchByParamFromHead(Tlist* head, int count) {
	system("cls");
	int choice;           //Переменная для меню
	Tlist* temp = head;   //Поиск будет совершать с верха
	int i = 1;           //Счетчик строк
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

		case (1):
			unsigned int sc1;     //переменная для сравниванием с переменной которая в списке
			temp = head;         //сделали temp началом списка

			printf("Введите год -> ");
			scanf("%d", &sc1);

			while (temp != NULL) {  //цикл работает до тех пор пока не будет пустого значения
				if (temp->data.sc == sc1) { //Сравнивание данных
					q = false;
					system("cls");   //Вывод
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
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

		case (2):

			char name1[10]; //переменная для сравниванием с переменной которая в списке
			temp = head;         //сделали temp началом списка

			printf("Введите имя научного руководителя -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->data.name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
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
				if (temp->data.size == size1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
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
				if (temp->data.mhz == mhz1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
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

int searchByParamFromTail(Tlist* tail, int count) {
	system("cls");
	int choice;           //Переменная для меню
	Tlist* temp = tail;   //Поиск будет совершать с низа
	int i = 1;           //Счетчик
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
			temp = tail;         //сделали temp концом списка

			printf("Введите год -> ");
			scanf("%d", &sc1);

			while (temp != NULL) {  //цикл работает до тех пор пока не будет пустого значения
				if (temp->data.sc == sc1) { //Сравнивание данных
					q = false;
					system("cls");   //Вывод
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;  //переход к предыдущему элементу
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
			temp = tail;         //сделали temp концом списка

			printf("Введите имя научного руководителя -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->data.name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;  //переход к предыдущему элементу
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
			temp = tail;

			printf("Введите диаметр антены -> ");
			scanf("%d", &size1);



			while (temp != NULL) {
				if (temp->data.size == size1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;
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
			temp = tail;

			printf("Введите рабочую частоту -> ");
			scanf("%d", &mhz1);


			while (temp != NULL) {
				if (temp->data.mhz == mhz1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
					printf("\n\nДля перехода в меню нажмите Enter...");
					_getch();
				}
				i++;
				temp = temp->prev;
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

void addToList(Tlist*& head, int& count, int poz) {
	system("cls");

	Tlist* tmp = new Tlist;  //вставляемый элемент
	if (poz == 1) {           //если элемент ПЕРВЫЙ
		tmp->prev = NULL;    // элемент первый
		tmp->next = head;  
		head->prev = tmp;
		head = tmp;        //сделали tmp началом списка
	}
	else {                       //если элемент НЕ ПЕРВЫЙ
		Tlist* tmpPoz = head;      // tempPoz поставили на начало
		for (int i = 0; i < poz - 2; i++)
			tmpPoz = tmpPoz->next;    // сдвинули на нужное место

		tmp->next = tmpPoz->next;    // убрать связи добавляемого элемента
		if (tmp->next != NULL) {  // если элемент ПОСЛЕДНИЙ
			tmp->next->prev = tmp;
		}
		tmp->prev = tmpPoz;
		tmpPoz->next = tmp;
	}

	printf("\nВведите данные: \n");
	printf("Введите год -> "); scanf_s("%d", &tmp->data.sc); 
	printf("Введите имя научного руководителя -> "); scanf_s("%s", tmp->data.name, 10);	setbuf(stdin, NULL);
	printf("Введите диаметр антены -> "); scanf_s("%d", &tmp->data.size);
	printf("Введите рабочую частоту -> "); scanf_s("%d", &tmp->data.mhz);
	count++;

}

void deleteFromList(Tlist*& head, int& count, int poz) {
	if (head != NULL) {
		Tlist* tmp = head, * tmpPoz = NULL;  //указатель позиции на начало

		if (poz == 1) {                //если элемент ПЕРВЫЙ
			tmpPoz = head->next;     // переставить указатель head 
			tmpPoz->prev = NULL;    // предыдущего нет
			delete head;        // удалить первый элемент
		}
		else {               //если элемент НЕ ПЕРВЫЙ
			for (int i = 0; i < poz - 1; i++) {
				tmpPoz = tmp;
				tmp = tmp->next;     // сдвинули на нужное место
			}

			tmpPoz->next = tmp->next;   // убрать связи удаляемого элемента
			if (tmpPoz->next != NULL)   // ПОСЛЕДНИЙ
				tmpPoz->next->prev = tmpPoz;
			delete tmp;                  //удалить элемент
		}
		count--;
	}

	system("cls");
	printf("Успех!!\nУдаление элемента было выполнено!\n\nДля перехода в меню нажмите Enter...");
	_getch();
}

void listSorting(Tlist* head, int count) {
	int choice;      //Для меню
	int lines = 0;       //счетчик для посчета количества строчек
	Tlist* ptr, * trash, * tmp;  //Переменные для сортировки
	
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
	
	struct Tlist* temp = head;  //Для нахождения нужной позиции поиска элемента и поставить его на начало списка
	while (temp != NULL)      //Цикл для посчета строк
	{
		temp = temp->next; //переставить указатель temp на следующий за ним элемент
		lines++;
	}


	switch (choice) {

	case (1):
		tmp = (struct Tlist*)malloc(sizeof(struct Tlist));  //Выделение памяти под данные списка

		for (int n = 0; n < lines; n++) {  //Цикл под кол-ва строк

			ptr = head;  //ставили на начало списка
			while (ptr->next != NULL) {        //переходить к следующему элементу пока не закончаться

				temp = ptr->next;  //temp = переход к следующему элементу
				if (ptr->data.sc >= temp->data.sc) {   //сравнивание

					trash = temp->next;  //trash = переход к следующему элементу
					*tmp = *ptr;       //обмен
					*ptr = *temp;      //обмен
					free(temp);        //очистка temp
					ptr->next = (struct Tlist*)malloc(sizeof(struct Tlist));
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
		tmp = (struct Tlist*)malloc(sizeof(struct Tlist));

		for (int n = 0; n < lines; n++) {

			ptr = head;
			while (ptr->next != NULL) {

				temp = ptr->next;
				if (strcmp(ptr->data.name, temp->data.name) > 0) { //Функция побайтно сравнивает 
								//коды символов двух строк, на которые указывают аргументы функции.
					trash = temp->next;
					*tmp = *ptr;
					*ptr = *temp;
					free(temp);
					ptr->next = (struct Tlist*)malloc(sizeof(struct Tlist));
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
		tmp = (struct Tlist*)malloc(sizeof(struct Tlist));

		for (int n = 0; n < lines; n++) {

			ptr = head;
			while (ptr->next != NULL) {

				temp = ptr->next;
				if (ptr->data.size >= temp->data.size) {

					trash = temp->next;
					*tmp = *ptr;
					*ptr = *temp;
					free(temp);
					ptr->next = (struct Tlist*)malloc(sizeof(struct Tlist));
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
		tmp = (struct Tlist*)malloc(sizeof(struct Tlist));

		for (int n = 0; n < lines; n++) {

			ptr = head;
			while (ptr->next != NULL) {

				temp = ptr->next;
				if (ptr->data.mhz >= temp->data.mhz) {

					trash = temp->next;
					*tmp = *ptr;
					*ptr = *temp;
					free(temp);
					ptr->next = (struct Tlist*)malloc(sizeof(struct Tlist));
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
exit:;
}

void createFile(Tlist* head, int count) {

	system("cls");
	Tlist* temp;       //Объявление элемента списка *temp 
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
		fprintf_s(file, "%-4d  %-10s  %-4d  %-4d\n", temp->data.sc, temp->data.name, temp->data.size, temp->data.mhz);
		temp = temp->next;  //переход к следующему
		i++;               //Счетчик строчек списка
	}
	fclose(file);
	
link_exit:;
}

void createListFromFile(Tlist*& head, Tlist*& tail) {
	Tlist* dd, * posl;
	posl = NULL;

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
		dd = (Tlist*)malloc(sizeof(Tlist));
		fscanf_s(file, "%d", &dd->data.sc);
		fscanf_s(file, "%s", dd->data.name, 10);
		fscanf_s(file, "%d", &dd->data.size);
		fscanf_s(file, "%d", &dd->data.mhz);

		i++;
		dd->prev = posl;   //переставить указатель posl      //передали значение 


		if (posl != NULL)
			posl->next = dd;
		else
			head = dd;
		posl = dd;
		tail = dd;
	}
	tail->next = NULL; // предпоследний элемент

	fclose(file);
	

link_exit:;
}