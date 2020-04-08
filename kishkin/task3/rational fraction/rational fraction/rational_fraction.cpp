#include <stdio.h>

#include "rational_fraction.h"

rational_fraction::rational_fraction() {
	ch = 0;
	zn = 1;
}

rational_fraction::rational_fraction(int _ch, int _zn) {
	if (_zn == 0) {
		printf("wrong znamenatel (= 0)");
		return;
	}
	ch = _ch;
	zn = _zn;
}

void rational_fraction::set_ch(int _ch) {
	ch = _ch;
}

void rational_fraction::set_zn(int _zn) {
	if (_zn == 0) {
		printf("wrong znamenatel (= 0)");
		return;
	}
	zn = _zn;
}

int rational_fraction::get_ch() {
	return ch;
}

int rational_fraction::get_zn() {
	return zn;
}




int alg_evk(int max, int min) {
	if (min == 0)
		return max;

	return alg_evk(min, max % min);
}

void rational_fraction::reduction() {
	int ch1 = ch;
	int zn1 = zn;

	int nod;
	if (ch1 > zn1) {
		nod = alg_evk(ch1, zn1);
	}
	else {
		nod = alg_evk(zn1, ch1);
	}

	ch1 = ch1 / nod;
	zn1 = zn1 / nod;
	ch = ch1;
	zn = zn1;
}




void rational_fraction::print() {
	reduction();
	printf("%d/%d", ch, zn);
}