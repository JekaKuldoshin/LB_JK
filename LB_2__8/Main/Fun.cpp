#include "fun.h"

struct mon* create(void)
{
	system("cls");
	mon* temp, * tail; char c;
	struct mon* head = tail = temp = (mon*)malloc(sizeof(mon));
	do
	{
		temp = (mon*)malloc(sizeof(mon));
		printf("������� ������:\n");
		printf("������� ��� -> ");
		scanf_s("%d", &temp->sc);
		printf("������� ��� �������� ������������ -> ");
		scanf_s("%s", temp->name, 10);
		setbuf(stdin, NULL);             //��������� ���������-0 �� �����
		printf("������� ������� ������ -> ");
		scanf_s("%d", &temp->size);
		printf("������� ������� ������� -> ");
		scanf_s("%d", &temp->mhz);

		tail->next = temp;

		tail = temp;
		printf("\n���������� ����? +/-");
		c = _getch();
		system("cls");
	} while (c != '-');
	temp->next = NULL;
			
	system("cls");
	printf("�����!!\n�������� ������ ���� ���������!\n\n��� �������� � ���� ������� Enter...");
	_getch();
	return head;
}

void print(mon* head)
{
	system("cls");
	mon* temp;
	temp = head;
	int i = 1;
	while (temp != NULL)
	{
		printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;
		i++;
	}
	
}

int search(mon* head) {
	system("cls");
	int choice;
	mon* temp = head;
	char name1[10];
	int sc1, size1,mhz1;
	int i = 1;
	bool q = true;
	while (true)
	{
		system("cls");
		printf("|                     ����                             |\n");
		printf("|------------------------------------------------------|\n");
		printf("| 1 - ����� �� ����    | 3 - ����� �� �������� ������  |\n");
		printf("| 2 - ����� �� �����   | 4 - ����� �� ������� �������  |\n");
		printf("|------------------------------------------------------|\n");
		printf("|             5 - ��������� � ������� ����             |\n");
		printf("|------------------------------------------------------|\n");
		printf("��� ����� -> ");
		scanf_s("%d", &choice);
		system("cls");
		switch (choice) {

		case 1:
			unsigned int sc1;
			temp = head;

			printf("������� ��� -> ");
			scanf("%d", &sc1);
			setbuf(stdin, NULL);


			while (temp != NULL) {
				if (temp->sc == sc1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\n��� �������� � ���� ������� Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("� ������ ������� ���� ���!!!"); 
				printf("\n\n��� �������� � ���� ������� Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;


		case 2:

			char name1[10];
			temp = head;

			printf("������� ��� �������� ������������ -> ");
			scanf("%s", name1, 10);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (strcmp(temp->name, name1) == 0) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\n��� �������� � ���� ������� Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("� ������ ������� ����� ���!!!");
				printf("\n\n��� �������� � ���� ������� Enter...");
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

			printf("������� ������� ������ -> ");
			scanf("%d", &size1);
			setbuf(stdin, NULL);


			while (temp != NULL) {
				if (temp->size == size1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n",i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\n��� �������� � ���� ������� Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("� ������ ������� ����� ���!!!");
				printf("\n\n��� �������� � ���� ������� Enter...");
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

			printf("������� ������� ������� -> ");
			scanf("%d", &mhz1);
			setbuf(stdin, NULL);

			while (temp != NULL) {
				if (temp->mhz == mhz1) {
					q = false;
					system("cls");
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\n��� �������� � ���� ������� Enter...");
					_getch();
				}
				i++;
				temp = temp->next;
			}
			if (q)
			{
				printf("� ������ ������� ����� ���!!!");
				printf("\n\n��� �������� � ���� ������� Enter...");
				_getch();
			}
			q = true;
			temp = NULL;
			i = 1;
			free(temp);
			break;

		case 5:
			printf("\n  �����\n\n");
			return 0;
			break;


		default:
			system("cls");
			printf("������! ����� ���� �����������!\n������� �� ����� ������� ����� ����������...");
			_getch();
			break;
		}
	}
}

struct mon* ADD(int el, mon tt, mon* head) {
	mon* temp = (mon*)malloc(sizeof(mon));

	if (el == 1) {
		temp->next = head;
		head = temp;

	}
	else {
		mon* temp_pos = head;

		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		temp->next = temp_pos->next;
		temp_pos->next = temp;

	}
	temp->sc = tt.sc;
	strcpy(temp->name, tt.name);
	temp->size = tt.size;
	temp->mhz = tt.mhz;
	return head;
}

struct mon* del(int el, mon* head) {
	mon* temp_pos = head;

	if (el == 1) {
		head = head->next;
		free(temp_pos);
	}
	else {
		for (int i = 0; i < el - 2; i++)
			temp_pos = temp_pos->next;

		mon* temp = temp_pos->next;

		if (temp->next == NULL) temp_pos->next = NULL;
		else temp_pos->next = temp->next;

		free(temp);
	}
	return head;
}

struct mon* sort(mon* head) {
	struct mon* temp = head;

	int lines = 0;
	while (temp != NULL)
	{
		temp = temp->next;
		lines++;
	}
	mon* ptr, * trash, * tmp;
	tmp = (struct mon*)malloc(sizeof(struct mon));

	for (int n = 0; n < lines; n++) {

		ptr = head;
		while (ptr->next != NULL) {

			temp = ptr->next;
			if (strcmp(ptr->name, temp->name) > 0) {

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
	return(head);
}

void addfile(mon* head) {

	system("cls");
	mon* temp;
	temp = head;
	int i = 1;

	FILE* f;
	fopen_s(&f, "Result.txt", "w");
	if (!f) {
			system("cls");
			puts("������!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
			_getch();
			goto link_exit;
	}
	while (temp != NULL)
	{
		fprintf_s(f, "%-4d  %-10s  %-4d  %-4d\n", temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;
		i++;
	}
	system("cls");
	printf("�����!!\n������ ������ � ���� ���� ���������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
link_exit:;
}

struct mon* CreateFromFile() {


	struct mon* head = (struct mon*)malloc(sizeof(struct mon));
	struct mon* tail = head, * temp = head;
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "Result.txt", "r");
	if (file == NULL) {
		system("cls");
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
		goto link_exit;
	}

	char text;
	while (true) {
		text = fgetc(file);
		if (text == '\n')size++;
		else if (text == EOF) break;
	}

	fseek(file, 0, SEEK_SET);
	while (i != size) {
		fscanf_s(file, "%d", &temp->sc);
		fscanf_s(file, "%s", temp->name, 10);
		fscanf_s(file, "%d", &temp->size);
		fscanf_s(file, "%d", &temp->mhz);

		i++;
		tail->next = temp;
		tail = temp;
		temp = (mon*)malloc(sizeof(mon));
	}
	tail->next = NULL;

	fclose(file);
	system("cls");
	printf("�����!!\n�������� ������ ������ �� ����� ���� ���������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
	return head;
link_exit:;
}