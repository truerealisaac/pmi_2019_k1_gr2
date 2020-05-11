#pragma once

#include<iostream>

using namespace std;

class animal
{
public:
    virtual void voice() const = 0;
};

class cage
{
    animal *animInCage;
    bool empty;
public:
    cage();

    void addAnim(animal* an);
    void voice() const;
};

class zoo
{
public:
    cage massCage[10];

    void checkAllCage() const;

};

class wolf : public animal
{
public:
    virtual void voice() const;
};

class tiger : public animal
{
public:
    virtual void voice() const;
};

class snake : public animal
{
public:
    virtual void voice() const;
};