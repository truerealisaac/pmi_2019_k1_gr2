#include "zoo.h"
#include <iostream>

void empty::sound() const
{
	std::cout << "...\n";
}

bool empty::isEmpty() const
{
	return true;
}

void wolf::sound() const
{
	std::cout << "auuu\n";
}

bool wolf::isEmpty() const
{
	return false;
}

void rabbit::sound() const
{
	std::cout << "nuh-nuh\n";
}

bool rabbit::isEmpty() const
{
	return false;
}

void tiger::sound() const
{
	std::cout << "arrr\n";
}

bool tiger::isEmpty() const
{
	return false;
}

zoo::zoo(empty& e)
{
	for (int i = 0; i < 10; i++)
		animals[i] = &e;
}

zoo::~zoo()
{
	delete[]animals;
}

void zoo::addAnimal(cell* a, const int& c)
{
	if (animals[c]->isEmpty())
		animals[c] = a;
}

void zoo::soundAnimal(const int& c) const
{
	animals[c]->sound();
}