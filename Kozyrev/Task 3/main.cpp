#include "header.h"

#include "iostream"
using namespace std;

int main()
{
	rational a(1, 2), b(1, 3), c;

	c = a + b;
	c.show();
	cout << "\n" << endl;

	c = a - b;
	c.show();
	cout << "\n" << endl;

	c = a * b;
	c.show();
	cout << "\n" << endl;

	c = a / b;
	c.show();
	cout << "\n" << endl;

	++a;
	a.show();
	cout << "\n" << endl;

	a++;
	a.show();
	cout << "\n" << endl;

	return 0;
}