#include "class.hpp"

using namespace std;


Drob::Drob()//Конструктор по-умолчанию
{
    ch = 0.0;
    zn = 1.0;
}

Drob::Drob(double _ch, double _zn)//Конструктор по-значению
{
    if (_zn == 0)
    {
        std::cout << "Ноль в знаменателе";
        return;
    }
    ch = _ch;
    zn = _zn;
}

Drob Drob::operator +(const Drob &a)//Сложение
{
    Drob c;
    c.ch = zn*a.ch + ch*a.zn;
    c.zn = zn * a.zn;
    return c;
}

Drob Drob::operator -(const Drob &a)//Вычитание
{
    Drob c;
    c.ch = ch*a.zn - zn*a.ch;
    c.zn = zn*a.zn;
    return c;
}

Drob Drob::operator *(const Drob &a)//Умножение
{
    Drob c;
    c.ch = ch*a.ch;
    c.zn = zn*a.zn;
    return c;
}

Drob Drob::operator /(const Drob &a)//Деление
{
    Drob c;
    c.ch = ch * a.zn;
    c.zn = zn * a.ch;
    return c;
}

void Drob::Print()
{
    std::cout << ch << '/' << zn << std::endl;
}

/*const Drob operator ++(Drob &a, int)
{
    a.ch += a.zn;
    return a;
}

const Drob &operator ++(Drob &a)
{
    a.ch += a.zn;
    return a;
}*/

Drob Drob::operator ++(int)
{
    Drob a = *this;
    ++*this;
    return a;
}

Drob &Drob::operator ++()
{
    ch += zn;
    return *this;
}

ostream &operator <<(ostream &out, const Drob &d)
{
    out << d.ch << '/' << d.zn << endl;
    return out;
}

istream &operator >> (istream &in, Drob &d)
{
    cout << "Enter ch/zn" << " ";
    in >> d.ch;
    in >> d.zn;
    return in;
}
