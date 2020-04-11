#pragma once

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

    void print();

    private:
    
    int p, q;
    int gcd(int a, int b);
};