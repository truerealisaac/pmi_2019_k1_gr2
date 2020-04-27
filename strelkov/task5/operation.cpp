#include "operation.h"


drobN::drobN() 
{
	ch = 0;
	zn = 1;
}

drobN::drobN(int _ch, int _zn)
{
		ch = _ch;
		zn = _zn;

}

int nod::evklid(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	if (a < 0)
		a = a * (-1);
	return a;
}

void drobN::reduct() 
{
	int r;
	if (ch > zn)
		r = evklid(ch, zn);
	else
		r = evklid(zn, ch);
	ch = ch / r;
	zn = zn / r;
}

const drobN drobN::operator+(const drobN& add)
{
	
	int ch1, zn1;
	ch1 = ch * add.zn + add.ch * zn;
	zn1 = zn * add.zn;
	drobN c(ch1, zn1);
	c.reduct();

	return c;
}
const drobN drobN::operator-(const drobN& sub)
{

	int ch1, zn1;
	ch1 = ch * sub.zn - sub.ch * zn;
	zn1 = zn * sub.zn;
	drobN c(ch1, zn1);
	c.reduct();

	return c;
}
const drobN drobN::operator*(const drobN& mul)
{

	int ch1, zn1;
	ch1 = ch * mul.ch;
	zn1 = zn * mul.zn;
	drobN c(ch1, zn1);
	c.reduct();

	return c;
}
const drobN drobN::operator/(const drobN& div)
{
	
	int ch1, zn1;
	ch1 = ch * div.zn;
	zn1 = zn * div.ch;
	drobN c(ch1, zn1);
	c.reduct();

	return c;
}
 drobN drobN::operator++()
{
	ch = ch + zn;
	reduct();

	return *this;
}
drobN drobN::operator++(int)
{
	ch = ch + zn;
	reduct();

	return *this;
}

ostream& operator << (ostream& out, const drobN& a)
{
	out << a.ch << "/" << a.zn;
	return out;
}

istream& operator >> (istream& in, drobN& a)
{
	cout << "input ch: ";
	in >> a.ch;
	cout << "input zn: ";
	in >> a.zn;
	while (a.zn==0)
	{
		cout << "wrong zn, input again ";
		in >> a.zn;
	}	
	return in;
}

drobA::drobA()
{
	ch = 0;
	zn = 1;
}

drobA::drobA(int _ch, int _zn)
{
	ch = _ch;
	zn = _zn;

}

void drobA::reduct()
{
	int t;
	if (ch > zn)
		t = r.evklid(ch, zn);
	else
		t = r.evklid(ch, zn);
	ch = ch / t;
	zn = zn / t;
}

const drobA drobA::operator+(const drobA& add)
{

	int ch1, zn1;
	ch1 = ch * add.zn + add.ch * zn;
	zn1 = zn * add.zn;
	drobA c(ch1, zn1);
	c.reduct();

	return c;
}
const drobA drobA::operator-(const drobA& sub)
{

	int ch1, zn1;
	ch1 = ch * sub.zn - sub.ch * zn;
	zn1 = zn * sub.zn;
	drobA c(ch1, zn1);
	c.reduct();

	return c;
}
const drobA drobA::operator*(const drobA& mul)
{

	int ch1, zn1;
	ch1 = ch * mul.ch;
	zn1 = zn * mul.zn;
	drobA c(ch1, zn1);
	c.reduct();

	return c;
}
const drobA drobA::operator/(const drobA& div)
{

	int ch1, zn1;
	ch1 = ch * div.zn;
	zn1 = zn * div.ch;
	drobA c(ch1, zn1);
	c.reduct();

	return c;
}
drobA drobA::operator++()
{
	ch = ch + zn;
	reduct();

	return *this;
}
drobA drobA::operator++(int)
{
	ch = ch + zn;
	reduct();

	return *this;
}

ostream& operator << (ostream& out, const drobA& a)
{
	out << a.ch << "/" << a.zn;
	return out;
}

istream& operator >> (istream& in, drobA& a)
{
	cout << "input ch: ";
	in >> a.ch;
	cout << "input zn: ";
	in >> a.zn;
	while (a.zn == 0)
	{
		cout << "wrong zn, input again ";
		in >> a.zn;
	}
	return in;
}