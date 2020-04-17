#include"rational.h"
#include<math.h>

rational::rational(const int &_p,const int &_q)
{
    p = _p;
    if (_q == 0) q = 1;
        else q = _q;
    if (q < 0)
    {
        p = -p;
        q = -q;
    }
    int nod = gcd(p, q);
    p/=nod;
    q/=nod;

}

rational rational::operator+(const rational& x)
{
    rational res(0, 1);
    int nod = gcd(q, x.q);
    res.q = (q * x.q) / nod;
    res.p = res.q / q * p + res.q / x.q * x.p;
    nod = gcd(res.p, res.q);
    res.p/=nod;
    res.q/=nod;
    return res;
}

rational rational::operator-(const rational& x)
{
    rational res(0, 1);
    int nod = gcd(this->q, x.q);
    res.q = (this->q * x.q) / nod;
    res.p = res.q / this->q * this->p - res.q / x.q * x.p;
    nod = gcd(res.p, res.q);
    res.p/=nod;
    res.q/=nod;
    return res;
}

rational rational::operator*(const rational& x)
{
    rational res(0, 1);
    res.p = p * x.p;
    res.q = q * x.q;
    int nod = gcd(res.p, res.q);
    res.p/=nod;
    res.q/=nod;
    return res;
}

rational rational::operator/(const rational& x)
{
    rational res(0, 1);
    if (x.p == 0)
    {
        printf("%s", "Error!\n");
        return *this;
    }
    res.p = p * x.q;
    res.q = q * x.p;
    int nod = gcd(res.p, res.q);
    res.p/=nod;
    res.q/=nod;
    return res;
}

rational rational::operator++(int)
{
    rational temp = *this;
    p += q;
    return temp;
}

rational rational::operator--(int)
{
    rational temp = *this;
    p -= q;
    return temp;
}

rational& rational::operator++()
{
    p += q;
    return *this;
}

rational& rational::operator--()
{
    p -= q;
    return *this;
}

istream& operator>>(istream& stream, rational& x)
{
    cout << "Enter p,q: ";
    stream >> x.p >> x.q;
	return stream;
}

ostream& operator<<(ostream& stream, const rational& x)
{
    stream << x.p << "/" << x.q;
	return stream;
}

int rational::gcd(int a, int b)
{
    a = abs(a);
    b = abs(b);
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
