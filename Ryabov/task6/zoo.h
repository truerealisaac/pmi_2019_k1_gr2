#include"zoo.h"


void zoo::check() const
{
    for (int i = 0; i < 10; i++)
    {
        numofCage[i].scream();
    }
}

cage::cage()
{
    freedom = true;
}

void cage::inner(beast* moo)
{
    anim = moo;
    freedom = false;
}

void cage::scream() const
{
    if (freedom)
    {
        cout << "freedom\n";
    }
    else
    {
        anim->scream();
    }

}

void zebra::scream() const
{
    cout << "ze-ze-ze-ze\n";
}

void elephant::scream() const
{
    cout << "ry-ry-ry-ry\n";
}

