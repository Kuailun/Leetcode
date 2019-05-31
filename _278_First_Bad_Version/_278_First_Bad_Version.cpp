#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isBadVersion(int version);
int firstBadVersion(int n);

int main()
{
	int input=2;

	int output = firstBadVersion(input);
	cout << output << endl;

	system("pause");
}
bool isBadVersion(int version)
{
	int n = 1;
	if (version >= n)
		return true;
	else
		return false;
}
int firstBadVersion(int n) {
	long left = 1;
	long right = n;
	bool l = false;
	bool r = false;
	bool mid = false;

	if (isBadVersion(1))
		return 1;
	if (!isBadVersion(n - 1))
		return n;
	while (left < right)
	{
		if (!l & r && right - left == 1)
		{
			return right;
		}

		mid = isBadVersion((left + right + 1) / 2);
		if (mid)
		{
			right = (left + right + 1) / 2;
			r = mid;
		}
		if (!mid)
		{
			left = (left + right + 1) / 2;
			r = mid;
		}
	}
	return right;
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
