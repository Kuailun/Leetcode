#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isUgly(int num);

int main()
{
	int input = 35;

	bool output = isUgly(input);
	cout << output << endl;

	system("pause");
}

bool isUgly(int num) {
	if (num == 1)
	{
		return true;
	}
	else
	{
		while (num % 2 == 0)
		{
			num = num / 2;
		}
		while (num % 3 == 0)
		{
			num = num / 3;
		}
		while (num % 5 == 0)
		{
			num = num / 5;
		}
		if (num != 1)
		{
			return false;
		}
		return true;
	}
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
