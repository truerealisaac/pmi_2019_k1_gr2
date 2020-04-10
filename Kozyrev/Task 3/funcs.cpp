#include "header.h"
#include <math.h>

#include "iostream"
using namespace std;

int evklid(int a, int b)
{
	if (b == 0)
		return abs(a);
	return evklid(b, a % b);
}

rational::rational()
{
	ch = 0;
	zn = 1;
}

rational::rational(int a, int b)
{
	if (b == 0)
	{
		cout << "zn = 0" << endl;
		return;
	}
	ch = a;
	zn = b;
}

void rational::set_ch(int a)
{
	ch = a;
}

void rational::set_zn(int b)
{
	if (b == 0) {
		cout << "zn = 0" << endl;
		return;
	}
	zn = b;
}

int rational::get_ch()
{
	return ch;
}

int rational::get_zn()
{
	return zn;
}

void rational::reduction()
{
	int nod = evklid(ch, zn);

	ch = ch / nod;
	zn = zn / nod;
	return;
}

void rational::show()
{
	cout << "%d/%d" << ch << zn << endl;
}

rational rational::operator +(const rational& addend)
{
	rational result(this->ch * addend.zn + addend.ch * this->zn, this->zn * addend.zn);
	result.reduction;
	return result;
}

rational rational::operator -(const rational& subtrahend)
{
	rational result(this->ch * subtrahend.zn - subtrahend.ch * this->zn, this->zn * subtrahend.zn);
	result.reduction;
	return result;
}

rational rational::operator *(const rational& multiplier)
{
	rational result(this->ch * multiplier.ch, this->zn * multiplier.zn);
	result.reduction;
	return result;
}

rational rational::operator /(const rational& divider)
{
	rational result(this->ch * divider.zn, this->zn * divider.ch);
	result.reduction;
	return result;
}

rational operator++(rational& a, int)
{
	a.ch = a.ch + a.zn;
	a.reduction;
	return a;
}

rational& operator++(rational& a)
{
	a.ch = a.ch + a.zn;
	a.reduction;
	return a;
}
