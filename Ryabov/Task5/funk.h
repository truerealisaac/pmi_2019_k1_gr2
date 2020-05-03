#pragma once
#include <iostream>
using namespace std;

class baseclass
{
protected:
	int first, second, nod;
	int evklid();

public:
	baseclass (const int & a = 0, const int & b = 0);
	void redef(const int& a, const int& b);

	void red();

	const int get_nod() const;
	const int get_first() const;
	const int get_second() const;
	void set_second(const int& f);
	void set_first(const int& s);
};


class RedClass
{
private:
	baseclass object;

public:
	RedClass();
	RedClass(const int& a);
	RedClass(const int& a, const int& b);

	RedClass& operator+(const RedClass& a);
	RedClass& operator-(const RedClass& a);
	RedClass& operator*(const RedClass& a);
	RedClass& operator/(const RedClass& a);
	RedClass& operator++(int);

	friend istream& operator>>(istream& in, RedClass& a);
	friend ostream& operator<<(ostream& out, const RedClass& a);
};
class newclass : private baseclass
{
public:
	newclass();
	newclass(const int& a);
	newclass(const int& a, const int& b);

	newclass& operator+(const newclass& a);
	newclass& operator-(const newclass& a);
	newclass& operator*(const newclass& a);
	newclass& operator/(const newclass& a);
	newclass& operator++(int);

	friend istream& operator>>(istream& in, newclass& a);
	friend ostream& operator<<(ostream& out, const newclass& a);
};
