#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

int findNthDigit(int n) {
	int current = 1;
	int ma = 9;
	while (n >= current*ma)
	{
		n = n - current*ma;
		ma *= 10;
		current++;
	}
	ma = ma / 10;
	int number = ma + n / current + 1;
	n = n % current;
	while (current - n != 0)
	{
		if (n == 0)
		{
			break;
		}
		number /= 10;
		n++;
	}
	return number % 10;
}
int main()
{
	int n=12;
	int output = findNthDigit(n);
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
