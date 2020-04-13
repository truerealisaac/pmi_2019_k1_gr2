#pragma once
#include<iostream>
#include<stdio.h>

class fraction
{
private:
	int znam;
	int chisl;

public:
	fraction():znam(0),chisl(0){}
	

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

};