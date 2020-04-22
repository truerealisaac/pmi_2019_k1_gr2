#pragma once

class nod {
protected:
	int num;
public:
	nod();
	nod(int num1, int num2);

	void setNod(int _num);
	void searchNod(int num1, int num2);
	int getNod();
};

class rat_frac1 {
private:
	int ch;
	int zn;
	nod nodChZn;
public:
	rat_frac1();
	rat_frac1(int _ch, int _zn);

	const rat_frac1 operator+(const rat_frac1& drob) const;
	const rat_frac1 operator-(const rat_frac1& drob) const;
	const rat_frac1 operator*(const rat_frac1& drob) const;
	const rat_frac1 operator/(const rat_frac1& drob) const;

	friend std::istream& operator>>(std::istream& stream, rat_frac1& number);
	friend std::ostream& operator<<(std::ostream& stream, const rat_frac1& number);
};

class rat_frac2: public nod {
private:
	int ch;
	int zn;
public:
	rat_frac2();
	rat_frac2(int _ch, int _zn);

	const rat_frac2 operator+(const rat_frac2& drob) const;
	const rat_frac2 operator-(const rat_frac2& drob) const;
	const rat_frac2 operator*(const rat_frac2& drob) const;
	const rat_frac2 operator/(const rat_frac2& drob) const;

	friend std::istream& operator>>(std::istream& stream, rat_frac2& number);
	friend std::ostream& operator<<(std::ostream& stream, const rat_frac2& number);
};