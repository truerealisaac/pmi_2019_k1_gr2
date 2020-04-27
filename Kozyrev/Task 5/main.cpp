#include "1class.h"
#include "2class.h"
#include "3class.h"

#include <iostream>
using namespace std;


int main()
{
	class2 a1(2, 1), b1(3, 1), c1;
	c1 = a1 * b1;
	cout << "result = " << c1 << "\n" << endl;

	class2 a2(3, 4), b2(-6, 3), c2;
	c2 = a2 + b2;
	cout << "result = " << c2 << "\n" << endl;

	class3 a3(2, 1), b3(3, 1), c3;
	c3 = a3 * b3;
	cout << "result = " << c3 << "\n" << endl;

	class3 a4(3, 4), b4(-6, 3), c4;
	c4 = a4 + b4;
	cout << "result = " << c4 << "\n" << endl;

	return 0;
}