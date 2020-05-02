#include <iostream>
#include "Red.h"
#include "class.h"
#include "Agr.h"
#include <stdio.h>

int main() {
	Rat a, b;  //Rat - Inheritance Red
	Agr f, d;  //Arg - Agrigation Red

	std::cin >> f;
	std::cin >> d;
	std::cout << f + d;

	std::cin >> a;
	std::cin >> b;
	std::cout << a + b;

	return 0;
}