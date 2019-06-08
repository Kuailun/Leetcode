#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

int countSegments(string s) {
	int cnt = 0;
	int index = 0;
	bool isWord = false;

	while (index != s.length() - 1)
	{
		if (s[index] != ' ')
		{
			index++;
			isWord = true;
			continue;
		}
		else
		{
			if (isWord)
				cnt++;
			isWord = false;
			index++;
		}
	}
	if (isWord)
		cnt++;
	return cnt;
}
int main()
{
	string input="I am a boy";

	int output= countSegments(input);
	cout << output << endl;
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
