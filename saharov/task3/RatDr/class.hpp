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
    friend const Drob operator ++(Drob &a, int);
    friend const Drob &operator ++(Drob &a);
    void Print();
};

