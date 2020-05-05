#pragma once

#include "nod.hpp"


class Drob1: private evc
{
private:
    void reduct1();
public:
    int ch, zn;

    Drob1();
    Drob1(int a, int b);
    ~Drob1(){};
    Drob1 operator +(const Drob1 &a);
    Drob1 operator -(const Drob1 &a);
    Drob1 operator *(const Drob1 &a);
    Drob1 operator /(const Drob1 &a);
    Drob1 operator ++(int);
    Drob1 &operator ++();
    void Print();
};

class Drob2
{
private:
    evc e;
    void reduct2();
public:
    int ch, zn;

    Drob2();
    Drob2(int a, int b);
    ~Drob2(){};
    Drob2 operator +(const Drob2 &a);
    Drob2 operator -(const Drob2 &a);
    Drob2 operator *(const Drob2 &a);
    Drob2 operator /(const Drob2 &a);
    Drob2 operator ++(int);
    Drob2 &operator ++();
    void Print();
};
