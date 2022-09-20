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