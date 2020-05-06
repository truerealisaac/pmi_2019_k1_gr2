#pragma once
class cell
{
public:
	virtual void sound() const = 0;
	virtual bool isEmpty() const = 0;
};

class empty : public cell
{
	virtual void sound() const;
	virtual bool isEmpty() const;
};

class wolf : public cell
{
	virtual void sound() const;
	virtual bool isEmpty() const;
};

class rabbit : public cell
{
	virtual void sound() const;
	virtual bool isEmpty() const;
};

class tiger : public cell
{
	virtual void sound() const;
	virtual bool isEmpty() const;
};

class zoo
{
private:
	cell* animals[10];
public:
	zoo(empty& e);
	~zoo();
	void addAnimal(cell* a, const int& c);
	void soundAnimal(const int& c) const;
};