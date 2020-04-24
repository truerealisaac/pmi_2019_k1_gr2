#include"rational.h"
#include<math.h>
#include<stdio.h>

gcd::gcd(const int &x,const int& y)
{
    this->x = x;
    this->y = y;
    nod = nodFunc();
}

void gcd::setXY(const int &x,const int& y)
{
    this->x = x;
    this->y = y;
    nod = nodFunc();
}

int gcd::getNod()
{
    return nod;
}

int gcd::nodFunc()
{
    int a = abs(x);
    int b = abs(y);
    if (b > a)
    {
        int t = a;
        a = b;
        b = t;
    }

    int k = a;
    while(b != 0)
    {
        a = b;
        b = k % b;
        k = a;
    }

    return k;
}

rationalA::rationalA(const int &_p,const int &_q) : nod(1, 1)
{
    p = _p;
    if (_q == 0) q = 1;
        else q = _q;
    if (q < 0)
    {
        p = -p;
        q = -q;
    }
    
    gcdFunc();
}

rationalA rationalA::operator+(const rationalA& x)
{
    rationalA res(0, 1);
    res.q = q * x.q;
    res.p = res.q / q * p + res.q / x.q * x.p;
    res.gcdFunc();
    return res;
}

rationalA rationalA::operator-(const rationalA& x)
{
    rationalA res(0, 1);
    res.q = q * x.q;
    res.p = res.q / q * p - res.q / x.q * x.p;
    res.gcdFunc();
    return res;
}

rationalA rationalA::operator*(const rationalA& x)
{
    rationalA res(0, 1);
    res.p = p * x.p;
    res.q = q * x.q;
    res.gcdFunc();
    return res;
}

rationalA rationalA::operator/(const rationalA& x)
{
    rationalA res(0, 1);
    if (x.p == 0)
    {
        printf("%s", "Error!\n");
        return *this;
    }
    res.p = p * x.q;
    res.q = q * x.p;
    res.gcdFunc();
    return res;
}

rationalA rationalA::operator++(int)
{
    rationalA temp = *this;
    p += q;
    return temp;
}

rationalA rationalA::operator--(int)
{
    rationalA temp = *this;
    p -= q;
    return temp;
}

rationalA& rationalA::operator++()
{
    p += q;
    return *this;
}

rationalA& rationalA::operator--()
{
    p -= q;
    return *this;
}

istream& operator>>(istream& stream, rationalA& x)
{
    cout << "Enter p,q: ";
    stream >> x.p >> x.q;
    if (x.q == 0) x.q = 1;
    if (x.q < 0)
    {
        x.p = -x.p;
        x.q = -x.q;
    }
	return stream;
}

ostream& operator<<(ostream& stream, const rationalA& x)
{
    stream << x.p << "/" << x.q;
	return stream;
}

int rationalA::gcdFunc()
{
    nod.setXY(p, q);
    int x = nod.getNod();
    p /= x;
    q /= x;
}

rationalN::rationalN(const int &_p,const int &_q) : gcd(1, 1)
{
    p = _p;
    if (_q == 0) q = 1;
        else q = _q;
    if (q < 0)
    {
        p = -p;
        q = -q;
    }
    gcdFunc();

}

rationalN rationalN::operator+(const rationalN& x)
{
    rationalN res(0, 1);
    res.q = q * x.q;
    res.p = res.q / q * p + res.q / x.q * x.p;
    res.gcdFunc();
    return res;
}

rationalN rationalN::operator-(const rationalN& x)
{
    rationalN res(0, 1);
    res.q = q * x.q;
    res.p = res.q / q * p - res.q / x.q * x.p;
    res.gcdFunc();
    return res;
}

rationalN rationalN::operator*(const rationalN& x)
{
    rationalN res(0, 1);
    res.p = p * x.p;
    res.q = q * x.q;
    res.gcdFunc();
    return res;
}

rationalN rationalN::operator/(const rationalN& x)
{
    rationalN res(0, 1);
    if (x.p == 0)
    {
        printf("%s", "Error!\n");
        return *this;
    }
    res.p = p * x.q;
    res.q = q * x.p;
    res.gcdFunc();
    return res;
}

rationalN rationalN::operator++(int)
{
    rationalN temp = *this;
    p += q;
    return temp;
}

rationalN rationalN::operator--(int)
{
    rationalN temp = *this;
    p -= q;
    return temp;
}

rationalN& rationalN::operator++()
{
    p += q;
    return *this;
}

rationalN& rationalN::operator--()
{
    p -= q;
    return *this;
}

istream& operator>>(istream& stream, rationalN& x)
{
    cout << "Enter p,q: ";
    stream >> x.p >> x.q;
    if (x.q == 0) x.q = 1;
    if (x.q < 0)
    {
        x.p = -x.p;
        x.q = -x.q;
    }
	return stream;
}

ostream& operator<<(ostream& stream, const rationalN& x)
{
    stream << x.p << "/" << x.q;
	return stream;
}

int rationalN::gcdFunc()
{
    setXY(p, q);
    int x = getNod();
    p /= x;
    q /= x;
}