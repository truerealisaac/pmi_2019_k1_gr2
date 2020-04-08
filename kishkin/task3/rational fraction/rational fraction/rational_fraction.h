#pragma once

class rational_fraction {
public:
	rational_fraction();
	rational_fraction(int _ch, int _zn);

	void set_ch(int _ch);
	void set_zn(int zn);
	int get_ch();
	int get_zn();

	void print();

	const rational_fraction operator+(const rational_fraction& drob) const {
		int ch1, zn1;
		ch1 = ch * drob.zn + drob.ch * zn;
		zn1 = zn * drob.zn;
		rational_fraction c(ch1, zn1);

		return c;
	}
private:
	int ch;
	int zn;
	void reduction();
};
