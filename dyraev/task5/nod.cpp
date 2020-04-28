#include"nod.h"

int nod::find_nod(int chisl,int znam)const
{
	int a, b, temp;
	
	if (chisl > znam)
	{
		a = chisl;
		b = znam;
	}
	else
	{
		a = znam;
		b = chisl;
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
	
	return temp = b;
}