#include <stdio.h>

#include "rational_fraction.h"



int main() {
	rational_fraction a(5, 10), b(13, 7), c(3, 4), d(5, 7);
	a = a + b;
	a.print();
	printf("\n");

	a = a - c;
	a.print();
	printf("\n");

	a = a * b;
	a.print();
	printf("\n");

	a = a / d;
	a.print();
	printf("\n");


	return 0;
}