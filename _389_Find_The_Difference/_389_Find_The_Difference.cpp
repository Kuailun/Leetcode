#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

char findTheDifference(string s, string t) {
	int data1[26] = { 0 };

	for (int i = 0; i < s.length(); i++)
	{
		data1[s[i] - 'a']++;
	}
	for (int i = 0; i < t.length(); i++)
	{
		data1[t[i] - 'a']--;
	}
	for (int i = 0; i < 26; i++)
	{
		if (data1[i]==-1)
		{
			return i + 'a';
		}
	}
	return 'a';
}
int main()
{
	string input1 = "abcd",input2="abcde";
	int output = findTheDifference(input1,input2);
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
