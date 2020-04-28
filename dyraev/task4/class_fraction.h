#pragma once
#include<iostream>
#include<stdio.h>

using namespace std;

class fraction
{
private:
	int znam;
	int chisl;

public:
	fraction(int z=0,int c=0):znam(z),chisl(c){}
	

	fraction& operator++();
	fraction operator+(const fraction)const;
	fraction operator-(const fraction)const;
	fraction operator*(const fraction)const;
	fraction operator/(const fraction)const;

	//----------------------------------------------------------------------------
	

	void init(int _chisl,int _znam)
	{
		chisl = _chisl;
		znam = _znam;
	}

	void print()
	{
		printf("%d/%d", chisl, znam);
	}

	void space()
	{
		std::cout << " ";
	}
	void enter()
	{
		std::cout << std::endl;
	}

	const int getC()
	{
		return chisl;
	}
	
	const int getZ()
	{
		return znam;
	}
};

ostream & operator << (ostream & , fraction & a);