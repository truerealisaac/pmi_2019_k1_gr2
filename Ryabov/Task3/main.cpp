#include <stdio.h>
#include"drob.h"
int main() {
	RacDrob a(5,10), b(3,10), c;
	c = a + b;
	c.print();
	c = a - b;
	c.print();
	c = a * b;
	c.print();
	c = a / b;
	c.print();
	a++;
	a.print();
	return 0;
}
