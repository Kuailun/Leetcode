#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int longestPalindrome(string s) {
	int ma[52] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		if (s[i] <= 91)
		{
			ma[s[i] - 'A']++;
		}
		else
		{
			ma[s[i] - 'a'+26]++;
		}
	}
	bool single = false;
	int len = 0;
	for (int i = 0; i < 52; i++)
	{
		if (!single)
		{
			if (ma[i] % 2 == 1)
			{
				single = true;
			}
		}
		len = len + ma[i] / 2;
	}
	return len*2 + single;
}
int main()
{
	string num = "abccccdd";
	int output = longestPalindrome(num);
	system("pause");
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
