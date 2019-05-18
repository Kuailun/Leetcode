#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

string longestCommonPrefix(vector<string>& strs);

int main()
{
	vector<string> input;
	string output;

	//-1,131
	input.push_back("flower");
	input.push_back("flow");
	input.push_back("flight");

	output = longestCommonPrefix(input);
	cout << output;

	system("pause");
}

string longestCommonPrefix(vector<string>& strs)
{
	if (strs.size() == 0)
	{
		return "";
	}
	if (strs.size() == 1)
	{
		return strs[0];
	}
	string prefix;

	int len1 = strs[0].length();
	int len2 = strs[1].length();
	int actual = len1 > len2 ? len2 : len1;

	string ret1 = strs[0].substr(0, actual);
	string ret2 = strs[1].substr(0, actual);

	while (ret1.compare(ret2) != 0)
	{
		actual--;
		ret1 = strs[0].substr(0, actual);
		ret2 = strs[1].substr(0, actual);
	}
	if (ret1.length() == 0)
		prefix = "";
	prefix = ret1;

	for (int i = 2; i < strs.size(); i++)
	{
		if (prefix.compare("") == 0)
			return "";
		len1 = prefix.length();
		len2 = strs[i].length();
		actual = len1 > len2 ? len2 : len1;

		ret1 = prefix.substr(0, actual);
		ret2 = strs[i].substr(0, actual);

		while (ret1.compare(ret2) != 0)
		{
			actual--;
			ret1 = prefix.substr(0, actual);
			ret2 = strs[i].substr(0, actual);
		}
		if (ret1.length() == 0)
			prefix = "";
		prefix = ret1;
	}
	return prefix;
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
