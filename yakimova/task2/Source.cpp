#include<stdio.h>
#include"Mass.h"

void prr(Mass S)
{
	S.print();
}

int main()
{
	Mass B(10);
	B.vvod();
	B.print();
	prr(B);
	return 0;
}