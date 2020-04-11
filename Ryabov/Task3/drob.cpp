#include <stdio.h>
#include "drob.h"
#include <stdlib.h>
RacDrob::RacDrob() {
	ch = 1;
	zn = 1;
}
RacDrob::RacDrob(int _ch,int _zn) {
	if (_zn == 0) {
		printf("wrong denominator, please try again");
			return;
	}
	zn = _zn;
	ch = _ch;
}
void RacDrob::print() { 
	printf("%d/%d", ch, zn);
	printf("\n");
}
void RacDrob::setch(int _ch) {
	ch = _ch;
}
void RacDrob::setzn(int _zn) {
	ch = _zn;
}
int RacDrob::getch() {
	return ch;
}
int RacDrob::getzn() {
	return zn;
}
int NOD(int a, int b){
	int res;
	while (b != 0)
	{
		res = a % b;
		a = b;
		b = res;
	}
	return a;
}
void RacDrob::red(){
	int res;
	int ch1, zn1;
	ch1 = ch;
	zn1 = zn;
	if (ch > zn)
		res = NOD(ch, zn);
	else
		res = NOD(zn, ch);
	ch = ch /abs ( res);
	zn = zn /abs ( res);
}
const RacDrob RacDrob::operator+(const RacDrob& drob){
	int ch1, zn1;
	ch1 = ch * drob.zn + drob.ch * zn;
	zn1 = zn * drob.zn;
	RacDrob c(ch1, zn1);
	c.red();
	return c;
}
const RacDrob RacDrob::operator-(const RacDrob& drob) {
	int ch1, zn1;
	ch1 = ch * drob.zn - drob.ch * zn;
	zn1 = zn * drob.zn;
	RacDrob c(ch1, zn1);
	c.red();
	return c;
}
const RacDrob RacDrob::operator*(const RacDrob& drob) {
	int ch1, zn1;
	ch1 = ch * drob.ch;
	zn1 = zn * drob.zn;
	RacDrob c(ch1, zn1);
	c.red();
	return c;
}
const RacDrob RacDrob::operator/(const RacDrob& drob) {
	int ch1, zn1;
	ch1 = ch * drob.zn;
	zn1 = zn * drob.ch;
	RacDrob c(ch1, zn1);
	c.red();
	return c;
}
 RacDrob& RacDrob :: operator++(int){
	ch = ch +zn;
	
	return *this;
}
