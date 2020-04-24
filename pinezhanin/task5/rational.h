#pragma once
#include<iostream>

using namespace std;

class gcd
{
    public:

    gcd(const int &x,const int& y);
    int getNod();
    void setXY(const int& x, const int& y);

    private:
    int x, y;
    int nod;
    int nodFunc();
};

class rationalA
{
    public:

    rationalA(const int &p,const int &q);

    rationalA operator+(const rationalA& x);
    rationalA operator-(const rationalA& x);
    rationalA operator*(const rationalA& x);
    rationalA operator/(const rationalA& x);
    rationalA operator++(int);
    rationalA operator--(int);
    rationalA& operator++();
    rationalA& operator--();
    friend istream& operator>>(istream& stream, rationalA& x);
	friend ostream& operator<<(ostream& stream, const rationalA& x);

    private:
    
    int p, q;
    gcd nod;
    int gcdFunc();
};

class rationalN : protected gcd
{
    public:

    rationalN(const int &p,const int &q);

    rationalN operator+(const rationalN& x);
    rationalN operator-(const rationalN& x);
    rationalN operator*(const rationalN& x);
    rationalN operator/(const rationalN& x);
    rationalN operator++(int);
    rationalN operator--(int);
    rationalN& operator++();
    rationalN& operator--();
    friend istream& operator>>(istream& stream, rationalN& x);
	friend ostream& operator<<(ostream& stream, const rationalN& x);

    private:
    
    int p, q;
    int gcdFunc();
};
