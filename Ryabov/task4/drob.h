#pragma once
#include <iostream>
using namespace std;
class RacDrob {
public:
	RacDrob();
	RacDrob(int _ch, int _zn);
	void print();
	void setzn(int _zn);
	int getzn();
	void setch(int _ch);
	int getch();
	
	const RacDrob operator+(const RacDrob& drob);
	const RacDrob operator-(const RacDrob& drob);
	const RacDrob operator*(const RacDrob& drob);
	const RacDrob operator/(const RacDrob& drob);
	friend ostream& operator<<(ostream& output, const RacDrob& drob);
	friend istream& operator>>(istream& input, RacDrob& drob);
	RacDrob& operator++(int);
private:
	int zn;
	int ch;
	void red();

};
