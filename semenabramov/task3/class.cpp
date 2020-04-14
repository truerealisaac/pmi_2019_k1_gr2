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
	scanf("%d", &p);
	scanf("%d", &q);
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
	int cq = q * a.p;
	c.Set(cp, cq);
	c.Socr();
	return c;
}

const Rat Rat:: operator - (const Rat& a) {
	Rat c;
	int cp = p * a.q - q * a.p;
	int cq = q * a.q;
	c.Set(cp, cq);
	c.Socr();
	return c;
}

const Rat Rat:: operator * (const Rat& a) {
	Rat c;
	int cq = q * a.q;
	int cp = p * a.p;
	c.Set(cp, cq);
	c.Socr();
	return c;
}

const Rat Rat:: operator / (const Rat& a) {
	Rat c;
	int cq = q * a.p;
	int cp = p * a.q;
	c.Set(cp, cq);
	c.Socr();
	return c;
}

const Rat& operator++(Rat& i) {
	i.p= i.p + i.q;
	return i;
}
const Rat operator++(Rat& i, int) {
	Rat oldValue;
	oldValue.Set(i.p, i.q);
	i.p = i.p + i.q;
	return oldValue;
}

void Rat::Show(){
	printf("%d/%d\n",p,q);
}

int Rat::Get_P(){
	return p;
}
int Rat::Get_Q() {
	return q;
}

void Rat::Socr() {
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
void Rat::Flip() {
	int temp = p;
	p = q;
	q = temp;
}