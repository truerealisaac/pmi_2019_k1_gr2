#pragma once
#include<iostream>

using namespace std;

class rational
{
    public:

    rational(const int &p,const int &q);

    rational operator+(const rational& x);
    rational operator-(const rational& x);
    rational operator*(const rational& x);
    rational operator/(const rational& x);
    rational operator++(int);
    rational operator--(int);
    rational& operator++();
    rational& operator--();
    friend istream& operator>>(istream& stream, rational& x);
    friend ostream& operator<<(ostream& stream, const rational& x);

    private:
    
    int p, q;
    int gcd(int a, int b);
};
