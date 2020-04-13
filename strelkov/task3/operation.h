#include <iostream>

#pragma once

class drob
{
	int ch, zn;

public:

	drob();
	drob(int _ch, int _zn);
	void print();

	const drob operator +(const drob& add);
	const drob operator -(const drob& sub);
	const drob operator *(const drob& mul);
	const drob operator /(const drob& div);
	
	drob operator++();
	drob operator++(int);
private:

	void reduct();

};
int evklid(int a, int b);