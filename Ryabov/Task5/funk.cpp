#include "funk.h"
#include "math.h"
#include <iostream>
using namespace std;


 baseclass::baseclass(const int& a, const int& b)
{
	if (b == 0)
	{
		first = 0;
		second = 1;
		nod = 1;
	}
	else
	{
		first = a;
		second = b;
		if (a == 0) nod = 1;
		else nod = evklid();
	}
}


void baseclass::redef(const int& a, const int& b)
{
	first = a;
	second = b;
	nod = evklid();
}


int baseclass::evklid()
{
	int a, b, res;
	a = abs(first);
	b = abs(second);

	if (b == 0)
	{
		return a;
	}
	res = a % b;
	while (res != 0)
	{
		a = b;
		b = res;
		res = a % b;
	}
	return b;
}


void baseclass::red()
{
	first = first / nod;
	second = second / nod;
}


const int baseclass::get_nod() const
{
	return nod;
}


const int baseclass::get_first() const
{
	return first;
}


const int baseclass::get_second() const
{
	return second;
}


void baseclass::set_first(const int& a)
{
	first = a;
	nod = evklid();
}


void baseclass::set_second(const int& a)
{
	second = a;
	nod = evklid();
}

RedClass::RedClass()
{
	object.redef(0, 1);
}


RedClass::RedClass(const int& a)
{
	object.redef(a, 1);
}


RedClass::RedClass(const int& a, const int& b)
{
	if (b == 0)
	{
		object.redef(0, 1);
	}
	object.redef(a, b);
	object.red();
}


RedClass& RedClass::operator+(const RedClass& a)
{
	object.redef(object.get_first() * a.object.get_second() + a.object.get_first() * object.get_second(), object.get_second() * a.object.get_second());
	object.red();
	return *this;
}


RedClass& RedClass::operator-(const RedClass& a)
{
	object.redef(object.get_second() * a.object.get_second() - a.object.get_first() * object.get_second(), object.get_second() * a.object.get_second());
	object.red();
	return *this;
}


RedClass& RedClass::operator*(const RedClass& a)
{
	object.redef(object.get_first() * a.object.get_first(), object.get_second() * a.object.get_second());
	object.red();
	return *this;
}


RedClass& RedClass::operator/(const RedClass& a)
{
	if (a.object.get_second() == 0)
	{
		cout << "error, try again" << endl;
		return *this;
	}
	object.redef(object.get_first() * a.object.get_second(), object.get_second() * a.object.get_first());
	object.red();
	return *this;
}


RedClass& RedClass::operator++(int)
{
	object.set_first(object.get_first() + object.get_second());
	if (object.get_second() == 0) object.set_second(1);
	return *this;
}


istream& operator>>(istream& in, RedClass& a)
{
	int b = 0;
	int c = 0;

	cout << "Enter first and second" << endl;
	in >> b >> c;
	a.object.redef(b, c);
	return in;
}


ostream& operator<<(ostream& out, const RedClass& a)
{
	if (a.object.get_second() == 1)
		out << "(" << a.object.get_first() << ")" << endl;
	else
		out << "(" << a.object.get_first() << " / " << a.object.get_second() << ")";
	return out;
}
newclass::newclass() :baseclass()
{
}

newclass::newclass(const int& a) : baseclass(a, 1)
{
}


newclass::newclass(const int& a, const int& b) : baseclass(a, b)
{
}


newclass& newclass::operator+(const newclass& a)
{
	redef(first * a.second + a.first * second, second * a.second);
	red();
	return *this;
}


newclass& newclass::operator-(const newclass& a)
{
	redef(first * a.second - a.first * second, first * a.second);
	red();
	return *this;
}


newclass& newclass::operator*(const newclass& a)
{
	redef(first * a.first, second * a.second);
	red();
	return *this;
}


newclass& newclass::operator/(const newclass& a)
{
	if (a.second == 0)
	{
		cout << "error , try again" << endl;
		return *this;
	}
	redef(first * a.second, second * a.first);
	red();
	return *this;
}


newclass& newclass::operator++(int)
{
	redef(first + second, second);
	if (first == 0) second = 1;
	return *this;
}


istream& operator>>(istream& in, newclass& a)
{
	cout << "Enter first and second" << endl;
	in >> a.first >> a.second;
	return in;
}


ostream& operator<<(ostream& out, const newclass& a)
{
	if (a.second == 1)
		out << "(" << a.first << ")" << endl;
	else
		out << "(" << a.first << " / " << a.second << ")";
	return out;
}
