#include <stdio.h>
#include <iostream>

#include "rational_fraction.h"


int alg_evk(int max, int min) {
	if (min == 0)
		return max;

	return alg_evk(min, max % min);
}

void rational_fraction::reduction() {
	int ch1 = ch;
	int zn1 = zn;

	int nod;
	if (ch1 > zn1) {
		nod = alg_evk(ch1, zn1);
	}
	else {
		nod = alg_evk(zn1, ch1);
	}

	ch1 = ch1 / nod;
	zn1 = zn1 / nod;
	ch = ch1;
	zn = zn1;
}




rational_fraction::rational_fraction() {
	ch = 0;
	zn = 1;
}

rational_fraction::rational_fraction(int _ch, int _zn) {
	if (_zn == 0) {
		printf("wrong znamenatel (= 0). zn = 1");
		ch = _ch;
		zn = _zn;
	}
	ch = _ch;
	zn = _zn;
}



const rational_fraction rational_fraction::operator+(const rational_fraction& drob) const
{
	int ch1, zn1;
	ch1 = ch * drob.zn + drob.ch * zn;
	zn1 = zn * drob.zn;
	rational_fraction c(ch1, zn1);
	c.reduction();

	return c;
}

const rational_fraction rational_fraction::operator-(const rational_fraction& drob) const
{
	int ch1, zn1;
	ch1 = ch * drob.zn - drob.ch * zn;
	zn1 = zn * drob.zn;
	rational_fraction c(ch1, zn1);
	c.reduction();

	return c;
}

const rational_fraction rational_fraction::operator*(const rational_fraction& drob) const
{
	int ch1, zn1;
	ch1 = ch * drob.ch;
	zn1 = zn * drob.zn;
	rational_fraction c(ch1, zn1);
	c.reduction();

	return c;
}

const rational_fraction rational_fraction::operator/(const rational_fraction& drob) const
{
	int ch1, zn1;
	ch1 = ch * drob.zn;
	zn1 = zn * drob.ch;
	rational_fraction c(ch1, zn1);
	c.reduction();

	return c;
}

const rational_fraction& operator++(rational_fraction& drob) {
	drob.ch = drob.ch + drob.zn;
	
	return drob;
}

const rational_fraction operator++(rational_fraction& drob, int)
{
	drob.ch = drob.ch + drob.zn;

	return drob;
}



std::istream& operator>>(std::istream& in, rational_fraction& drob)
{
	std::cout << "\nEnter ch, zn:\n";
	in >> drob.ch >> drob.zn;
	return in;
}

std::ostream& operator<<(std::ostream& out, const rational_fraction& drob)
{
	out << drob.ch << "/" << drob.zn;
	return out;
}



void rational_fraction::print() {
	reduction();
	printf("%d/%d", ch, zn);
}

