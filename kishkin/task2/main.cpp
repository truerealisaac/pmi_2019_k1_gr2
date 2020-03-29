#include <stdio.h>


class din_array {
public:
	int length;
	int* arr;

	// Конструктор
	din_array(int len, int val) {
		length = len;
		arr = new int[len];
		for (int i = 0; i < len; i++)
			arr[i] = val;
	}

	// Конструктор копирования
	din_array(const din_array& copy) {
		length = copy.length;
		arr = new int[length];
		for (int i = 0; i < length; i++)
			arr[i] = copy.arr[i];
	}

	// Диструктор
	~din_array() {
		delete[] arr;
	}
};

void print_arr(din_array arr) {
	printf("[ ");
	for (int i = 0; i < arr.length; i++) {
		printf("%d, ", arr.arr[i]);
		if (i == arr.length - 1)
			printf("%d", arr.arr[i]);
	}
	printf("]");
}

int main() {
	din_array arr(10, 1);
	print_arr(arr);

	return 0;
}