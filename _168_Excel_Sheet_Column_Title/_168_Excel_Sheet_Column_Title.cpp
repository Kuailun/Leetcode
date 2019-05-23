
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

string convertToTitle(int n);

int main()
{
	int input = 27;
	string output;

	output = convertToTitle(input);
	cout << output << endl;

	system("pause");
}

string convertToTitle(int n) {
	string ret= "";
	char m;
	while (n != 0)
	{
		m = (n-1) % 26 + 65;
		ret = m + ret;
		n = (n-1) / 26;
	}
	return ret;
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
