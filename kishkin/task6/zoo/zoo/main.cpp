#include "animal.h"
#include <iostream>
#include <stdlib.h>

#define N 10
#define Quantity 4

using namespace std;

void walk(const zoo& temp) {
	for (int i = 0; i < N; i++) {
		cout << i + 1 << ". ";
		temp.cells[i].sound();
	}
}



int main() {
	tiger t;
	kangaroo k;
	bear b;

	zoo z;

	for (int i = 0; i < Quantity; i++)
			z.cells[rand() % 10].addAnimal(&t);
	for (int i = 0; i < Quantity; i++)
		z.cells[rand() % 10].addAnimal(&k);
	for (int i = 0; i < Quantity; i++)
		z.cells[rand() % 10].addAnimal(&b);


	walk(z);

	return 0;
}