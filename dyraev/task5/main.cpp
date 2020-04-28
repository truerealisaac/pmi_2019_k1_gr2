#include"class_fraction.h"
#include<iostream>

int main()
{
	fraction1 a(1, 1), b(2, 2), res;
	fraction2 aa(2, 3), bb(3, 3), rres;

	res = a + b;
	rres = aa + bb;

	cout<<"f1: " << res.getC() << "/" << res.getZ()<<endl;
	cout << "f2: " << rres.getC()<<"/"<<rres.getZ()<<endl;
	
	return 0;
}