#include <stdio.h>
#include"drob.h"
#include <iostream>
using namespace std;
int main() {
	RacDrob a(2,15), b(7,16), c;
	cout << c;
	c = a + b;
	cout << c;
	c = a - b;
	cout << c;
	c = a * b;
	c.print();
	c = a / b;
	cout << c;
	a++;
	a.print();
	cout << a;
	return 0;
}
