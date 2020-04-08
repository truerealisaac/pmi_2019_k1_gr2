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

	const rational_fraction operator+(const rational_fraction& drob) const;
	const rational_fraction operator-(const rational_fraction& drob) const;
	const rational_fraction operator*(const rational_fraction& drob) const;
	const rational_fraction operator/(const rational_fraction& drob) const;
private:
	int ch;
	int zn;
	void reduction();
};
