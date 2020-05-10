#pragma once

#define quin 1

class animal {
public:
	virtual void sound() = 0;
};

class cell {
private:
	animal* anim[quin];
	bool empty;
	int count;
public:
	cell();
	cell(const cell& c);

	void addAnimal(animal* an);
	bool getEmpty() const;
	int getCount() const;
	void sound() const;
};

class tiger:public animal {
	virtual void sound();
};

class kangaroo:public animal {
	virtual void sound();
};

class bear:public animal {
	virtual void sound();
};

class zoo {
public:
	cell* cells;

	zoo();
	zoo(const zoo& z);
	~zoo();
};