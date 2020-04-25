#include "nod.hpp"

int evc::nod(int _ch, int _zn)
{
    int a, b, res;
    if(_ch > _zn)
    {
        a = _ch;
        b = _zn;
    }
    else
    {
        a = _zn;
        b = _ch;
    }
    if( b == 0)
        return a;

    res = a % b;
    while (res != 0)
    {
        a = b;
        b = res;
        res = a % b;
    }

    res = b;
    return res;
}
