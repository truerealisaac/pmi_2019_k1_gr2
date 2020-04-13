#include "operation.h"


int main()
{
	/*int ch1, zn1, ch2, zn2;
	printf("input ch1:  ");
	scanf("%d", &ch1);
	printf("input zn1:  ");
	scanf("%d", &zn1);

	printf("input ch2:  ");
	scanf("%d", &ch2);
	printf("input zn2:  ");
	scanf("%d", &zn2);
	if ((zn1 == 0) || (zn2 == 0))
	{
		printf("wrong zn=0");
		return -1;
	}
	drob d(ch1, zn1);
	drob e(ch2, zn2);*/
	drob a(18,32), b(7,63);
	
	drob c = a + b;
	c.print();
	printf("\n");
	
	c = a - b;
	c.print();
	printf("\n");
	
	c = a * b;
	c.print();
	printf("\n");
	
	c = a / b;
	c.print();
	printf("\n");
	
	++b;
	b.print();
	printf("\n");

	a++;
	a.print();
	printf("\n");
	return 0;
}