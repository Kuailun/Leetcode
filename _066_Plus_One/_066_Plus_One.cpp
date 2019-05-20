#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

vector<int> plusOne(vector<int>& digits);

int main()
{
	vector<int> input;
	input.push_back(9);
	input.push_back(9);
	input.push_back(9);

	vector<int> output;

	output = plusOne(input);
	//std::cout << output;

	system("pause");
}

vector<int> plusOne(vector<int>& digits)
{
	if (digits.size() == 0 && digits[0] == 0)
	{
		digits[0] = 1;
		return digits;
	}

	int in = 1;
	int index = digits.size()-1;
	while (index >= 0)
	{
		if (digits[index] + in > 9)
		{
			digits[index] = 0;
			in = 1;
		}
		else
		{
			digits[index] = digits[index] + in;
			in = 0;
		}
		index--;
	}
	if (in == 1)
	{
		digits.insert(digits.begin(), 1);
	}
	return digits;
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
