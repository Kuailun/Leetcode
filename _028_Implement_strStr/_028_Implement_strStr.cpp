#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int strStr(string haystack, string needle);

int main()
{
	string input="aabaaabaaac";
	string needle="aabaaac";
	int output;

	output = strStr(input, needle);
	cout << output;
	
	system("pause");
}

int strStr(string haystack, string needle)
{
	if (needle == "")
		return 0;

	int index = 0;
	int lastindex = -1;
	for (int i = 0; i < haystack.length(); i++)
	{
		if (index != 0 && haystack[i] == needle[0]&&lastindex==-1)
		{
			lastindex = i;
		}
		if (haystack[i] == needle[index])
		{
			index = index + 1;
			if (index == needle.length())
			{
				return i - index + 1;
			}
			continue;
		}
		else
		{
			index = 0;

			if (lastindex != -1)
			{
				i = lastindex-1;
				lastindex = -1;
			}
			
		}
	}
	return -1;
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
