#include "class_fraction.h"

fraction fraction::operator+(fraction f)const
{
	fraction temp;
	temp.chisl = chisl * f.znam + znam * f.chisl;
	temp.znam = znam * f.znam;
	return temp;
}

fraction fraction::operator-(fraction f)const
{
	fraction temp;
	temp.chisl = chisl * f.znam - znam * f.chisl;
	temp.znam = znam * f.znam;
	return temp;
}

fraction fraction::operator*(fraction f)const
{
	fraction temp;
	temp.chisl = chisl * f.chisl;
	temp.znam = znam * f.znam;
	return temp;
}

fraction fraction::operator/(fraction f)const
{
	fraction temp;
	temp.chisl = chisl * f.znam;
	temp.znam = znam * f.chisl;
	return temp;
}

fraction& fraction::operator++()
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