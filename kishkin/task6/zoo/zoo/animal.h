#pragma once


class animal {
public:
	virtual void sound() = 0;
};

class cell {
private:
	animal* anim;
	bool empty;
public:
	cell();
	cell(const cell& c);
	~cell();

	void addAnimal(animal* a);
	bool getEmpty() const;
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