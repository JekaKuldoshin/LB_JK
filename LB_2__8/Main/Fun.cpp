#include "fun.h"

struct mon* new_spis(void)          
{
	system("cls");
	mon* temp, * tail; //����� �������, ����� ������  
	char c;            //�������� ������� ��� ����
	int i = 0;                      //������� ��� ��������� ������ ���������� ������
	struct mon* head = tail = temp = (mon*)malloc(sizeof(mon));     //��������� ������ ��� ������ ������
	do    //tail = temp ��������� ����� ������ tail ����������� �� ����� ������� temp
	{     //head ��������� ������
		if (i == 0)
		{
			printf("������� ������:\n");   //���������� ������
			printf("������� ��� -> ");
			scanf_s("%d", &temp->sc);
			printf("������� ��� �������� ������������ -> ");
			scanf_s("%s", temp->name, 10);
			setbuf(stdin, NULL);             //��������� ���������-0 �� �����
			printf("������� ������� ������ -> ");
			scanf_s("%d", &temp->size);
			printf("������� ������� ������� -> ");
			scanf_s("%d", &temp->mhz);

			tail->next = temp; //� ������ ��� ������������ ������, ��������� ������ �� ����� �����

			tail = temp;    //������� �� ����� �������
			printf("\n���������� ����? +/-");    //��������� ��������� ��� ������ ��������
			c = _getch();
			system("cls");
		}
		else
		{
			temp = (mon*)malloc(sizeof(mon));
			printf("������� ������:\n");   //���������� ������
			printf("������� ��� -> ");
			scanf_s("%d", &temp->sc);
			printf("������� ��� �������� ������������ -> ");
			scanf_s("%s", temp->name, 10);
			setbuf(stdin, NULL);             //��������� ���������-0 �� �����
			printf("������� ������� ������ -> ");
			scanf_s("%d", &temp->size);
			printf("������� ������� ������� -> ");
			scanf_s("%d", &temp->mhz);

			tail->next = temp; //� ������ ��� ������������ ������, ��������� ������ �� ����� �����

			tail = temp;    //������� �� ����� �������
			printf("\n���������� ����? +/-");    //��������� ��������� ��� ������ ��������
			c = _getch();
			system("cls");
		}
		i++;              //������� ��� ��������� ������ ���������� ������
	} while (c != '-');
	temp->next = NULL;
			
	system("cls");
	printf("�����!!\n�������� ������ ���� ���������!\n\n��� �������� � ���� ������� Enter...");
	_getch();
	return head;
}

void print_spis(mon* head)        //����-� ������ ����� ������
{
	system("cls");
	mon* temp;      //���������� �������� ������ *temp 
	temp = head;   //� ��������� ��� �� ������ ������
	int i = 1;           //������� ������� ������
	while (temp != NULL)  //�������� ���� �� ������ ����
	{
		printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;   //������� �� ����� �������
		i++;
	}
	
}

int search_spis(mon* head) {
	system("cls");
	int choice;      //��� ����
	mon* temp = head; //��� ���������� ������ ������� ������ �������� � ��������� ��� �� ������ ������
	int i = 1;   //��� �������� ������ ������
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
			unsigned int sc1;     //���������� ��� ������������ � ���������� ������� � ������
			temp = head;         //������� temp ������� ������

			printf("������� ��� -> "); 
			scanf("%d", &sc1);
			


			while (temp != NULL) {  //���� �������� �� ��� ��� ���� �� ����� ������� ��������
				if (temp->sc == sc1) { //����������� ������
					q = false; 
					system("cls");   //�����
					printf("%d-  %-4d  %-10s  %-4d  %-4d\n", i, temp->sc, temp->name, temp->size, temp->mhz);
					printf("\n\n��� �������� � ���� ������� Enter...");
					_getch();
				}
				i++;
				temp = temp->next;  //������� � ���������� ��������
			}
			if (q)  //�������� ���������
			{
				printf("������! � ������ ������� ���� ���!!!"); 
				printf("\n\n��� �������� � ���� ������� Enter...");
				_getch();
			}
			q = true; //���������� True
			temp = NULL;
			i = 1;        //���������� c������ �� 1 
			free(temp);  //������� 
			break;


		case 2:

			char name1[10]; //���������� ��� ������������ � ���������� ������� � ������
			temp = head;         //������� temp ������� ������

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
				printf("������! � ������ ������� ����� ���!!!");
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
				printf("������! � ������ ������� �������� ������ ���!!!");
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
				printf("������! � ������ ������ ������� ������� ���!!!");
				printf("\n\n��� �������� � ���� ������� Enter...");
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
			printf("������! ����� ���� �����������!\n������� �� ����� ������� ����� ����������...");
			_getch();
			break;
		}
	}
}

