#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;


int searchInsert(vector<int>& nums, int target);

int main()
{
	vector<int> input;

	input.push_back(1);
	input.push_back(3);
	input.push_back(5);
	input.push_back(6);

	int target=5;
	int output;

	output = searchInsert(input, target);
	cout << output;

	system("pause");
}

int searchInsert(vector<int>& nums, int target)
{
	if (nums.size() == 0)
	{
		return 0;
	}
	if (nums.size() == 1)
	{
		if (target <= nums[0])
			return 0;
		else return 1;
	}
	if (target > nums[nums.size() - 1])
	{
		return nums.size();
	}
	if (target <= nums[0])
	{
		return 0;
	}
	int left, right;
	for (int i = 0; i < nums.size() - 1;i++)
	{
		left = nums[i];
		right = nums[i + 1];

		if (left < target && target <= right)
		{
			return i + 1;
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
