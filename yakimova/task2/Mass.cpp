#include<stdio.h>
#include "Mass.h"

Mass::Mass(int size)
{
	n = size;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = 0;
	}
}

Mass::Mass(Mass& x)
{
	n = x.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = x.a[i];
	}
}

Mass::~Mass()
{
	if (a != 0)
	{
		delete[]a;
	}

}

void Mass::vvod()
{
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d", &a[i]);
	}
}

void Mass::print()
{
	for (int i = 0; i < n; i++)
	{
		printf_s("%d", a[i]);
		printf_s("\n");
	}
}
