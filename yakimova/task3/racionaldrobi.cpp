#include"racionaldrobi.h"
#include<stdio.h>

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

racionaldrobi::racionaldrobi()
{
	ch = 0;
	zn = 1;
}
racionaldrobi::racionaldrobi(int a)
{
	ch = a;
	zn = 1;
}
racionaldrobi::racionaldrobi(int a, int b)
{
	if (b == 0)
	{
		printf_s("wrong znamenatel (= 0)");
		return;
	}
	ch = a;
	zn = b;
}
void racionaldrobi::reduction()
{
	int a = ch;
	int b = zn;
	int nod;
	if (a > b) 
	{
		nod = evclid(a, b);
	}
	else 
	{
		nod = evclid(b, a);
	}

	ch = ch/ nod;
	zn = zn/ nod;
}
racionaldrobi racionaldrobi:: operator+(const racionaldrobi& d)
{
	ch = ch * d.zn + d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi racionaldrobi::operator-(const racionaldrobi& d)
{
	ch = ch * d.zn - d.ch * zn;
	zn = zn * d.zn;
	racionaldrobi c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi racionaldrobi::operator*(const racionaldrobi& d)
{
	ch = ch * d.ch;
	zn = zn * d.zn;
	racionaldrobi c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi racionaldrobi::operator/(const racionaldrobi& d)
{
	ch = ch * d.zn;
	zn = zn * d.ch;
	racionaldrobi c(ch, zn);
	c.reduction();
	return c;
}
racionaldrobi& racionaldrobi:: operator++(int)
{
	ch = ch + zn;
	return *this;
}


void racionaldrobi::print()
{
	printf("%d/%d\n", ch, zn);
}