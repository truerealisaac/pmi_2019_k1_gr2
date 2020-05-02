#pragma once
#include "1class.h"

#include <iostream>
using namespace std;


class class2
{
private:
	class1 object;

public:
	class2();
	class2(const int& a);
	class2(const int& a, const int& b);

	class2& operator+(const class2& a);
	class2& operator-(const class2& a);
	class2& operator*(const class2& a);
	class2& operator/(const class2& a);
	class2& operator++(int);
	
	friend istream& operator>>(istream& in, class2& a);
	friend ostream& operator<<(ostream& out, const class2& a);
};