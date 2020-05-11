#include "animal.h"
#include <iostream>

#define N 10 // number of cells


cell::cell() {
	empty = true;
	count = 0;
}

cell::cell(const cell& c) {
	empty = c.empty;
	count = c.count;
	for (int i = 0; i < c.count; i++)
		anim[i] = c.anim[i];
}

void cell::addAnimal(animal* an) {
	if (empty) {
		empty = false;
		anim[count] = an;
		count++;
	}
}

bool cell::getEmpty() const {
	return empty;
}

int cell::getCount() const {
	return count;
}

void cell::sound() const {
	if (!empty) {
		for (int i = 0; i < this->getCount(); i++)
			anim[i]->sound();
	}
	else {
		std::cout << "empty cell\n";
	}
}

void tiger::sound() {
	std::cout << "\'aaarrrr\' (tiger)\n";
}

void kangaroo::sound() {
	std::cout << "\'khhh\' (kangaroo)\n";
}

void bear::sound() {
	std::cout << "\'aarrrkhh\' (bear)\n";
}



zoo::zoo() {
	cells = new cell[N];
}

zoo::zoo(const zoo& z) {
	cells = new cell[N];
	for (int i = 0; i < N; i++)
		cells[i] = z.cells[i];
}

zoo::~zoo() {
	delete[] cells;
}