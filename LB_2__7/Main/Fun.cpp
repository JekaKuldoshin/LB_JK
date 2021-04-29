#include "fun.h"

void input(mon t) { //����-� ���������� ������ � ���� 
	system("cls");
	FILE* file_input;
	fopen_s(&file_input, "Result.txt", "w");
	if (!file_input) {
		puts("������ �������� �����.\n");   //�������� �� ������� �����
		exit(1);
	}

	printf("������� ������:\n");
	printf("������� ��� -> ");
	scanf_s("%d", &t.sc);
	printf("������� ��� �������� ������������ -> ");
	scanf_s("%s", t.name, 10);
	setbuf(stdin, NULL);                 //��������� ����������� �����
	printf("������� ������� ������ -> ");
	scanf_s("%d", &t.size);
	printf("������� ������� ������� -> ");
	scanf_s("%d", &t.mhz);

	fprintf_s(file_input, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);

	fclose(file_input);
	system("cls");
	printf("�����!!\n���� � ������ ��� ��������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();

}


void random(mon t) {   //����-� ���������� ������ �������� 

	int random = rand() % 50 + 100;
	char NAME[6]{ "avtor" };
	t.sc = rand() % 200 + 1820;
	strcpy(t.name, (NAME));
	t.size = rand() % 1000 + 10;
	t.mhz = rand() % 1000 + 10;

	FILE* file_rand;
	fopen_s(&file_rand, "Result.txt", "w");
	if (!file_rand) {
		puts("������ �������� �����.\n");   //�������� �� ������� �����
		exit(1);
	}


	fprintf_s(file_rand, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name,/* random,*/ t.size, t.mhz);


	fclose(file_rand);
	system("cls");
	printf("�����!!\n���� ��������� ������� ��� ��������!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
}

void add_before(mon t) {       //����-� ���������� ������ � ������ ����� 
	system("cls");
	int size = 0, i = 0, j = 0;
	char c;
	int line = 0;

	FILE* foud_size;
	fopen_s(&foud_size, "Result.txt", "r");       //������ ���� � ��������
	if (!foud_size) {
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
		return;
	}
	

		while (true) {                       //���� ��� ���� ����� ������ ������ 
			c = fgetc(foud_size);               //����� ���������� �������
			if (c == '\n')size++;            //Size++
			else if (c == EOF)  break;      //���� � == ��F - ����� �����
		}

		fclose(foud_size);

		////////////////////////
		int size_string = 100;               //������ ������ ����������

		char** str = new char* [size];   //������� ������������ ������
		for (int u = 0; u < size; u++)   //� ����������� �� ���� ������� � ��� ����� 
		{                               //���������, ��������� � ����� �� ���-��� ������
			str[u] = new char[size_string];
		}

		FILE* data_copying;
		fopen_s(&data_copying, "Result.txt", "r");       //������ ���� � ��������
		if (!data_copying) {
			puts("������ �������� �����.\n");   //�������� �� ������� �����
			exit(1);
		}
		i = 0;
		line = size;
		while (line != 0) {    //���� ����� �������� ���� �� ������ �� ��������� ����� ����� �������� ������� 
			fgets(*(str + i), size_string, data_copying);  // �������� ��  ������� ��������� ������          
			i++;
			line--;
		}
		fclose(data_copying);
		i = 0;

		////////////////////////

		FILE* file_add_new_data;
		fopen_s(&file_add_new_data, "Result.txt", "w");       //��������� ����� ������ � ����
		if (!file_add_new_data) {
			puts("������ �������� �����.\n");   //�������� �� ������� �����
			exit(1);
		}

		printf("������� ������:\n");
		printf("������� ��� -> ");
		scanf_s("%d", &t.sc);
		printf("������� ��� �������� ������������ -> ");
		scanf_s("%s", t.name, 10);
		setbuf(stdin, NULL);                      //��������� ����������� �����
		printf("������� ������� ������ -> ");
		scanf_s("%d", &t.size);
		printf("������� ������� ������� -> ");
		scanf_s("%d", &t.mhz);

		fprintf_s(file_add_new_data, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
		fclose(file_add_new_data);
		////////////////////////

		FILE* adding_copied_data;                //��������� ������� ������
		fopen_s(&adding_copied_data, "Result.txt", "a");
		if (!adding_copied_data) {
			puts("������ �������� �����.\n");   //�������� �� ������� �����
			exit(1);
		}
		for (int u = 0; u < size; u++)      //�������� �� ������� ����-�� �������   
		{                                   //(���� ������� ������)
			fprintf(adding_copied_data, "%s", str[u]);
		}
		fclose(adding_copied_data);

		for (int u = 0; u < size; u++) //������� ������
		{
			delete[] str[u];
		}
		delete[] str;

		system("cls");
		printf("�����!!\n������ ���� ���������� � ������ �����!\n\n��� �������� � ���� ������� ����� �������...");
		_getch();
}

void add_after(mon t) {       //����-� ���������� ������ � ����� ����� 

	system("cls");
	FILE* file_after;
	fopen_s(&file_after, "Result.txt", "a");   //��������� ���� ��� ���������� ������� 
	if (!file_after) {
		puts("������ �������� �����.\n");   //�������� �� ������� �����
		exit(1);
	}

	printf("������� ������:\n");
	printf("������� ��� -> ");
	scanf_s("%d", &t.sc);
	printf("������� ��� �������� ������������ -> ");
	scanf_s("%s", t.name, 10); 
	setbuf(stdin, NULL);                        //��������� ����������� �����
	printf("������� ������� ������ -> ");
	scanf_s("%d", &t.size);
	printf("������� ������� ������� -> ");
	scanf_s("%d", &t.mhz);

	fprintf_s(file_after, "%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
	fclose(file_after);
	system("cls");
	printf("�����!!\n������ ���� ���������� � ����� �����!\n\n��� �������� � ���� ������� ����� �������...");
	_getch();
}

void choice_str(mon t) {    //����-� ������ ������
	system("cls");
	char c;                   //���������� ��� ������ ��������, ������� �������
	int size = 0;            //���-�� �����
	int num = 0;            //����� ������ ������� ������� ������� ������������
	FILE* file_read;
	fopen_s(&file_read, "Result.txt", "r");   //��������� ���� ��� ������ �������
	if (!file_read) {
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
		return;
	}

	while (true) {
		c = fgetc(file_read);  //������ �������� �� ����� 
		if (c == '\n')size++;   //���� ������� �� ����� �������, ������������ ������ +1
		else if (c == EOF)  break;   //���� ���� ����� �� �����, ������� �� �����
	}
	fclose(file_read);

	/////////////////////
	if ((size % 10 > 4) || (size % 10 == 0) || (size % 100 == 11) || (size % 100 == 12) || (size % 100 == 13) || (size % 100 == 14))
	{
		printf("����� %d �������.\n", size);
		
	}
	if ((size % 10 == 2)||(size % 10 == 3)||(size % 10 == 4))
	{
		printf("����� %d �������.\n", size);

	}
	if (size % 10 == 1)
	{
		printf("����� %d �������.\n", size);
		
	}

	printf("������� ����� ��������� ������: ");
	scanf("%d", &num);   //����� ������ ������� ������� ������� ������������

	if (num > size) {     //�������� �� ���� �������� ����� ��� ���� �����
		printf("\n������! �� ����� ������� ������� �����! ");
		_getch();
		return;
	}

	FILE* file_print;
	fopen_s(&file_print, "Result.txt", "r");  //��������� ���� ��� ������ �������
	if (!file_print) {
		puts("������ �������� �����.\n");   //�������� �� ������� �����
		exit(1);
	}
	system("cls");
	int i = 0;
	while (i != num) {      //������� ������ ������� ����� ����������
		fscanf_s(file_print, "%d", &t.sc);
		fscanf_s(file_print, "%s", t.name, 10);
		fscanf_s(file_print, "%d", &t.size);
		fscanf_s(file_print, "%d", &t.mhz);
		i++;
	}
	printf_s("%-4d  %-10s  %-4d  %-4d\n", t.sc, t.name, t.size, t.mhz);
	fclose(file_print);
	printf("\n\n\n������� �� ����� ������� ����� ��������� � ����...");
	_getch();

}

void print_all_str(mon t) {   //����-� ������ ���� �����

	system("cls");
	FILE* file_out;
	fopen_s(&file_out, "Result.txt", "r"); //��������� ���� ��� ������ �������
	if (!file_out) {
		puts("������ �������� �����!!!\n������� �� ����� ������� ����� ��������� � ����...");   //�������� �� ������� �����
		_getch();
		return;
	}
	char ch = fgetc(file_out);// ������ ������� �������� �� �����
	while (!feof(file_out)) { // ������� �������� ����� �����
		putchar(ch);          // ������ �������� �� �����
		ch = fgetc(file_out); // ������ �������� �� �����
	}
	fclose(file_out);
	printf("\n\n\n������� �� ����� ������� ����� ��������� � ����...");
	_getch();

}