#pragma once
#include <iostream>

class rational
{
private:
    int n, m;
    void abb ();
public:
   rational ();
   rational (int a, int b);
   const rational operator+ (const rational &s);
   const rational operator- (const rational &s);
   const rational operator* (const rational &s);
   const rational operator/ (const rational &s);
   rational operator++(int);
    friend std::istream& operator>>(std::istream& output, rational& s);
     friend std::ostream& operator<<(std::ostream& input, const rational& s);
   void print ();
 };
