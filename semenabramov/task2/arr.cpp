#include "arr.h"
#include <stdio.h>

arr::arr()
{
	this->a = 0;
	this->n = 0;
}

int arr::get_one(int i)
{
	return a[i];
}

arr::arr(const arr& b)
{
	n = b.n;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = b.a[i];
	}
	printf("-coop-\n");
}

arr::~arr()
{
	delete[] a;
	n = 0;
	printf("-del-\n");
}

void arr::init(int c)
{
	n = c;
	a = new int[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}
}

void arr::show() {
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = %d\n", i, a[i]);
	}
}
