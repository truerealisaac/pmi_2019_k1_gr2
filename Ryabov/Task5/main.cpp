#include"funk.h"
#include <iostream>
using namespace std;


int main()
{
	RedClass a1(5, 1), b1(2, 1), c1;
	c1 = a1 * b1;
	cout << "result = " << c1 << "\n" << endl;

	RedClass a2(4, 3), b2(4, 3), c2;
	c2 = a2 + b2;
	cout << "result = " << c2 << "\n" << endl;

	newclass a3(2, 1), b3(5, 1), c3;
	c3 = a3 * b3;
	cout << "result = " << c3 << "\n" << endl;

	newclass a4(4, 3), b4(4, 3), c4;
	c4 = a4 + b4;
	cout << "result = " << c4 << "\n" << endl;

	return 0;
}
