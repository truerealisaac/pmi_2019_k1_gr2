#include"racionaldrobi.h"
#include <stdio.h>

int main()
{
	racionaldrobi A(3, 5), B(6, 9);
	A = A + B;
	A.print();

	A= A - B;
	A.print();

	A = A * B;
	A.print();

	A= A / B;
	A.print();

	A++;
	A.print();

	return 0;
}