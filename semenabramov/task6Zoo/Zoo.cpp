#include "Zoo.h"
#include <iostream>

using namespace std;

Zoo::Zoo(){
}

Cell* Zoo::take_cell(int num) {
	return &cells[num];
}

void Zoo::around() {
	for (int i = 0; i < n; i++)
	{
		cout << "Cell[" << i << "] -> ";
		cells[i].Ask();
	}
}