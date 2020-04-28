#include <iostream>
#include "class.hpp"

int main()
{
    Drob1 d(5, 1);
    Drob1 d2(5, 5);
    d.Print();
    d = d + d2;
    d.Print();
    d2.Print();


    return 0;
}
