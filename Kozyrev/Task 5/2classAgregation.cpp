#include "1class.h"
#include "2class.h"

#include <iostream>
using namespace std;


class2::class2()
{
	object.redef(0, 1);
}


class2::class2(const int& a)
{
	object.redef(a, 1);
}


class2::class2(const int& a, const int& b)
{
	if (b == 0)
	{
		cout << "error" << endl;
		object.redef(0, 1);
	}
	object.redef(a, b);
	object.reduction();
}


class2& class2::operator+(const class2& a)
{
	object.redef(object.get_ch() * a.object.get_zn() + a.object.get_ch() * object.get_zn(), object.get_zn() * a.object.get_zn());
	object.reduction();
	return *this;
}


class2& class2::operator-(const class2& a)
{
	object.redef(object.get_ch() * a.object.get_zn() - a.object.get_ch() * object.get_zn(), object.get_zn() * a.object.get_zn());
	object.reduction();
	return *this;
}


class2& class2::operator*(const class2& a)
{
	object.redef(object.get_ch() * a.object.get_ch(), object.get_zn() * a.object.get_zn());
	object.reduction();
	return *this;
}


class2& class2::operator/(const class2& a)
{
	if (a.object.get_zn() == 0)
	{
		cout << "error" << endl;
		return *this;
	}
	object.redef(object.get_ch() * a.object.get_zn(), object.get_zn() * a.object.get_ch());
	object.reduction();
	return *this;
}


class2& class2::operator++(int)
{
	object.set_ch(object.get_ch() + object.get_zn());
	if (object.get_ch() == 0) object.set_zn(1);
	return *this;
}


istream& operator>>(istream& in, class2& a)
{
	int b = 0;
	int c = 0;
	
	cout << "Enter ch and zn" << endl;
	in >> b >> c;
	a.object.redef(b, c);
	return in;
}


ostream& operator<<(ostream& out, const class2& a)
{
	if (a.object.get_zn() == 1)
		out << "(" << a.object.get_ch() << ")" << endl;
	else
	out << "(" << a.object.get_ch() << " / " << a.object.get_zn() << ")";
	return out;
}