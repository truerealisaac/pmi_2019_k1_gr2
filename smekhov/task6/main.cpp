#include "zoo.h"
#include <stdlib.h>

void wolk(const zoo& z)
{
	for (int i = 0; i < 10; i++)
		z.soundAnimal(i);
}

int main()
{
	tiger t;
	wolf w;
	rabbit r;
	empty e;
	zoo z(e);
	for (int i = 0; i < 4; i++)
		z.addAnimal(&t, rand() % 10);
	for (int i = 0; i < 3; i++)
		z.addAnimal(&w, rand() % 10);
	for (int i = 0; i < 3; i++)
		z.addAnimal(&r, rand() % 10);
	wolk(z);
	return 0;
}