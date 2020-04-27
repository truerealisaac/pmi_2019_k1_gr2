#pragma once
#include <iostream>

class roditel
{
	int x, y;
	int nod;
    public:
    roditel(const int &x,const int& y);
	int getnod();
	void set(const int& x, const int& y);// на всякий
};


class racionaldrobi_ag
{
	int ch;
	int zn;
	roditel nod;
	void reduction();

public:
	racionaldrobi_ag();
	racionaldrobi_ag(int a);
	racionaldrobi_ag(int a, int b);
	racionaldrobi_ag operator+(const racionaldrobi_ag& d);
	racionaldrobi_ag operator-(const racionaldrobi_ag& d);
	racionaldrobi_ag operator*(const racionaldrobi_ag& d);
	racionaldrobi_ag operator/(const racionaldrobi_ag& d);
	racionaldrobi_ag& operator++(int);
	friend std::istream& operator>>(std::istream& output, racionaldrobi_ag& d);
	friend std::ostream& operator<<(std::ostream& input, const racionaldrobi_ag& d);
};
class racionaldrobi_na : roditel
{
	int ch;
	int zn;
	void reduction();

public:
	racionaldrobi_na();
	racionaldrobi_na(int a);
	racionaldrobi_na(int a, int b);
	racionaldrobi_na operator+(const racionaldrobi_na& d);
	racionaldrobi_na operator-(const racionaldrobi_na& d);
	racionaldrobi_na operator*(const racionaldrobi_na& d);
	racionaldrobi_na operator/(const racionaldrobi_na& d);
	racionaldrobi_na& operator++(int);
	friend std::istream& operator>>(std::istream& output, racionaldrobi_na& d);
	friend std::ostream& operator<<(std::ostream& input, const racionaldrobi_na& d);
};
