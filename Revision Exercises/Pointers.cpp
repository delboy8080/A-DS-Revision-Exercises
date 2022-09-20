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

string encrypt(string s, int shift)
{
	string encrypted="";
	char* ec=new char;
	for (char c : s)
	{
		if (c >= 'A' && c <= 'Z')
		{
			*ec = c + shift;
			if (*ec > 'Z')
			{
				*ec = (*ec) - 'Z' + ('A' - 1);
			}

		}
		else if (c >= 'a' && c <= 'z')
		{
			*ec = c + shift;
			if (*ec > 'z')
			{
				cout  << c <<" - " << *ec << endl;
				*ec = *ec - 'z' + ('a' - 1);
				cout <<c<< " - " << *ec << endl;
			}

		}
		else
		{
			*ec = c;
		}

		encrypted += *ec;
	}
	return encrypted;
}

void ptrQ6Test()
{
	string d = "The quick brown fox jumped over the lazy dog.";
	string enc = encrypt(d, 10);
	cout << "Encrypted Message: " << enc << endl;
}