#include <iostream>

using namespace std;

#pragma once

class drob
{
	int ch, zn;

public:

	drob();
	drob(int _ch, int _zn);
	
	const drob operator +(const drob& add);
	const drob operator -(const drob& sub);
	const drob operator *(const drob& mul);
	const drob operator /(const drob& div);

	friend ostream& operator << (ostream& out, const drob& a);
	friend istream& operator >> (istream& in, drob& a);

	drob operator++();
	drob operator++(int);
private:

	void reduct();

};
int evklid(int a, int b);