#pragma once
#include "1class.h"

#include <iostream>
using namespace std;


class class3 : private class1
{
public:
	class3();
	class3(const int& a);
	class3(const int& a, const int& b);

	class3& operator+(const class3& a);
	class3& operator-(const class3& a);
	class3& operator*(const class3& a);
	class3& operator/(const class3& a);
	class3& operator++(int);

	friend istream& operator>>(istream& in, class3& a);
	friend ostream& operator<<(ostream& out, const class3& a);
};