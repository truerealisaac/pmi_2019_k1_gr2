#include "rational.h"
#include <math.h>
#include <iostream>
#include <stdlib.h>

NOD::NOD(const int &n,const int& m)
{
    this->n = n;
    this->m = m;
    nod = nodf();
}

void NOD::setnod(const int &n,const int& m)
{
    this->n = n;
    this->m = m;
    nod = nodf();
}

int NOD::getnod()
{
    return nod;
}

int NOD::nodf()
{
    int a = abs(n);
    int b = abs(m);
    if (a < b)
    {
        int temp = a;
        a = b;
        b = temp;
    }

     int f;
     while (b != 0)
     {
         f = a % b;
         a = b;
         b = f;
     }
     return a;
}

rational::rational(const int &ch,const int &zn) : nod (1, 1)
{
    num = ch;
    if (zn == 0) den = 1;
        else den = zn;
    if (den < 0)
    {
        num = num*(-1);
        den = den*(-1);
    }

     rationalf();
}

rational rational::operator+(const rational& s)
{
    rational r(0, 1);
    r.den = den * s.den;
    r.num = r.den / den * num + r.den / s.den * s.num;
    r.rationalf();
    return r;
}

rational rational::operator-(const rational& s)
{
    rational r(0, 1);
    r.den = den * s.den;
    r.num = r.den / den * num - r.den / s.den * s.num;
    r.rationalf();
    return r;
}

rational rational::operator*(const rational& s)
{
    rational r(0, 1);
    r.num = num * s.num;
    r.den = den * s.den;
    r.rationalf();
    return r;
}

rational rational::operator/(const rational& s)
{
    rational r(0, 1);
    if (s.num == 0)
    {
        cout << "proishodit delenie na zero! \n";
        exit(1);
    }
    r.num = num * s.den;
    r.den = den * s.num;
    r.rationalf();
    return r;
}

rational rational::operator++(int)
{
    rational t = *this;
    num = num + den;
    return t;
}

rational& rational::operator++()
{
    num = num + den;
    return *this;
}

istream& operator>>(istream& output, rational& s)
{
   output >> s.num >> s.den;
   return output;
}

ostream& operator<<(ostream& input, const rational& s)
{
   input << s.num << "/" << s.den;
   return input;
}

void rational::print()
{
   printf("%d/%d \n", num, den);
}

int rational::rationalf()
{
    nod.setnod(num, den);
    int x = nod.getnod();
    num /= x;
    den /= x;
    return 0;
}


frational::frational(const int &ch,const int &zn) : NOD(1, 1)
{
    num = ch;
    if (zn == 0) den = 1;
        else den = zn;
    if (den < 0)
    {
        num = num*(-1);
        den = den*(-1);
    }
    rationalf();

 }

frational frational::operator+(const frational& s)
{
    frational r(0, 1);
    r.den = den * s.den;
    r.num = r.den / den * num + r.den / s.den * s.num;
    r.rationalf();
    return r;
}

frational frational::operator-(const frational& s)
{
    frational r(0, 1);
    r.den = den * s.den;
    r.num = r.den / den * num - r.den / s.den * s.num;
    r.rationalf();
    return r;
}

frational frational::operator*(const frational& s)
{
    frational r(0, 1);
    r.num = num * s.num;
    r.den = den * s.den;
    r.rationalf();
    return r;
}

frational frational::operator/(const frational& s)
{
    frational r(0, 1);
    if (s.num == 0)
    {
        cout << "proishodit delenie na zero! \n";
        exit(1);
    }
    r.num = num * s.den;
    r.den = den * s.num;
    r.rationalf();
    return r;
}

frational frational::operator++(int)
{
    frational temp = *this;
    num = num + den;
    return temp;
}

frational& frational::operator++()
{
    num = num + den;
    return *this;
}

istream& operator>>(istream& output, frational& s)
 {
    output >> s.num >> s.den;
    return output;
 }

ostream& operator<<(ostream& input, const frational& s)
 {
    input << s.num << "/" << s.den;
    return input;
 }

void frational::print()
 {
    printf("%d/%d \n", num, den);
 }

int frational::rationalf()
{
    setnod(num, den);
    int x = getnod();
    num /= x;
    den /= x;
    return 0;
}
