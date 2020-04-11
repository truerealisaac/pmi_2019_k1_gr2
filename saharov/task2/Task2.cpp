#include <iostream>

class arr{
public:
    int *a;
    int n;

    arr(int _n)
    {
        n = _n;
        a = new int[n];
    }
    arr(const arr &_a)
    {
        n = _a.n;
        a = new int[n];
        for(int i = 0; i < n; i ++)
            a[i] = _a.a[i];
    }
    ~arr()
    {
        delete[] a;
        n = 0;
    }
    void init()
    {
        for(int i = 0; i < n; i ++)
            std::cin >> a[i];
    }
    void print()
    {
        for(int i = 0; i < n; i ++)
            std::cout << a[i] << ' ';
        std::cout << '\n';
    }
};
/*
void init(arr a)
{
   for(int i = 0; i < a.n; i ++)
        std::cin >> a.a[i];
}
void print(arr a)
{
    for(int i = 0; i < a.n; i ++)
        std::cout << a.a[i] << ' ';
    std::cout << '\n';
}*/

int main()
{
    arr a1(5);
    a1.init();
    a1.print();
    return 0;
}
