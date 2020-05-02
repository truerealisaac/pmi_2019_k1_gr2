#pragma once
#include "Red.h"
#include <iostream>
class Agr
{
public:
	Agr();
	~Agr();

	void Show();

	void Set();
	void Set(int a);
	void Set(int a, int b);

	const Agr operator + (const Agr& a);
	const Agr operator - (const Agr& a);
	const Agr operator * (const Agr& a);
	const Agr operator / (const Agr& a);

	friend const Agr& operator++(Agr& i);
	friend const Agr operator++(Agr& i, int);

	friend std::istream& operator>>(std::istream& stream, Agr& number);
	friend std::ostream& operator<<(std::ostream& stream, const Agr& number);

	int Get_P();
	int Get_Q();
private:
	int p;
	int q;
	Red scr;
};

