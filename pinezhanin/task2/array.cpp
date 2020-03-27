#include<stdio.h>

class array
{
    public:
        int *a;
        int size;

        array(int s)
        {
            size = s;
            a = new int[size];
        }

        array(const array &copyArr)
        {
            size = copyArr.size;
            a = new int[size];
            for (int i = 0; i < size; i++)
                a[i] = copyArr.a[i];
        }
        
        ~array()
        {
            delete[] a;
        }
};

void print(array a)
{
    for (int i = 0; i < a.size; i++)
        printf("%d ", a.a[i]);
    printf("\n");
}

void init(array *a)
{
    for (int i = 0; i < a->size; i++)
        a->a[i] = i;
}

int main()
{
    array arr(5);
    init(&arr);
    print(arr);
    return 0;
}