#include"class_fraction.h"

int nod::find_nod(int ch, int zn)
{
	int a, b, temp;

	if (ch > zn)
	{
		a = ch;
		b = zn;
	}
	else
	{
		a = zn;
		b = ch;
	}
	if (b == 0)
		return a;
	
	temp = a % b;
	while (temp != 0)
	{
		a = b;
		b = temp;
		temp = a % b;
	}
	return b;
}