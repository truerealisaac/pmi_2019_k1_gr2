#include "header.h"

#include "iostream"
using namespace std;

int main()
{
	rational a(1, 3), b(1, 2), c;

	c = a + b;
	c.show();

	c = a - b;
	c.show();

	c = a * b;
	c.show();

	c = a * 5;
	c.show();

	c = a / b;
	c.show();

	++a;
	a.show();

	a++;
	a.show();

	cin >> a >> b;
 	c = a + b;
	cout << "\n" << "result = " << c << endl;

	return 0;
}