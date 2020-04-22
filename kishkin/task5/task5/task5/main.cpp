#include <iostream>

#include "rat_frac.h"


int main() {
	rat_frac2 a(15, 10);
	std::cin >> a;
	std::cout << a << a.getNod();

	return 0;
}