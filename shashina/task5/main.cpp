#include"rational.h"
#include <iostream>
using namespace std;

int main()
{
   rational a(1,2), b(5,2);
   rational c(0,0);

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

    cout << "\n";

    frational d(1,2), e(2,4);
    frational g(0,0);

     cout << "F1: ";
     d.print();
     cout << "F2: ";
     e.print();

    g = d + e;
    cout << "F1+F2: " ;
    g.print();

    g = d - e;
     cout << "F1-F2: " ;
    g.print();

    g = d * e;
     cout << "F1*F2: "  ;
    g.print();

    g = d / e;
     cout << "F1/F2: " ;
    g.print();

    d++;
     cout << "F1+1: " ;
    d.print();

     e++;
     cout << "F2+1: " ;
     e.print();
    return 0;
}
