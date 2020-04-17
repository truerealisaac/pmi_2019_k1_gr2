#pragma once

class rational_fraction {
public:
	int ch;
	int zn;

	rational_fraction();
	rational_fraction(int _ch, int _zn);

	void print();

	const rational_fraction operator+(const rational_fraction& drob) const;
	const rational_fraction operator-(const rational_fraction& drob) const;
	const rational_fraction operator*(const rational_fraction& drob) const;
	const rational_fraction operator/(const rational_fraction& drob) const;

	friend const rational_fraction& operator++(rational_fraction& drob);
	friend const rational_fraction operator++(rational_fraction& drob, int);

	friend std::istream& operator>>(std::istream& stream, rational_fraction& number);
	friend std::ostream& operator<<(std::ostream& stream, const rational_fraction& number);
private:
	void reduction();
};
