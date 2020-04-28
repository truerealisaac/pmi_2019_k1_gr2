#include "class_fraction.h"

void fractionAgr::do_normal(int a)
{
	chisl /= a;
	znam /= a;
	return ;
}

fractionAgr fractionAgr::operator+(fractionAgr f)const
{
	fractionAgr temp;
	temp.chisl = chisl * f.znam + znam * f.chisl;
	temp.znam = znam * f.znam;
	return temp;
}

fractionAgr fractionAgr::operator-(fractionAgr f)const
{
	fractionAgr temp;
	temp.chisl = chisl * f.znam - znam * f.chisl;
	temp.znam = znam * f.znam;
	return temp;
}

fractionAgr fractionAgr::operator*(fractionAgr f)const
{
	fractionAgr temp;
	temp.chisl = chisl * f.chisl;
	temp.znam = znam * f.znam;
	int nn = n.find_nod(temp.chisl, temp.znam);
	temp.do_normal(nn);
	return temp;
}

fractionAgr fractionAgr::operator/(fractionAgr f)const
{
	fractionAgr temp;
	temp.chisl = chisl * f.znam;
	temp.znam = znam * f.chisl;
	return temp;
}

fractionAgr& fractionAgr::operator++()
{
	if (znam == 0)
	{
		if (chisl == 0)
		{
			znam++;
			chisl++;
			return *this;
		}

		std::cout << "error_1!" << std::endl;
		return *this;
	}

	if (chisl == 0)
	{
		std::cout << "error_2!" << std::endl;
		return *this;
	}

	chisl += znam;
	
	return *this;
}


ostream & operator << (ostream & o, fractionAgr & a)
{
	o << a.getC() << "/" << a.getZ() << endl;
	return o;
}