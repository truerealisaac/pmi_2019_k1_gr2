#include <stdio.h>
#include <iostream>

#include "rational_fraction.h"

using namespace std;
int main() {
	rational_fraction a(5, 10);
	cout << a;

	cin >> a;
	cout << a;

	return 0;
}