#include<iostream>
#include<cstdlib>
#include"zoo.h"

using namespace std;

int main()
{
    zoo ZooPark;
    wolf w;
    tiger t;
    snake s;
    int num;
    for (int i = 0; i < 10; i++)
    {
        num = rand() % 4;
        if (num == 1) ZooPark.massCage[i].addAnim(&w);
        if (num == 2) ZooPark.massCage[i].addAnim(&t);
        if (num == 3) ZooPark.massCage[i].addAnim(&s);
        if (num == 0) ;
    }

    ZooPark.checkAllCage();

    return 0;
}