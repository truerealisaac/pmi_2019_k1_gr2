#include "1class.h"
#include "math.h"

#include <iostream>
using namespace std;


class1::class1(const int& a, const int& b)
{
	if (b == 0)
	{
		ch = 0;
		zn = 1;
		nod = 1;
	}
	else
	{
		ch = a;
		zn = b;
		if (a == 0) nod = 1;
		else nod = evklid();
	}
}


void class1::redef(const int& a, const int& b)
{
	ch = a;
	zn = b;
	nod = evklid();
}


int class1::evklid()
{
	int a, b, res;
	a = abs(ch);
	b = abs(zn);
	
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


void class1::reduction()
{
	ch = ch / nod;
	zn = zn / nod;
}


const int class1::get_nod() const
{
	return nod;
}


const int class1::get_ch() const
{
	return ch;
}


const int class1::get_zn() const
{
	return zn;
}


void class1::set_ch(const int& a)
{
	ch = a;
	nod = evklid();
}


void class1::set_zn(const int& a)
{
	zn = a;
	nod = evklid();
}