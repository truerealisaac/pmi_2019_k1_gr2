#include"rational.h"

int main()
{
    rational a(3, 5), b(7, 6), c(0, 0);

    cin >> a >> b;
    c = a + b;
    cout << c << "\n";

    return 0;
}