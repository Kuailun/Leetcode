#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>


int lengthOfLastWord(std::string s);

int main()
{
	std::string input = "a aad ";

	int output;

	output = lengthOfLastWord(input);
	std::cout << output;

	system("pause");
}

int lengthOfLastWord(std::string s)
{
	if (s.length() == 0)
	{
		return 0;
	}

	while (s[s.length() - 1] == ' ')
	{
		s.erase(s.begin() + s.length() - 1);
		if (s.length() == 0)
		{
			return 0;
		}
	}


	for (int i = s.length() - 1; i >= 0; i--)
	{
		if (s[i] == ' ')
		{
			return s.length() - i-1;
		}
	}
	return s.length();
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
