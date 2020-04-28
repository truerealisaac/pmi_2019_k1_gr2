#include"class_fraction.h"



//------------------------------------------fraction1---------------------------------------------

void fraction1::do_normal(int a)
{
	c /= a;
	z /= a;
}

fraction1 fraction1::operator+(const fraction1& a)
{
	fraction1 temp;
	temp.c = c * a.z + a.c*z;
	temp.z = z * a.z;
	temp.do_normal(n.find_nod(temp.c, temp.z));
	return temp;
}
fraction1 fraction1::operator-(const fraction1& a)
{
	fraction1 temp;
	temp.c = c * a.z - a.c*z;
	temp.z = z * a.z;
	temp.do_normal(n.find_nod(temp.c, temp.z));
	return temp;
}
fraction1 fraction1::operator*(const fraction1& a)
{
	fraction1 temp;
	temp.c = c*a.c;
	temp.z = z * a.z;
	temp.do_normal(n.find_nod(temp.c, temp.z));
	return temp;
}
fraction1 fraction1::operator/(const fraction1& a)
{
	fraction1 temp;
	temp.c = c *z;
	temp.z = z * a.c;
	temp.do_normal(n.find_nod(temp.c, temp.z));
	return temp;
}

//------------------------------------------fraction2---------------------------------------------


void fraction2::do_normal(int a)
{
	c /= a;
	z /= a;
}

fraction2 fraction2::operator+(const fraction2& a)
{
	fraction2 temp;
	temp.c = c * a.z + a.c*z;
	temp.z = z * a.z;
	temp.do_normal(find_nod(temp.c, temp.z));
	return temp;
}
fraction2 fraction2::operator-(const fraction2& a)
{
	fraction2 temp;
	temp.c = c * a.z - a.c*z;
	temp.z = z * a.z;
	temp.do_normal(find_nod(temp.c, temp.z));
	return temp;
}
fraction2 fraction2::operator*(const fraction2& a)
{
	fraction2 temp;
	temp.c = c * a.c;
	temp.z = z * a.z;
	temp.do_normal(find_nod(temp.c, temp.z));
	return temp;
}
fraction2 fraction2::operator/(const fraction2& a)
{
	fraction2 temp;
	temp.c = c * z;
	temp.z = z * a.c;
	temp.do_normal(find_nod(temp.c, temp.z));
	return temp;
}