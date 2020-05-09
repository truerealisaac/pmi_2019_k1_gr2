#include "animal.h"
#include <iostream>

#define N 10 // number of cells


cell::cell() {
	empty = true;
}

cell::cell(const cell& c) {
	anim = c.anim;
	empty = c.empty;
}

cell::~cell() {
	if (!empty)
		delete[] anim;
}

void cell::addAnimal(animal* an) {
	if (empty) {
		empty = false;
		anim = an;
	}
}

bool cell::getEmpty() const {
	return empty;
}

void cell::sound() const {
	if (!empty) {
		anim->sound();
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