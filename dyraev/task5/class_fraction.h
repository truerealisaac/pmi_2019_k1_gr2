#pragma once
#include <iostream>


using namespace std;


class nod
{
public:
	int find_nod(int, int);
};

class fraction1
{
private:
	int c;
	int z;
	nod n;
	void do_normal(int);

public:
	fraction1(int _c = 0, int _z = 1) :c(_c), z(_z)
	{
		if (_z == 0)
		{
			cout << "wrong znam!\n";
			c = 0;
			z = 1;
		}
	}

	fraction1 operator+(const fraction1&);
	fraction1 operator-(const fraction1&);
	fraction1 operator*(const fraction1&);
	fraction1 operator/(const fraction1&);


	int getC()
	{
		return c;
	}
	int getZ()
	{
		return z;
	}
};
//-----------------------------------------------------------------------------------
class fraction2:private nod
{
private:
	int c;
	int z;

	void do_normal(int);

public:
	fraction2(int _c = 0, int _z = 1) :c(_c), z(_z)
	{
		if (_z == 0)
		{
			cout << "wrong znam!\n";
			c = 0;
			z = 1;
		}
	}

	fraction2 operator+(const fraction2&);
	fraction2 operator-(const fraction2&);
	fraction2 operator*(const fraction2&);
	fraction2 operator/(const fraction2&);


	int getC()
	{
		return c;
	}
	int getZ()
	{
		return z;
	}
};

//ostream& operator << (ostream& o, fraction2 & f)
//{
//	return o;
//}