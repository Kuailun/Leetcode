#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int climbStairs(int n);

int main()
{
	int input = 20;

	int output;

	output = climbStairs(input);
	std::cout << output;

	system("pause");
}

int climbStairs(int n)
{
	int a = 1, b = 2,temp,index=3;
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		while (index != n+1)
		{
			temp = b;
			b = a + b;
			a = temp;
			index++;
		}
		return b;
	}
	/*if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return climbStairs(n - 1) + climbStairs(n - 2);
	}*/
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
