#include"racionaldrobi.h"
#include <stdio.h>
using namespace std;

int main()
{
	racionaldrobi_ag A(3, 5), B(6, 9), C;
	racionaldrobi_na D(3, 5), E(7, 6), F;

	cin >> A >> B;
	C = A + B;
	cout << "\n" << "result1 = " << C;

	cin >> D >> E;
	F = D + E;
	cout << "\n" << "result2 = " << F;

	return 0;
}