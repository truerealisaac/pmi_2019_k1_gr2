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

rational::rational(const int& a)
{
	ch = a;
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
	cout << ch <<"/"<< zn << "\n" << endl;
}

rational rational::operator +(const rational& addend)
{
	rational result(ch * addend.zn + addend.ch * zn, zn * addend.zn);
	result.reduction();
	return result;
}

rational rational::operator -(const rational& subtrahend)
{
	rational result(ch * subtrahend.zn - subtrahend.ch * zn, zn * subtrahend.zn);
	result.reduction();
	return result;
}

rational rational::operator *(const rational& multiplier)
{
	rational result(ch * multiplier.ch, zn * multiplier.zn);
	result.reduction();
	return result;
}

rational rational::operator /(const rational& divider)
{
	rational result(ch * divider.zn, zn * divider.ch);
	result.reduction();
	return result;
}

rational rational::operator++(int)
{
	ch = ch + zn;
	rational result(ch, zn);
	result.reduction();
	ch = result.ch;
	zn = result.zn;
	return *this;
}

rational& rational::operator++()
{
	ch = ch + zn;
	rational result(ch, zn);
	result.reduction();
	ch = result.ch;
	zn = result.zn;
	return *this;
}

ostream& operator<<(ostream& output, const rational& fraction)
{
	if (fraction.zn==1)
		output << "(" << fraction.ch << ")" << endl;
	else output << "(" << fraction.ch << "/" << fraction.zn << ")" << endl;
	return output;
}

istream& operator>>(istream& input, rational& fraction)
{
	cout << "Enter ch and zn" << endl;
	input >> fraction.ch >> fraction.zn;
	return input;
}
