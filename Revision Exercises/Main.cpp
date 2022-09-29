#include <iostream>

using namespace std;
#include "Recursion.h"
#include "Pointers.h"
#include "Flower.h"


int main()
{
	Flower f1;
	Flower f2("Rose", 15, 1.99f);

	Flower f3 = f1 + 0.99;

	cout << f1 << f2 << f3 << endl;

	system("Pause");
	//ptrQ6Test();
}