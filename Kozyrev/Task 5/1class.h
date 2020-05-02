#pragma once


class class1
{
protected:
	int ch, zn, nod;
	int evklid();

public:
	class1(const int& a = 0, const int& b = 0);
	void redef(const int& a, const int& b);
	
	void reduction();
	
	const int get_nod() const;
	const int get_ch() const;
	const int get_zn() const;
	void set_ch(const int& f);
	void set_zn(const int& s);
};