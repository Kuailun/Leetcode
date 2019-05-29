
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

uint32_t reverseBits(uint32_t n);

int main()
{
	uint32_t input=255,output;

	output=reverseBits(input);

	system("pause");
}

uint32_t reverseBits(uint32_t n) {
	uint64_t s = 0;
	int m = 32;
	while (m != 0)
	{
		m--;
		s = s*2 + n % 2;
		n = n / 2;
	}
	return s;
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
