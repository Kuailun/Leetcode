
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int reverse(int x);

int main()
{
	int input,output;
	
	//-2^31, 2^31-1, 0
	input = pow(2,31)-1;

	output = reverse(input);
	cout<<output;

	system("pause");
}

int reverse(int x)
{
	if (x == 0)
	{
		return 0;
	}
	if (x == -pow(2, 31))
	{
		return 0;
	}

	int sign = 0;
	int result = 0;
	if (x < 0)
	{
		x = -x;
		sign = 1;
	}

	result = x % 10;
	x = x / 10;

	while (x != 0)
	{
		if (result > (pow(2, 31) - 1) / 10)
		{
			return 0;
		}
		result = result * 10;

		if (x % 10 > (pow(2, 31) - 1 - result))
		{
			return 0;
		}
		result = result + x % 10;
		x = x / 10;
	}
	return pow(-1, sign)* result;
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
