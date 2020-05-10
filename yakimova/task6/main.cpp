#include "zoo.h"
#include <stdio.h>
#include <stdlib.h>
void walk(const zoo& z)
{
	for (int i = 0; i < 10; i++)
		z.cells[i].sound();
}

int main()
{
	tiger t;
	rabbit r;
	wolf w;
	zoo z;
	for (int i = 0; i < 4; i++)
		z.cells[rand() % 10].addAnimal(&t);
	for (int i = 0; i < 3; i++)
		z.cells[rand() % 10].addAnimal(&w);
	for (int i = 0; i < 2; i++)
		z.cells[rand() % 10].addAnimal(&r);
	walk(z);
	return 0;

}