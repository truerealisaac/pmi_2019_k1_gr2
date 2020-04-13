 #pragma once

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

	void print();
};

