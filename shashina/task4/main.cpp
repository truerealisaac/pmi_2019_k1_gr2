#include <stdio.h>
#include"fractional.h"

using namespace std;

int main()
{
   rational a(1,2), b(2,4);
   rational c;

    cout << "F1: ";
    a.print();
    cout << "F2: ";
    b.print();

   c = a + b;
   cout << "F1+F2: " ;
   c.print();

   c = a - b;
    cout << "F1-F2: " ;
   c.print();

   c = a * b;
    cout << "F1*F2: "  ;
   c.print();

   c = a / b;
    cout << "F1/F2: " ;
   c.print();

   a++;
    cout << "F1+1: " ;
   a.print();

    b++;
    cout << "F2+1: " ;
    b.print();

   return 0;
}
