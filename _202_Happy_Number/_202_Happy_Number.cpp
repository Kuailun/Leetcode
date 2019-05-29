
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool isHappy(int n);

int main()
{
	int input = 999;


	bool output = isHappy(input);
	cout << output << endl;

	system("pause");
}

bool isHappy(int n) {
	int sum = n;
	int temp = sum;
	while (sum != 1)
	{
		temp = sum;
		sum = 0;
		while (temp != 0)
		{
			sum = sum + pow((temp % 10), 2);
			temp = temp / 10;
		}
		if (sum == 4)
		{
			return false;
		}
	}
	return true;
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
