#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

bool isValid(string s);

int main()
{
	string input;
	bool output;

	input = "[";
	output = isValid(input);
	cout << output;

	system("pause");
}

bool isValid(string s)
{
	if (s.length() == 0)
	{
		return true;
	}
	if (s.length() % 2 == 1)
	{
		return false;
	}

	unordered_map<char, int> mp;
	mp['('] = 1;
	mp[')'] = -1;
	mp['['] = 2;
	mp[']'] = -2;
	mp['{'] = 3;
	mp['}'] = -3;

	vector<int> stash;
	stash.push_back(mp[s[0]]);
	for (int i = 1; i < s.length(); i++)
	{
		if (mp[s[i]] > 0)
		{
			stash.push_back(mp[s[i]]);
		}
		else
		{
			if (stash[stash.size()-1] + mp[s[i]] == 0)
			{
				stash.pop_back();
			}
			else
			{
				return false;
			}
		}
	}

	if (stash.size() == 0)
	{
		return true;
	}
	return false;
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
