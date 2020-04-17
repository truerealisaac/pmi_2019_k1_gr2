#include "operation.h"


int main()
{
	
	drob a, b;
	cin >> a >> b;
	
	drob c = a + b;
	cout << c << endl;
	
	c = a - b;
	cout << c << endl;

	
	c = a * b;
	cout << c << endl;
	
	c = a / b;
	cout << c << endl;

	++b;
	cout << b << endl;

	a++;
	cout << a << endl;

	return 0;
}