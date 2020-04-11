#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    int c = add(a, b);
    std::cout << c;
    return 0;
}
