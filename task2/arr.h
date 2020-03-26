#pragma once
class arr {
private:
	int* a;
public:
	int n;

	arr();
	arr(const arr& b);
	~arr();

	void show();
	void init(int c);
	int get_one(int i);
};