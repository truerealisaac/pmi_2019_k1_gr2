#include"zoo.h"


void zoo::checkAllCage() const
{
    for (int i = 0; i < 10; i++)
    {
        massCage[i].voice();
    }
}

cage::cage()
{
    empty = true;
}

void cage::addAnim(animal* an)
{
    animInCage = an;
    empty = false;
}

void cage::voice() const
{
    if (empty)
    {
        cout << "empty\n";
    }
    else
    {
        animInCage->voice();
    }
    
}

void wolf::voice() const
{
    cout <<"Wof-wof\n";
}

void tiger::voice() const
{
    cout <<"Rrrrrrr\n";
}

void snake::voice() const
{
    cout <<"Ssssssss\n";
}