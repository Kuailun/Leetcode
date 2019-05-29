
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int hammingWeight(uint32_t n);

int main()
{
	uint32_t input = 255, output;

	output = hammingWeight(input);

	system("pause");
}

int hammingWeight(uint32_t n) {
	int cnt = 0;
	while (n != 0)
	{
		if (n % 2 == 1)
			cnt++;
		n=n >> 1;
	}
	return cnt;
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
