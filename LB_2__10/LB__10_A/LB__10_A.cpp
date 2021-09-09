#include "fun.h"

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	MATH obj;
	obj.count();
	obj.show();
	
	cout<<"\n\nНажмите на любую клавишу...";
	_getch();
}