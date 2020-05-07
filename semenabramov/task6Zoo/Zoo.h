#pragma once
#include "Cell.h"
class Zoo
{
protected:
	int n = 10;
	Cell cells[10];
public:
	Zoo();
	
	void around();
	Cell* take_cell(int num);

};

