#include"racionaldrobi.h"
#include <stdio.h>
using namespace std;

int main()
{
	racionaldrobi A(3, 5), B(6, 9),C;
	A = A + B;
	A.print();

	A= A - B;
	A.print();

	A = A * B;
	A.print();

	A= A / B;
	A.print();

	A++;
	A.print();

	cin >> A >> B;
	C = A + B;
	cout << "\n" << "result = " << C;
	
	return 0;
}