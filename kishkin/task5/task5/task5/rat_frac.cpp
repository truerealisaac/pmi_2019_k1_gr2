#include <iostream>

#include "rat_frac.h"

int alg_evk(int max, int min) {
	if (min == 0) {
		if (max >= 0)
			return max;
		else
			return -max;
	}

	return alg_evk(min, max % min);
}

nod::nod() {
	num = 1;
}

nod::nod(int num1, int num2) {
	if (num1 >= num2)
		num = alg_evk(num1, num2);
	else
		num = alg_evk(num2, num1);
}

void nod::setNod(int _num) {
	num = _num;
}

void nod::searchNod(int num1, int num2) {
	if (num1 >= num2)
		num = alg_evk(num1, num2);
	else
		num = alg_evk(num2, num1);
}

int nod::getNod() {
	return num;
}






rat_frac1::rat_frac1() {
	ch = 0;
	zn = 1;
	nodChZn.setNod(1);
}

rat_frac1::rat_frac1(int _ch, int _zn) {
	if (_zn == 0) {
		std::cout << "wrong znamenatel (= 0). zn = 1";
		ch = _ch;
		zn = _zn;
		nodChZn.setNod(1);
	}
	nod nod(_ch, _zn);
	ch = _ch / nod.getNod();
	zn = _zn / nod.getNod();
	nodChZn.setNod(1);
}

const rat_frac1 rat_frac1::operator+(const rat_frac1& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn + drob.ch * zn;
	zn1 = zn * drob.zn;
	rat_frac1 c(ch1, zn1);

	return c;
}

const rat_frac1 rat_frac1::operator-(const rat_frac1& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn - drob.ch * zn;
	zn1 = zn * drob.zn;
	rat_frac1 c(ch1, zn1);

	return c;
}

const rat_frac1 rat_frac1::operator*(const rat_frac1& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.ch;
	zn1 = zn * drob.zn;
	rat_frac1 c(ch1, zn1);

	return c;
}

const rat_frac1 rat_frac1::operator/(const rat_frac1& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn;
	zn1 = zn * drob.ch;
	rat_frac1 c(ch1, zn1);

	return c;
}

std::istream& operator>>(std::istream& in, rat_frac1& drob) {
	std::cout << "Enter ch, zn:\n";
	in >> drob.ch >> drob.zn;

	return in;
}

std::ostream& operator<<(std::ostream& out, const rat_frac1& drob) {
	out << drob.ch << "/" << drob.zn;
	return out;
}






rat_frac2::rat_frac2() {
	ch = 0;
	zn = 1;
	num = 1;
}

rat_frac2::rat_frac2(int _ch, int _zn) {
	if (_zn == 0) {
		std::cout << "wrong znamenatel (= 0). zn = 1";
		ch = _ch;
		zn = _zn;
		num = 1;
	}
	nod nod(_ch, _zn);
	ch = _ch / nod.getNod();
	zn = _zn / nod.getNod();
	num = 1;
}

const rat_frac2 rat_frac2::operator+(const rat_frac2& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn + drob.ch * zn;
	zn1 = zn * drob.zn;
	rat_frac2 c(ch1, zn1);

	return c;
}

const rat_frac2 rat_frac2::operator-(const rat_frac2& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn - drob.ch * zn;
	zn1 = zn * drob.zn;
	rat_frac2 c(ch1, zn1);

	return c;
}

const rat_frac2 rat_frac2::operator*(const rat_frac2& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.ch;
	zn1 = zn * drob.zn;
	rat_frac2 c(ch1, zn1);

	return c;
}

const rat_frac2 rat_frac2::operator/(const rat_frac2& drob) const {
	int ch1, zn1;
	ch1 = ch * drob.zn;
	zn1 = zn * drob.ch;
	rat_frac2 c(ch1, zn1);

	return c;
}

std::istream& operator>>(std::istream& in, rat_frac2& drob) {
	std::cout << "Enter ch, zn:\n";
	in >> drob.ch >> drob.zn;

	return in;
}

std::ostream& operator<<(std::ostream& out, const rat_frac2& drob) {
	out << drob.ch << "/" << drob.zn;
	return out;
}