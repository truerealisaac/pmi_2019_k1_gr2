#include "1class.h"
#include "3class.h"

#include <iostream>
using namespace std;


class3::class3() :class1()
{
}


class3::class3(const int& a) :class1(a, 1)
{
}


class3::class3(const int& a, const int& b) :class1(a, b)
{
}


class3& class3::operator+(const class3& a)
{
	redef(ch * a.zn + a.ch * zn, zn * a.zn);
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator-(const class3& a)
{
	redef(ch * a.zn - a.ch * zn, ch * a.zn);
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator*(const class3& a)
{
	redef(ch * a.ch, zn * a.zn);
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
	redef(ch * a.zn, zn * a.ch);
	nod = evklid();
	reduction();
	return *this;
}


class3& class3::operator++(int)
{
	redef(ch + zn, zn);
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