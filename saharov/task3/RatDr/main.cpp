#include <iostream>
#include "class.hpp"

int main()
{
    Drob d1(5.0, 1.0);
    Drob d2(1.0, 5.0);
    d1.Print();
    d1 ++;
    d1.Print();
    ++ d1;
    d1.Print();


    return 0;
}
