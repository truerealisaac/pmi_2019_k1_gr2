#include <stdio.h>



class mas
{

public:
	int n;
	int* arr;
	mas(int num, int val)
	{
		n = num;
		arr = new int[num];
		for(int i=0;i<n;i++)
		{
			arr[i] = val;
		}
	}
	mas(const mas& copypaste)
	{
		n = copypaste.n;
		arr = new int[n];
		for (int i = 0; i < n; i++)
		{
			arr[i] = copypaste.arr[i];
		}
	}
	~mas()
	{
		delete[] arr;
	}

};

void printarr(mas arr)
{
	for(int i=0;i<arr.n;i++)
	{
		printf("%d ", arr.arr[i]);
	}
}

int main() 
{
	int n, value;
	scanf("%d %d", &n, &value);
	mas arr(n, value);
	printarr(arr);

	return 0;
}