#include <stdio.h>
#include "arr.h"

void print_arr(arr a) {
	printf("print_arr_start\n");
	for (int i = 0; i < a.n; i++)
	{
		printf("%d\n", a.get_one(i));
	}
	printf("print_arr_end\n");
}

int main() {
	arr a;
	a.init(3);
	a.show();
	printf("-----------\n");
	arr b = a;
	b.show();
	printf("-----------\n");
	a.show();

	print_arr(b);



	return 0;
}