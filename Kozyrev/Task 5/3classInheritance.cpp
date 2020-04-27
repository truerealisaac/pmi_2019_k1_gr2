#include "1class.h"
#include "3class.h"

#include <iostream>
using namespace std;


class3::class3()
{
	ch = 0;
	zn = 1;
	nod = 1;
}


class3::class3(const int& a)
{
	ch = a;
	zn = 1;
	nod = 1;
}


class3::class3(const int& a, const int& b)
{
	if (b == 0)
	{
		cout << "error" << endl;
		ch = 0;
		zn = 1;
		nod = 1;
	}
	ch = a;
	zn = b;
	nod = evklid();
	reduction();
}


class3& class3::operator+(const class3& a)
{
	ch = ch * a.zn + a.ch * zn;
	zn = zn * a.zn;
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator-(const class3& a)
{
	ch = ch * a.zn - a.ch * zn;
	ch = ch * a.zn;
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator*(const class3& a)
{
	ch = ch * a.ch;
	zn = zn * a.zn;
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator/(const class3& a)
{
	if (a.zn == 0)
	{
		cout << "error" << endl;
		return *this;
	}
	ch = ch * a.zn;
	zn = zn * a.ch;
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator++(int)
{
	ch = ch + zn;
	if (ch == 0) zn = 1;
	return *this;
}


istream& operator>>(istream& in, class3& a)
{
	cout << "Enter ch and zn" << endl;
	in >> a.ch >> a.zn;
	return in;
}


ostream& operator<<(ostream& out, const class3& a)
{
	if (a.zn == 1)
		out << "(" << a.ch << ")" << endl;
	else
	out << "(" << a.ch << " / " << a.zn << ")";
	return out;
}