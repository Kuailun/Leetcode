#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int firstUniqChar(string s) {
	int data[26] = { 0 };
	for (int i = 0; i < s.length(); i++)
	{
		if (data[s[i] - 'a'] == 0)
		{
			data[s[i] - 'a'] = i+1;
		}
		else
		{
			data[s[i] - 'a'] = 99999;
		}
	}
	int m = 99999;
	for (int i = 0; i < 26; i++)
	{
		if (data[i] != 0 && data[i] != 99999)
		{
			m = min(m, data[i]);
		}
	}
	if (m == 99999)
		return -1;
	else
		return m-1;
}
int main()
{
	string input = "leetcode";
	int output = firstUniqChar(input);
	cout << output;
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
