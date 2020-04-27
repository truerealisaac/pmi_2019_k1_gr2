#pragma once
#include<iostream>
using namespace std;

class NOD
{
private:
    int n, m;
    int nod;
    int nodf();
public:
    NOD(const int &n,const int& m);
    int getnod();
    void setnod(const int& n, const int& m);
};

class rational
{
private:
    int num, den;
    NOD nod;
    int rationalf();
public:
    rational(const int &num,const int &den);
    rational operator+(const rational& s);
    rational operator-(const rational& s);
    rational operator*(const rational& s);
    rational operator/(const rational& s);
    rational operator++(int);
    rational& operator++();
    friend istream& operator>>(istream& output, rational& s);
    friend ostream& operator<<(ostream& input, const rational& s);
    void print ();
};

class frational : protected NOD
{
private:
    int num, den;
    int rationalf();
public:
    frational(const int &num,const int &den);
    frational operator+(const frational& s);
    frational operator-(const frational& s);
    frational operator*(const frational& s);
    frational operator/(const frational& s);
    frational operator++(int);
    frational& operator++();
    friend istream& operator>>(istream& output, frational& s);
    friend ostream& operator<<(ostream& input, const frational& s);
    void print ();
};
