#include <iostream>

#include "rat_frac.h"

using namespace std;

int main() {
	rat_frac1 a(15, 10), b(11, 23);
	cout << a << "\n" << b << "\n";
	cin >> a;
	a = a + b;
	cout << a;

	rat_frac2 c(15, 10), d(11, 23);
	cout << c << "\n" << d << "\n";
	cin >> c;
	c = c + d;
	cout << d;

	return 0;
}