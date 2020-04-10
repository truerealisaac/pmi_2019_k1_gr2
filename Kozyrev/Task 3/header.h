#pragma once

int evklid(int a, int b);

class rational
{
public:
	int ch, zn;

	rational();
	rational(int a, int b);

	void set_ch(int a);
	void set_zn(int b);
	int get_ch();
	int get_zn();
	void reduction();
	void show();

	rational operator +(const rational& addend);
	rational operator -(const rational& subtrahend);
	rational operator *(const rational& multiplier);
	rational operator /(const rational& divider);

	friend rational operator ++(rational& a, int);
	friend rational& operator ++(rational& a);
};

