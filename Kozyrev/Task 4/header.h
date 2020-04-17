#pragma once

#include <iostream>
using namespace std;

int evklid(int a, int b);

class rational
{
public:
	int ch, zn;

	rational();
	rational(const int& a);
	rational(int a, int b);

	void set_ch(int a);
	void set_zn(int b);
	int get_ch();
	int get_zn();
	void reduction();
	void show();

	rational operator+(const rational& addend);
	rational operator-(const rational& subtrahend);
	rational operator*(const rational& multiplier);
	rational operator/(const rational& divider);

	rational operator++(int);
	rational& operator++();

	friend ostream& operator<<(ostream& output, const rational& fraction);
	friend istream& operator>>(istream& input, rational& fraction);
};

