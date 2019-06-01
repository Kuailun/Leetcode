#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

void moveZeroes(vector<int>& nums);

int main()
{
	vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(0);
	input.push_back(1);
	input.push_back(0);
	input.push_back(1);

	moveZeroes(input);

	system("pause");
}
void moveZeroes(vector<int>& nums) {
	for (int i = nums.size() - 1; i >= 0; i--)
	{
		if (nums[i] == 0)
		{
			nums.erase(nums.begin() + i);
			nums.push_back(0);
		}
	}
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
