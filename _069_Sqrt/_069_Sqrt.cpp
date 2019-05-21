#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int mySqrt(int x);

int main()
{
	int input=5;

	int output;

	output = mySqrt(input);
	std::cout << output;

	system("pause");
}

int mySqrt(int x)
{
	if (x == 1)
	{
		return 1;
	}
	double m = x;
	double l = (int)(m/2);
	double small = 1,big=m;
	while (l * l > m || (l + 1) * (l + 1) < m)
	{
		if (l * l > m)
		{
			big = l;
			l = (int)((l + small) / 2);
			continue;
		}
		if ((l + 1) * (l + 1) < m)
		{
			small = l;
			l = (int)((l + big) / 2);
			continue;
		}
	}
	if (l * l <= m&& (l + 1) * (l + 1) > m)
		return (int)l;
	else
		return (int)(l + 1);
	return (int)l;
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
