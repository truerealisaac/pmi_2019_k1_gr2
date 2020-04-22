#include "NOD.h"


twoNumber::twoNumber()
{
	first = 0;
	second = 0;
}

twoNumber::twoNumber(const int& f, const int& s)
{
	first = f;
	second = s;
}

int twoNumber::findNOD()
{
	int a, b, r;
	if (first > second)
	{
		a = first;
		b = second;
	}
	else
	{
		a = second;
		b = first;
	}
	if (b == 0)
	{
		return a;
	}
	r = a % b;
	while (r != 0)
	{
		a = b;
		b = r;
		r = a % b;
	}
	return b;
}