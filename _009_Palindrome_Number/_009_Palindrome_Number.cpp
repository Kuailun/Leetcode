
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isPalindrome(int x);

int main()
{
	int input;
	bool output;

	//-1,131
	input = 2147483647;

	output = isPalindrome(input);
	cout << output;

	system("pause");
}

bool isPalindrome(int x)
{
	if (x < 0)
	{
		return false;
	}
	if (x < 10)
	{
		return true;
	}

	long reverse = 0;
	long input = x;
	while (reverse != x)
	{
		if (reverse > x||input==0)
		{
			return false;
		}
		reverse = reverse * 10 + input % 10;
		input = input / 10;
	}
	return true;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
