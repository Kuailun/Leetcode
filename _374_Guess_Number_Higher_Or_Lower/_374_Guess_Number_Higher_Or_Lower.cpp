#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int guessNumber(int n) {
	long low = 1;
	long high = n;
	long mid = (low + high) / 2;
	int ret = 0;
	if (guess(low) == 0)
	{
		return low;
	}
	if (guess(high) == 0)
	{
		return high;
	}
	while (true)
	{
		ret = guess(mid);
		if (ret == -1)
		{
			high = mid;
			mid = (low + high) / 2;
			continue;
		}
		else if (ret == 1)
		{
			low = mid;
			mid = (low + high) / 2;
			continue;
		}
		else
		{
			return mid;
		}
	}
}
int main()
{
	int output = getSum(2, -1);
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