struct mon* add_spis(int el, mon tt, mon* head) {
	mon* temp = (mon*)malloc(sizeof(mon));   //��������� ������ ��� ������ ������

	if (el == 1) {      //���� el=1, �� ��������� ��������� �� ������ ������
		temp->next = head;
		head = temp;

	}
	else {
		mon* temp_pos = head;    //��� ���������� ���� ����������� �� ������

		for (int i = 0; i < el - 2; i++) // el - 2, �.�. ������ � 0
		{
			temp_pos = temp_pos->next;// �������� �� ������ �����
		}
		temp->next = temp_pos->next;   //������������� ��������
		temp_pos->next = temp;        // ��� � �����������

	}
	temp->sc = tt.sc;               
	strcpy(temp->name, tt.name);
	temp->size = tt.size;
	temp->mhz = tt.mhz;
	return head;
}

struct mon* del_spis(int el, mon* head) {
	mon* temp_pos = head;   //��� ���������� ���� ����������� �� ������

	if (el == 1) {        //���� el=1, �� ��������� ��������� �� ������ ������
		head = head->next;
		free(temp_pos);
	}
	else {
		for (int i = 0; i < el - 2; i++)
		{
			temp_pos = temp_pos->next;// �������� �� ������ �����
		}
		mon* temp = temp_pos->next;   //��������� �� ��������� �������

		if (temp->next == NULL)      // ���������
		{
			temp_pos->next = NULL; //NULL  � ������������� �������
		}
		else
		{ 
			temp_pos->next = temp->next;    // ������ �����
		}     // ���������� ��������
		free(temp); //������� �������
	}
	return head;
}

