#pragma once
#include<iostream>
#include<stdio.h>
#include"nod.h"

using namespace std;

class fractionAgr
{
private:
	int znam;
	int chisl;
	nod n;
	void do_normal(int);
	

public:
	fractionAgr(int z=1,int c=0):znam(z),chisl(c){}
	fractionAgr(fractionAgr&a)
	{
		znam = a.znam;
		chisl = a.chisl;
	}

	fractionAgr& operator++();
	fractionAgr operator+(const fractionAgr)const;
	fractionAgr operator-(const fractionAgr)const;
	fractionAgr operator*(const fractionAgr)const;
	fractionAgr operator/(const fractionAgr)const;
	
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




ostream & operator << (ostream & , fractionAgr & a);