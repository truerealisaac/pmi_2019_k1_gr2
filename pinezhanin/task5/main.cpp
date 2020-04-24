#include"rational.h"

int main()
{
    rationalA a(3, 5), b(7, 6), c(0, 0);
    rationalN d(3, 5), e(7, 6), f(0, 0);
    
    cin >> a >> b;
    c = a + b;
    cout << c << "\n";

    cin >> d >> e;
    f = d + e;
    cout << f << "\n";
    
    return 0;
}