struct mon* sort_spis(mon* head, mon tt) {
	int choice;      //��� ����
	int lines = 0;       //������� ��� ������� ���������� �������
	mon* ptr, * trash, * tmp;  //���������� ��� ����������
	while (true)
	{
		system("cls");
		printf("|                     ����                                       |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("| 1 - ���������� �� ����    | 3 - ���������� �� �������� ������  |\n");
		printf("| 2 - ���������� �� �����   | 4 - ���������� �� ������� �������  |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("|             5 - ��������� � ������� ����                       |\n");
		printf("|----------------------------------------------------------------|\n");
		printf("��� ����� -> ");
		scanf_s("%d", &choice);
		system("cls");
		struct mon* temp = head;  //��� ���������� ������ ������� ������ �������� � ��������� ��� �� ������ ������
		while (temp != NULL)      //���� ��� ������� �����
		{
			temp = temp->next; //����������� ��������� temp �� ��������� �� ��� �������
			lines++;
		}

		switch (choice) {

		case (1):
			
			
			tmp = (struct mon*)malloc(sizeof(struct mon));  //��������� ������ ��� ������ ������

			for (int n = 0; n < lines; n++) {  //���� ��� ���-�� �����

				ptr = head;  //������� �� ������ ������
				while (ptr->next != NULL) {        //���������� � ���������� �������� ���� �� �����������

					temp = ptr->next;  //temp = ������� � ���������� ��������
					if (ptr->sc >= temp->sc) {   //�����������

						trash = temp->next;  //trash = ������� � ���������� ��������
						*tmp = *ptr;       //�����
						*ptr = *temp;      //�����
						free(temp);        //������� temp
						ptr->next = (struct mon*)malloc(sizeof(struct mon));
						*ptr->next = *tmp;   //ptr ��������� � ���������� �������� = *tmp 
						ptr->next->next = trash; // ������ �����
					}

					ptr = ptr->next;
				}

			}
			free(tmp);       //������� tmp
			system("cls");
			printf("�����!!\n���������� ������ �� ���� ���� ���������!\n\n��� �������� � ���� ������� Enter...");
			_getch();
			break;


		case (2):
			tmp = (struct mon*)malloc(sizeof(struct mon));

			for (int n = 0; n < lines; n++) {

				ptr = head;
				while (ptr->next != NULL) {

					temp = ptr->next;
					if (strcmp(ptr->name, temp->name) > 0) { //������� �������� ���������� 
						            //���� �������� ���� �����, �� ������� ��������� ��������� �������.
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
			printf("�����!!\n���������� ������ �� ����� ���� ���������!\n\n��� �������� � ���� ������� Enter...");
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
			printf("�����!!\n���������� ������ �� �������� ������ ���� ���������!\n\n��� �������� � ���� ������� Enter...");
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
			printf("�����!!\n���������� ������ �� ������� ������� ���� ���������!\n\n��� �������� � ���� ������� Enter...");
			_getch();
			break;
		case (5):
			goto exit;
			break;
			

		default:
			system("cls");
			printf("������! ����� ���� �����������!\n������� �� ����� ������� ����� ����������...");
			_getch();
			break;

		}
	}
	
exit:
	return(head);
}

void addfile_in_spis(mon* head) {  //����-� ���������� ������ � ���� 

	system("cls");
	mon* temp;       //���������� �������� ������ *temp 
	temp = head;    //��������� �� ������
	int i = 1;     //������� ������� ������

	FILE* file;      
	fopen_s(&file, "Result.txt", "w");    //������� ��� ������
	if (file == NULL) {                  //�������� ��������
		system("cls");
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
			goto link_exit;
	}
	while (temp != NULL)     //���� ����� �������� ���� �� ������ ����� temp
	{
		fprintf_s(file, "%-4d  %-10s  %-4d  %-4d\n", temp->sc, temp->name, temp->size, temp->mhz);
		temp = temp->next;  //������� � ����������
		i++;               //������� ������� ������
	}
	system("cls");
	printf("�����!!\n������ ������ � ���� ���� ���������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
link_exit:;
}

struct mon* create_from_file() {


	struct mon* head = (struct mon*)malloc(sizeof(struct mon)); //��������� ������ head ��� ������ ������
	struct mon* tail = head, * temp = head;   //��������� ������ tail ��� ������ ������ b � ������ �� ������ ������
	int size = 0, i = 0;


	FILE* file = NULL;
	fopen_s(&file, "Result.txt", "r");  //������ ���� � ��������
	if (file == NULL) {       //�������� �� ������� �����
		system("cls");
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
		goto link_exit;
	}
	 
	char text;             //���������� ��� ����� ���������� �������
	while (true) {
		text = fgetc(file);        //����� ���������� �������
		if (text == '\n')size++;           //Size++ ������� ������
		else if (text == EOF) break;       //���� � == ��F - ����� �����
	}

	fseek(file, 0, SEEK_SET);       //SEEK_SET - ������ �����
	while (i != size) {
		fscanf_s(file, "%d", &temp->sc);
		fscanf_s(file, "%s", temp->name, 10);
		fscanf_s(file, "%d", &temp->size);
		fscanf_s(file, "%d", &temp->mhz);

		i++;
		tail->next = temp;   //����������� ��������� tail 
		tail = temp;        //�������� �������� 
		temp = (mon*)malloc(sizeof(mon));
	}
	tail->next = NULL; // ������������� �������

	fclose(file);
	system("cls");
	printf("�����!!\n�������� ������ ������ �� ����� ���� ���������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
	return head;
link_exit:;
}