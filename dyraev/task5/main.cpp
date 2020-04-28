#include "class_fraction.h"

int main()
{
	fractionAgr p(2, 3);
	fractionAgr z(4,1),res;
	cout << p<<z;
	res=p / z;
	cout << res;
	return 0;
}