#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int romanToInt(string s);

int main()
{
	string input;
	int output;

	//-1,131
	input = "MCMXCIV";

	output = romanToInt(input);
	cout << output;

	system("pause");
}

int romanToInt(string s)
{
	unordered_map<char, int> dict;
	dict['M'] = 1000;
	dict['D'] = 500;
	dict['C'] = 100;
	dict['L'] = 50;
	dict['X'] = 10;
	dict['V'] = 5;
	dict['I'] = 1;

	if (s.length() == 1)
	{
		return dict[s[0]];
	}

	int result = 0;
	for (int i = 0; i < s.length()-1; i++)
	{
		if (dict[s[i]] < dict[s[i + 1]])
		{
			result = result - dict[s[i]];
		}
		else
		{
			result = result + dict[s[i]];
		}
	}
	return result+dict[s[s.length()-1]];
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
