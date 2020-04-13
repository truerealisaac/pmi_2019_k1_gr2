#include "class_fraction.h"
#include<conio.h>

int main()
{
	fraction f1,f2;
	f1.print();
	f1.enter();
	++f1;

	f2.init(2, 4);
	f2.print();
	f2.enter();

	fraction f3;
	f3 = f1 + f2;
	f1.enter();
	f3.print();

	f3 = f1 - f2;
	f1.enter();
	f3.print();

	f3 = f1 * f2;
	f1.enter();
	f3.print();

	f3 = f1 / f2;
	f1.enter();
	f3.print();

	_getch();
	return 0;
}