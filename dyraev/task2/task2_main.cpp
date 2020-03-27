#include<iostream>
#include<cstdlib>
#include<conio.h>

class dinMemory
{
private:
	int *p;
	int col_el;
public:

	dinMemory(int a)
	{
		p = new int[a];
		col_el = a;

		for (int i = 0; i < col_el; i++)
		{
			p[i] = rand();
		}
	}

	dinMemory(const dinMemory & a)
	{
		col_el = a.col_el;
		p = new int[col_el];

		for (int i = 0; i < col_el; i++)
		{
			p[i] = a.p[i];
		}
				
	}

	~dinMemory()
	{
		delete[] p;
		col_el = 0;
	}

	int* get_p()
	{
		return p;
	}
	int get_col()
	{
		return col_el;
	}
};

void printArr(dinMemory p)
{
	int * pTemp = p.get_p();
	int i = p.get_col();

	for (int j = 0; j < i; j++)
	{

		std::cout << "p" << j << ": " << pTemp[j] << std::endl;
	}
}


int main()
{
	int col = 4;

	dinMemory m1(col);
	printArr(m1);
	_getch();
	
	return 0;
}