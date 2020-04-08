#include "rational_fraction.h"



int main() {
	rational_fraction a(5, 10), b(13, 7);
	a = a + b;
	a.print();


	return 0;
}