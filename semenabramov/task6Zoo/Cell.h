#pragma once
#include "Animal.h"
class Cell
{
	int count;
	Animal* animals[1];
public:
	Cell();
	void Add(Animal* an);
	void Ask();

};

