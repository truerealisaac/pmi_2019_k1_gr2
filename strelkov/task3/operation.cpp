#include "operation.h"


drob::drob() 
{
	ch = 0;
	zn = 1;
}

drob::drob(int _ch, int _zn)
{
		ch = _ch;
		zn = _zn;
}

int evklid(int a, int b)
{
	int r;
	while (b != 0)
	{
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

void drob::reduct() 
{
	int r;
	int ch1, zn1;
	ch1 = ch;
	zn1 = zn;
	if (ch > zn)
		r = evklid(ch, zn);
	else
		r = evklid(zn, ch);
	if (r < 0)
		r = r * (-1);
	ch = ch / r;
	zn = zn / r;
}

const drob drob::operator+(const drob& add)
{
	
	int ch1, zn1;
	ch1 = ch * add.zn + add.ch * zn;
	zn1 = zn * add.zn;
	drob c(ch1, zn1);
	c.reduct();

	return c;
}
const drob drob::operator-(const drob& sub)
{

	int ch1, zn1;
	ch1 = ch * sub.zn - sub.ch * zn;
	zn1 = zn * sub.zn;
	drob c(ch1, zn1);
	c.reduct();

	return c;
}
const drob drob::operator*(const drob& mul)
{

	int ch1, zn1;
	ch1 = ch * mul.ch;
	zn1 = zn * mul.zn;
	drob c(ch1, zn1);
	c.reduct();

	return c;
}
const drob drob::operator/(const drob& div)
{
	
	int ch1, zn1;
	ch1 = ch * div.zn;
	zn1 = zn * div.ch;
	drob c(ch1, zn1);
	c.reduct();

	return c;
}
 drob drob::operator++()
{
	ch = ch + zn;
	reduct();

	return *this;
}
drob drob::operator++(int)
{
	ch = ch + zn;
	reduct();

	return *this;
}

void drob::print()
{
	printf("%d/%d", ch, zn);
}