#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isIsomorphic(string s, string t);

int main()
{
	string input1 = "abb",input2="abc";

	bool output = isIsomorphic(input1,input2);
	cout << output << endl;

	system("pause");
}

bool isIsomorphic(string s, string t) {
	unordered_map<char, char> mp;
	//mp[s[0]] = t[0];
	for (int i = 0; i < s.length(); i++)
	{
		if (mp.count(s[i]) == 1)
		{
			if (mp[s[i]] != t[i])
			{
				return false;
			}
		}
		else
		{
			mp[s[i]] = t[i];
		}
	}

	unordered_map<char, char> mpp;
	for (int i = 0; i < t.length(); i++)
	{
		if (mpp.count(t[i]) == 1)
		{
			if (mpp[t[i]] != s[i])
			{
				return false;
			}
		}
		else
		{
			mpp[t[i]] = s[i];
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
