#include <iostream>

using namespace std;

#pragma once

class nod
{
public:

	int evklid(int _a, int _b);

};

class drobN :protected nod
{
	int ch, zn;

public:

	drobN();
	drobN(int _ch, int _zn);
	
	const drobN operator +(const drobN& add);
	const drobN operator -(const drobN& sub);
	const drobN operator *(const drobN& mul);
	const drobN operator /(const drobN& div);

	friend ostream& operator << (ostream& out, const drobN& a);
	friend istream& operator >> (istream& in, drobN& a);

	drobN operator++();
	drobN operator++(int);

private:

	void reduct();
};

class drobA 
{
	
	int ch, zn;

public:

	drobA();
	drobA(int _ch, int _zn);

	const drobA operator +(const drobA& add);
	const drobA operator -(const drobA& sub);
	const drobA operator *(const drobA& mul);
	const drobA operator /(const drobA& div);

	friend ostream& operator << (ostream& out, const drobA& a);
	friend istream& operator >> (istream& in, drobA& a);

	drobA operator++();
	drobA operator++(int);

private:
	nod r;
	void reduct();

};
