#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int addDigits(int num);

int main()
{
	int input=35;

	int output = addDigits(input);
	cout << output << endl;

	system("pause");
}

int addDigits(int num) {
	if (num == 0)
		return 0;
	if (num % 9 == 0)
		return 9;
	else
		return num % 9;
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
