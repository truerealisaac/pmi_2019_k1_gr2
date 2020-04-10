#include<stdio.h>
#include"rational.h"

int main()
{
    rational a(3, 5), b(7, 6), c(0, 0), d(0, 1);

    c = a + b;
    c.print();
    c = a - b;
    c.print();
    c = a * b;
    c.print();
    c = a / b;
    c.print();
    d = c++;
    d.print();
    d = c--;
    d.print();
    c.print();
    d = ++c;
    d.print();
    d = --c;
    d.print();

    return 0;
}