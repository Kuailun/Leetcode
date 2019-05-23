#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

bool isPalindrome(string s);

int main()
{
	string input="0a";
	bool output;

	output = isPalindrome(input);
	cout << output << endl;
	system("pause");
}
bool isPalindrome(string s)
{
	if (s.length() <= 1)
	{
		return true;
	}
	int left=0, right=s.length()-1;
	while (left < right)
	{
		if (s[left] <= 47 ||s[left]>=58&&s[left] <= 64 || s[left] >= 91 && s[left] <= 96 || s[left] >= 123 )
		{
			left++;
			continue;
		}
		if (s[right] <= 47 || s[right] >= 58 && s[right] <= 64 || s[right] >= 91 && s[right] <= 96 || s[right] >= 123)
		{
			right--;
			continue;
		}
		if (s[left] > 96 && s[left] < 123)
		{
			s[left] = s[left] - 32;
			continue;
		}
		if (s[right] > 96 && s[right] < 123)
		{
			s[right] = s[right] - 32;
			continue;
		}
		if (s[left] == s[right])
		{
			left++;
			right--;
		}
		else
		{
			return false;
		}
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