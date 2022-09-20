#include "Pointers.h"
void ptrQ1Test()
{
	int size = 5;
	int* arr = new int[size] {1,5,9,7,8};
	int sum = total(arr, size);

	cout << "The total of the array is " << sum << endl;
}

int total(int* arr, int size)
{
	int sum=0;
	for (int i = 0; i < size; i++)
	{
		sum += *arr;
		arr++;
	}
	return sum;
}


void swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void ptrQ2Test()
{
	int* x = new int;
	int* y = new int;
	*x = 10;
	*y = 20;
	cout << "X: " << *x << " - Y:" << *y << endl;
	swap(x, y);
	cout << "X: " << *x << " - Y:" << *y << endl;
}