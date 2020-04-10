class RacDrob {
public:
	RacDrob();
	RacDrob(int _ch, int _zn);
	void print();
	void setzn(int _zn);
	int getzn();
	void setch(int _ch);
	int getch();
	const RacDrob operator+(const RacDrob& drob);
	const RacDrob operator-(const RacDrob& drob);
	const RacDrob operator*(const RacDrob& drob);
	const RacDrob operator/(const RacDrob& drob);
	const   RacDrob& operator++(RacDrob& drob,int);
private:
	int zn;
	int ch;
	void red();

};
