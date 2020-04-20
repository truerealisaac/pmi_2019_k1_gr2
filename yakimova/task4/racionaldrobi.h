 #pragma once
#include <iostream>

class racionaldrobi
{
	int ch;
	int zn;
	void reduction();

public:
	racionaldrobi();
	racionaldrobi(int a);
	racionaldrobi(int a, int b);
	racionaldrobi operator+(const racionaldrobi& d);
	racionaldrobi operator-(const racionaldrobi& d);
	racionaldrobi operator*(const racionaldrobi& d);
	racionaldrobi operator/(const racionaldrobi& d);
	racionaldrobi& operator++(int);
	friend std::istream& operator>>(std::istream& output, racionaldrobi& d);
	friend std::ostream& operator<<(std::ostream& input, const racionaldrobi& d);

	void print();
};

