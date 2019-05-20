#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


string countAndSay(int n);

int main()
{
	int input=5;

	string output;

	output = countAndSay(input);
	cout << output;

	system("pause");
}

string countAndSay(int n)
{
	if (n == 1)
	{
		return "1";
	}

	string s = "1";
	
	while (n != 1)
	{
		n--;
		int cnt = 0;
		int crt = s[0];
		string m = "";
		for (int i = 0; i < s.size(); i++)
		{
			if (crt == s[i])
			{
				cnt++;
			}
			if(crt!=s[i])
			{
				m = m + std::to_string(cnt) + std::to_string(crt - 48);
				cnt = 1;
				crt = s[i];
			}
			if (i == s.size() - 1)
			{
				m = m + std::to_string(cnt) + std::to_string(crt - 48);
			}
		}
		s = m;
	}
	return s;
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
