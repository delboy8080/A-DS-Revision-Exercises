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


