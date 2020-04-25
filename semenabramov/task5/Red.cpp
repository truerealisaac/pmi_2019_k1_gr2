#include "Red.h"
#include <math.h>


void Red::socr(int& p, int& q) {
	int a = abs(p);
	int b = abs(q);

	while (a != b) {
		if (a > b) {
			long tmp = a;
			a = b;
			b = tmp;
		}
		b = b - a;
	}
	p = p / a;
	q = q / a;
}