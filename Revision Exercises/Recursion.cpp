#include "Recursion.h"

bool isPalindrome(std::string s)
{
	if (s.size() < 2)
		return true;
	if (s[0] != s[s.size() - 1])
		return false;
	else
		return isPalindrome
		(s.substr(1, s.size() - 2));
}
void recursionQuestion1Test()
{
	string* arr = new string[5]{"racecar", "navan",
	"sheldon", "test", "teet"};
	for (int i = 0; i < 5; i++)
	{
		cout << arr[i] << ": " << 
			(isPalindrome(arr[i])?"yes":"no")<<endl;
	}
}



void findMinMax(int* arr, int size, int& min, int& max, int pos)
{
	if (pos == size)
		return;
	if (pos == 0)
		min = max = arr[pos];
	else if (min > arr[pos])
		min = arr[pos];
	if (max < arr[pos])
		max = arr[pos];

	findMinMax(arr, size, min, max, pos + 1);
}

void recursionQuestion2Test()
{
	int* arr = new int[10]{ 2,9,55,1,4,-5,6,8,7,9 };
	int min = 0;
	int max = 0;
	findMinMax(arr, 10, min, max, 0);
	cout << "Min: " << min << endl;
	cout << "Max: " << max << endl;


}

int stringToInt(string s)
{
	if (s.size() == 0)
		return 0;
	return ((s[0]-'0') * pow(10, s.size() - 1)) 
		+ stringToInt(s.substr(1));
}

void recursionQuestion4Test()
{
	cout << "Please enter a number" << endl;
	string num;
	cin >> num;
	int n = stringToInt(num);
	cout << "The number you entered was " << n;

}