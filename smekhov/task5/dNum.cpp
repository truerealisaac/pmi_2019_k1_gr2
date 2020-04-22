#include "dNum.h"
#include "NOD.h"
#include <iostream>

//dNumA

void dNumA::reduction()
{
	int b = n.findNOD();
	n.first = n.first / b;
	n.second = n.second / b;
}

dNumA::dNumA()
{
	n.first = 0;
	n.second = 1;
}

dNumA::dNumA(const int& a)
{
	n.first = a;
	n.second = 1;
}

dNumA::dNumA(const int& a, const int& b)
{
	if (b == 0)
	{
		printf("Wrong number! Created 0 / 1.\n");
		n.first = 0;
		n.second = 1;
	}
	else
	{
		if (b < 0)
		{
			n.first = -a;
			n.second = -b;
		}
		else
		{
			n.first = a;
			n.second = b;
		}
		this->reduction();
	}
}

dNumA& dNumA::operator+(const dNumA& num2)
{
	n.first = n.first * num2.n.second + num2.n.first * n.second;
	n.second *= num2.n.second;
	this->reduction();
	return *this;
}

dNumA& dNumA::operator-(const dNumA& num2)
{
	n.first = n.first * num2.n.second - num2.n.first * n.second;
	n.first *= num2.n.second;
	this->reduction();
	return *this;
}

dNumA& dNumA::operator*(const dNumA& num2)
{
	n.first *= num2.n.first;
	n.second *= num2.n.second;
	this->reduction();
	return *this;
}

dNumA& dNumA::operator/(const dNumA& num2)
{
	if (num2.n.second == 0)
	{
		printf("Wrong second number!\n");
		return *this;
	}
	n.first *= num2.n.second;
	n.second *= num2.n.first;
	this->reduction();
	return *this;
}

dNumA& dNumA::operator++(int)
{
	n.first += n.second;
	if (n.first == 0) n.second = 1;
	return *this;
}

dNumA& dNumA::operator--(int)
{
	n.first -= n.second;
	if (n.first == 0) n.second = 1;
	return *this;
}

std::istream& operator>>(std::istream& stream, dNumA& number)
{
	stream >> number.n.first >> number.n.second;
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const dNumA& number)
{
	stream << number.n.first << " / " << number.n.second;
	return stream;
}

//dNumN

void dNumN::reduction()
{
	int b = findNOD();
	first = first / b;
	second = second / b;
}

dNumN::dNumN()
{
	first = 0;
	second = 1;
}

dNumN::dNumN(const int& a)
{
	first = a;
	second = 1;
}

dNumN::dNumN(const int& a, const int& b)
{
	if (b == 0)
	{
		printf("Wrong number! Created 0 / 1.\n");
		first = 0;
		second = 1;
	}
	else
	{
		if (b < 0)
		{
			first = -a;
			second = -b;
		}
		else
		{
			first = a;
			second = b;
		}
		this->reduction();
	}
}

dNumN& dNumN::operator+(const dNumN& num2)
{
	first = first * num2.second + num2.first * second;
	second *= num2.second;
	this->reduction();
	return *this;
}

dNumN& dNumN::operator-(const dNumN& num2)
{
	first = first * num2.second - num2.first * second;
	first *= num2.second;
	this->reduction();
	return *this;
}

dNumN& dNumN::operator*(const dNumN& num2)
{
	first *= num2.first;
	second *= num2.second;
	this->reduction();
	return *this;
}

dNumN& dNumN::operator/(const dNumN& num2)
{
	if (num2.second == 0)
	{
		printf("Wrong second number!\n");
		return *this;
	}
	first *= num2.second;
	second *= num2.first;
	this->reduction();
	return *this;
}

dNumN& dNumN::operator++(int)
{
	first += second;
	if (first == 0) second = 1;
	return *this;
}

dNumN& dNumN::operator--(int)
{
	first -= second;
	if (first == 0) second = 1;
	return *this;
}

std::istream& operator>>(std::istream& stream, dNumN& number)
{
	stream >> number.first >> number.second;
	return stream;
}
std::ostream& operator<<(std::ostream& stream, const dNumN& number)
{
	stream << number.first << " / " << number.second;
	return stream;
}