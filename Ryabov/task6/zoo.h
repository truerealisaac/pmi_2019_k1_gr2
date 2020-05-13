#pragma once
#include<iostream>
using namespace std;
class cage
{
    beast* anim;
    bool freedom;
public:
    cage();
    void  inner(beast* moo);
    void scream() const;
};
class beast
{
public:
    virtual void scream() const = 0;
};

class zoo
{
public:
    cage numofCage[10];
    void check() const;
};

class elephant : public beast
{
public:
    virtual void scream() const;
};

class zebra : public beast
{
public:
    virtual void scream() const;
};
