#include "class.h"
#include <stdio.h>

int main() {
	Rat a,b,c;
	a.Set(1, 3);
	b.Set(2, 3);

	printf("+\n");
	c = a + b;
	c.Show();

	printf("-\n");
	c = a - b;
	c.Show();

	printf("*\n");
	c = a * b;
	c.Show();

	printf("/\n");
	c = a / b;
	c.Show();

	printf("Post++\n");
	c = a;
	c = a++;
	a.Show();
	c.Show();

	printf("++Pre\n");
	c = a;
	c = ++a;
	a.Show();
	c.Show();

	return 0;
}