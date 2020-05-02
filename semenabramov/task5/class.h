#pragma once
#include "Red.h"

class Rat: public Red
{
public:
	Rat();
	~Rat();

	void Show();

	void Set();
	void Set(int a);
	void Set(int a, int b);

	const Rat operator + (const Rat& a);
	const Rat operator - (const Rat& a);
	const Rat operator * (const Rat& a);
	const Rat operator / (const Rat& a);

	friend const Rat& operator++(Rat& i);
	friend const Rat operator++(Rat& i, int);

	friend std::istream& operator>>(std::istream& stream, Rat& number);
	friend std::ostream& operator<<(std::ostream& stream, const Rat& number);

	int Get_P();
	int Get_Q();
private:
	int p;
	int q;
};

