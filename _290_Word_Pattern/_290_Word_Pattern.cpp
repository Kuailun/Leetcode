#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool wordPattern(string pattern, string str);

int main()
{
	string input1="aa",input2="dog cat";


	bool output=wordPattern(input1,input2);

	system("pause");
}

void getStr(vector<string>& mW, string s)
{
	int index = 0;
	string m = "";
	while (index != s.length())
	{
		if (s[index] != ' ')
		{
			m = m + s[index];
		}
		else
		{
			mW.push_back(m);
			m = "";
		}
		index++;
	}
	mW.push_back(m);
}
bool wordPattern(string pattern, string str) {
	vector<string> mW;
	getStr(mW, str);
	if (mW.size() != pattern.length())
	{
		return false;
	}

	unordered_map<char, string> m1;
	unordered_map<string, char> m2;

	for (int i = 0; i < pattern.length(); i++)
	{
		if (m1.count(pattern[i]) == 0)
		{
			m1[pattern[i]] = mW[i];
		}
		else
		{
			if (mW[i] != m1[pattern[i]])
			{
				return false;
			}
		}
	}

	for (int i = 0; i < pattern.length(); i++)
	{
		if (m2.count(mW[i]) == 0)
		{
			m2[mW[i]] = pattern[i];
		}
		else
		{
			if (pattern[i] != m2[mW[i]])
			{
				return false;
			}
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
