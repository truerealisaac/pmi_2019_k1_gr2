#include <iostream>
#include <stdio.h>
#include <math.h>
#include "class.h"


Rat::Rat()
{
}

Rat::~Rat()
{
}

void Rat::Set()
{
	std::cin >> p;
	std::cin >> q;
}

void Rat::Set(int a, int b) {
	p = a;
	q = b;
}
void Rat::Set(int a) {
	p = a;
	q = 1;
}

const Rat Rat:: operator + (const Rat& a) {
	Rat c;
	int cp = p * a.q + q * a.p;
	int cq = q * a.q;
	c.socr(cp,cq);
	c.Set(cp, cq);
	return c;
}

const Rat Rat:: operator - (const Rat& a) {
	Rat c;
	int cp = p * a.q - q * a.p;
	int cq = q * a.q;
	c.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Rat Rat:: operator * (const Rat& a) {
	Rat c;
	int cq = q * a.q;
	int cp = p * a.p;
	c.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Rat Rat:: operator / (const Rat& a) {
	Rat c;
	int cq = q * a.p;
	int cp = p * a.q;
	c.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Rat& operator++(Rat& i) {
	i.p = i.p + i.q;
	return i;
}
const Rat operator++(Rat& i, int) {
	Rat oldValue;
	oldValue.Set(i.p, i.q);
	i.p = i.p + i.q;
	return oldValue;
}

void Rat::Show() {
	printf("%d/%d\n", p, q);
}

int Rat::Get_P() {
	return p;
}
int Rat::Get_Q() {
	return q;
}



std::istream& operator>>(std::istream& in, Rat& drob)
{
	std::cout << "Enter p, q:\n";
	in >> drob.p;
	in >> drob.q;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Rat& drob)
{
	out << drob.p << "/" << drob.q << "\n";
	return out;
}
