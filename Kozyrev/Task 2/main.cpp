#include <iostream>
using namespace std;


class Array

{
public:
	
	int* arr;
	int n;

	Array(int narr)                       //инициализация
	{
		n = narr;
		arr = new int[narr];
		
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % 100;
		}
	}


	Array(const Array& a)                 //копирование
	{
		n = a.n;
		arr = new int[n];

		for (int i = 0; i < n; i++)
		{
			arr[i] = a.arr[i];
		}
	}


	int *copyarr()      
	{
		return arr;
	}
	int lengtharr()     
	{
		return n;
	}
	

	~Array()
	{
		delete[] arr;
	}
};


void PrArr(Array a)
{
	int* b = a.copyarr();          
	int length = a.lengtharr(); 

	for (int i = 0; i < length; i++)
	{
		cout << "a[" << i << "] = " << b[i] << endl;
	}
}



int main()
{
	int n;
	cout << "Enter array's length" << endl;
	cin >> n;
	cout << "\n" << endl;

	Array a(n);
	Array copy(a);      //проверка конструктора копирования
	PrArr(copy);


	return 0;
}