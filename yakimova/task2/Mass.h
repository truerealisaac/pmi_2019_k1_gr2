#pragma once
class Mass
{
	int n;  // размер массива
	int* a; //указатель на 1 элемент
public:
	Mass();
	Mass(int size);
	Mass(Mass& x);

	~Mass();

	void vvod();
	void print();

}; 
