#pragma once

class Drob{
public:
    double ch;
    double zn;

    Drob();
    Drob(double _ch, double _zn);
    Drob operator +(const Drob &a);
    Drob operator -(const Drob &a);
    Drob operator *(const Drob &a);
    Drob operator /(const Drob &a);
    Drob operator ++(int);
    Drob &operator ++();
    void Print();
    friend &operator <<(ostream &out, const Drob &d);
    friend &operator >> (istream &in, Drob &d);
};

