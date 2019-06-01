#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool canWinNim(int n);

int main()
{
	int input =1348820612;


	bool output = canWinNim(input);
	cout << output << endl;

	system("pause");
}

bool iWin(int n, int me)
{
	if (n <= 3)
	{
		return me;
	}
	else
	{
		if(me==1)
			return iWin(n - 3, 1-me) || iWin(n - 2, 1-me) || iWin(n - 1, 1-me);
		return iWin(n - 3, 1 - me) && iWin(n - 2, 1 - me) && iWin(n - 1, 1 - me);
	}
}
bool canWinNim(int n) {
	return iWin(n, 1);
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
