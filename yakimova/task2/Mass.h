#pragma once
class Mass
{
	int n;  // размер массива
	int* a; //указатель на 1 элемент
public:
	Mass(int size);
	Mass(const Mass& x);

	~Mass();

	void vvod();
	void print();

}; 
