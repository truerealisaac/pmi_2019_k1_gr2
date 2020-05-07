#include "Cell.h"
#include "iostream"


Cell::Cell() {
	count = 1;
	animals[0] = 0;
}

void Cell::Add(Animal* an) {
	animals[0] = an;
}
void Cell::Ask() {
	bool flag = true;
	for (int i = 0; i < count; i++)
	{
		if (animals[i] != 0) {
			animals[i]->voice();
			flag = false;
		}
	}
	if (flag)
		std::cout << "*silence*\n";
}