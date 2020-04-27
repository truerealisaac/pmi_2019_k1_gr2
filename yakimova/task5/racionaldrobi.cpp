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
	nod.set(ch, zn);
	int x = nod.getnod();
	ch = ch / x;
	zn = zn / x;
}
racionaldrobi_ag::racionaldrobi_ag() : nod(1,1)
{
	ch = 0;
	zn = 1;
	reduction();
}
racionaldrobi_ag::racionaldrobi_ag(int a) : nod(1,1)
{
	ch = a;
	zn = 1;
	reduction();
}
racionaldrobi_ag::racionaldrobi_ag(int a, int b) : nod(1,1)
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

racionaldrobi_ag racionaldrobi_ag:: operator+(const racionaldrobi_ag& d)
{
	ch = ch * d.zn + d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi_ag c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_ag racionaldrobi_ag::operator-(const racionaldrobi_ag& d)
{
	ch = ch * d.zn - d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi_ag c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_ag racionaldrobi_ag::operator*(const racionaldrobi_ag& d)
{
	ch = ch * d.ch;
	zn = zn * d.zn;
	racionaldrobi_ag c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_ag racionaldrobi_ag::operator/(const racionaldrobi_ag& d)
{
	ch = ch * d.zn;
	zn = zn * d.ch;
	racionaldrobi_ag c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_ag& racionaldrobi_ag:: operator++(int)
{
	ch = ch + zn;
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
racionaldrobi_na::racionaldrobi_na() : roditel(1, 1)
{
	ch = 0;
	zn = 1;
}
racionaldrobi_na::racionaldrobi_na(int a) : roditel(1, 1)
{
	ch = a;
	zn = 1;
}
racionaldrobi_na::racionaldrobi_na(int a, int b) : roditel(1,1)
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
racionaldrobi_na racionaldrobi_na:: operator+(const racionaldrobi_na& d)
{
	ch = ch * d.zn + d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi_na c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_na racionaldrobi_na::operator-(const racionaldrobi_na& d)
{
	ch = ch * d.zn - d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi_na c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_na racionaldrobi_na::operator*(const racionaldrobi_na& d)
{
	ch = ch * d.ch;
	zn = zn * d.zn;
	racionaldrobi_na c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_na racionaldrobi_na::operator/(const racionaldrobi_na& d)
{
	ch = ch * d.zn;
	zn = zn * d.ch;
	racionaldrobi_na c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi_na& racionaldrobi_na:: operator++(int)
{
	ch = ch + zn;
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
