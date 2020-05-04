#include"racionaldrobi.h"
#include<stdio.h>
#include <iostream>
#include <stdlib.h>
int evclid(int max, int min)
{
	if (min == 0)
	{
		return max;
	}
	else
	{
		return evclid(min, max % min);
	}
}
roditel::roditel()
{
	x = 0;
	y = 1;
	nod = 1;
}
roditel::roditel(const int& x)
{
	this->x = x;
	y = 1;
	if (x > y)
	{
		nod = evclid(x, y);
	}
	else
	{
		nod = evclid(y, x);
	}
}
roditel::roditel(const int& x, const int& y)
{
	this->x = x;
	this->y = y;
	if (x > y)
	{
		nod = evclid(x, y);
	}
	else
	{
		nod = evclid(y, x);
	}
}
void roditel::set(const int& x, const int& y)
{
	this->x = x;
	this->y = y;
	if (x > y)
	{
		nod = evclid(x, y);
	}
	else
	{
		nod = evclid(y, x);
	}
}

int roditel::getnod()
{
	return nod;
}
void racionaldrobi_ag::reduction()
{
	int x = nod.getnod();
	ch = ch / x;
	zn = zn / x;
}
racionaldrobi_ag::racionaldrobi_ag() : nod()
{
	ch = 0;
	zn = 1;
}
racionaldrobi_ag::racionaldrobi_ag(int a) : nod(a)
{
	ch = a;
	zn = 1;
	reduction();
}
racionaldrobi_ag::racionaldrobi_ag(int a, int b) : nod(a,b)
{
	if (b == 0)
	{
		printf_s("wrong znamenatel (= 0)");
		return;
	}
	ch = a;
	zn = b;
	reduction();
}

const racionaldrobi_ag racionaldrobi_ag:: operator+(const racionaldrobi_ag& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn + d.ch * zn;
	zn1 = zn * d.zn;
	racionaldrobi_ag c(ch1, zn1);
	return c;
}
const racionaldrobi_ag racionaldrobi_ag::operator-(const racionaldrobi_ag& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn - d.ch * zn;
	zn1 = zn * d.zn;
	racionaldrobi_ag c(ch1, zn1);
	return c;
}
const racionaldrobi_ag racionaldrobi_ag::operator*(const racionaldrobi_ag& d) const
{
	int ch1, zn1;
	ch1 = ch * d.ch;
	zn1 = zn * d.zn;
	racionaldrobi_ag c(ch1, zn1);
	return c;
}
const racionaldrobi_ag racionaldrobi_ag::operator/(const racionaldrobi_ag& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn;
	zn1 = zn * d.ch;
	racionaldrobi_ag c(ch1, zn1);
	return c;
}
const racionaldrobi_ag& racionaldrobi_ag:: operator++(int) const
{
	int ch1;
	ch1 = ch + zn;
	return *this;
}
std::istream& operator>>(std::istream& output, racionaldrobi_ag& d)
{
	output >> d.ch >> d.zn;
	return output;
}

std::ostream& operator<<(std::ostream& input, const racionaldrobi_ag& d)
{
	input << d.ch << "/" << d.zn;
	return input;
}

void racionaldrobi_na::reduction()
{
	set(ch, zn);
	int x = getnod();
	ch = ch / x;
	zn = zn / x;
}
racionaldrobi_na::racionaldrobi_na() : roditel()
{
	ch = 0;
	zn = 1;
}
racionaldrobi_na::racionaldrobi_na(int a) : roditel(a)
{
	ch = a;
	zn = 1;
	reduction();
}
racionaldrobi_na::racionaldrobi_na(int a, int b) : roditel(a,b)
{
	if (b == 0)
	{
		printf_s("wrong znamenatel (= 0)");
		return;
	}
	ch = a;
	zn = b;
	reduction();
}
const racionaldrobi_na racionaldrobi_na:: operator+(const racionaldrobi_na& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn + d.ch * zn;
	zn1 = zn * d.zn;
	racionaldrobi_na c(ch1, zn1);
	return c;
}
const racionaldrobi_na racionaldrobi_na::operator-(const racionaldrobi_na& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn - d.ch * zn;
	zn1 = zn * d.zn;
	racionaldrobi_na c(ch1, zn1);
	return c;
}
const racionaldrobi_na racionaldrobi_na::operator*(const racionaldrobi_na& d) const
{
	int ch1, zn1;
	ch1 = ch * d.ch;
	zn1 = zn * d.zn;
	racionaldrobi_na c(ch1, zn1);
	return c;
}
const racionaldrobi_na racionaldrobi_na::operator/(const racionaldrobi_na& d) const
{
	int ch1, zn1;
	ch1 = ch * d.zn;
	zn1 = zn * d.ch;
	racionaldrobi_na c(ch1, zn1);
	return c;
}
const racionaldrobi_na& racionaldrobi_na:: operator++(int) const
{
	int ch1;
	ch1 = ch + zn;
	return *this;
}
std::istream& operator>>(std::istream& output, racionaldrobi_na& d)
{
	output >> d.ch >> d.zn;
	return output;
}

std::ostream& operator<<(std::ostream& input, const racionaldrobi_na& d)
{
	input << d.ch << "/" << d.zn;
	return input;
}
