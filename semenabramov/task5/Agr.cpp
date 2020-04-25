#include "Agr.h"
#include <iostream>
#include <stdio.h>
#include <math.h>


Agr::Agr()
{
}

Agr::~Agr()
{
}

void Agr::Set()
{
	scanf("%d", &p);
	scanf("%d", &q);
}

void Agr::Set(int a, int b) {
	p = a;
	q = b;
}
void Agr::Set(int a) {
	p = a;
	q = 1;
}

const Agr Agr:: operator + (const Agr& a) {
	Agr c;
	int cp = p * a.q + q * a.p;
	int cq = q * a.q;
	scr.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Agr Agr:: operator - (const Agr& a) {
	Agr c;
	int cp = p * a.q - q * a.p;
	int cq = q * a.q;
	scr.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Agr Agr:: operator * (const Agr& a) {
	Agr c;
	int cq = q * a.q;
	int cp = p * a.p;
	scr.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Agr Agr:: operator / (const Agr& a) {
	Agr c;
	int cq = q * a.p;
	int cp = p * a.q;
	scr.socr(cp, cq);
	c.Set(cp, cq);
	return c;
}

const Agr& operator++(Agr& i) {
	i.p = i.p + i.q;
	return i;
}
const Agr operator++(Agr& i, int) {
	Agr oldValue;
	oldValue.Set(i.p, i.q);
	i.p = i.p + i.q;
	return oldValue;
}

void Agr::Show() {
	printf("%d/%d\n", p, q);
}

int Agr::Get_P() {
	return p;
}
int Agr::Get_Q() {
	return q;
}



std::istream& operator>>(std::istream& in, Agr& drob)
{
	std::cout << "Enter p, q:\n";
	in >> drob.p;
	in >> drob.q;
	return in;
}

std::ostream& operator<<(std::ostream& out, const Agr& drob)
{
	out << drob.p << "/" << drob.q << "\n";
	return out;
}