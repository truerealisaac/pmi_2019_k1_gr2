#include "class.hpp"

Drob2::Drob2()
{
    ch = 0;
    zn = 1;
}

Drob2::Drob2(int a, int b)
{
    if (b == 0)
    {
        std::cout << "Ноль в знаменателе";
        return;
    }
    ch = a;
    zn = b;
    reduct2(*this);
}

void Drob2::reduct2()
{
    int n = e.nod(ch, zn);
    ch = ch / n;
    zn = zn / n;
}

Drob2 Drob2::operator +(const Drob2 &a)//Сложение
{
    Drob2 c;
    c.ch = zn*a.ch + ch*a.zn;
    c.zn = zn * a.zn;
    reduct2(c);
    return c;
}

Drob2 Drob2::operator -(const Drob2 &a)//Вычитание
{
    Drob2 c;
    c.ch = ch*a.zn - zn*a.ch;
    c.zn = zn*a.zn;
    reduct2(c);
    return c;
}

Drob2 Drob2::operator *(const Drob2 &a)//Умножение
{
    Drob2 c;
    c.ch = ch*a.ch;
    c.zn = zn*a.zn;
    reduct2(c);
    return c;
}

Drob2 Drob2::operator /(const Drob2 &a)//Деление
{
    Drob2 c;
    c.ch = ch * a.zn;
    c.zn = zn * a.ch;
    reduct2(c);
    return c;
}

void Drob2::Print()
{
    std::cout << ch << '/' << zn << std::endl;
}

Drob2 Drob2::operator ++(int)
{
    Drob2 a = *this;
    ++*this;
    reduct2(*this);
    return a;
}

Drob2 &Drob2::operator ++()
{
    ch += zn;
    reduct2(*this);
    return *this;
}
