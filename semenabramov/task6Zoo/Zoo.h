#pragma once
#include "Cell.h"
class Zoo
{
protected:
	int n = 10;
	
public:
	Zoo();
	Cell cells[10];
	void around();
	Cell* take_cell(int num);

};

