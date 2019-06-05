#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

bool isPerfectSquare(int num) {
	long min = 1;
	long max = num;
	long mid = (min + max) / 2;
	while (true)
	{
		mid = (min + max) / 2;
		if ((mid + 1) * (mid + 1) < num)
		{
			min = mid;
			continue;
		}
		if (mid * mid > num)
		{
			max = mid;	
			continue;
		}
		if (mid * mid == num|| (mid+1) * (mid+1) == num)
		{
			return true;
		}
		if (mid * mid<num && (mid + 1) * (mid + 1)>num)
		{
			return false;
		}
	}
	return false;
}
int main()
{
	int input = 36;
	bool output = isPerfectSquare(input);
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
