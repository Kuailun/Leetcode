#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isAnagram(string s, string t);

int main()
{
	string input1 = "abc", input2 = "acb";

	bool output = isAnagram(input1,input2);
	cout << output << endl;

	system("pause");
}

bool isAnagram(string s, string t) {
	int s1[26];
	for (int i = 0; i < 26; i++)
	{
		s1[i] = 0;
	}
	for (int i = 0; i < s.length(); i++)
	{
		s1[s[i] - 97]++;
	}
	for (int i = 0; i < t.length(); i++)
	{
		s1[t[i] - 97]--;
	}

	for (int i = 0; i < 26; i++)
	{
		if (s1[i] != 0)
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
