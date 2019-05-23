#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
using namespace std;

int majorityElement(vector<int>& nums);

int main()
{
	vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(1);
	input.push_back(1);
	input.push_back(2);
	int output;

	output = majorityElement(input);
	cout << output << endl;

	system("pause");
}

int majorityElement(vector<int>& nums) {
	if (nums.size() == 1)
	{
		return nums[0];
	}
	unordered_map<int, int> m;
	m[nums[0]] = 1;
	int index = 1;
	while (index < nums.size())
	{
		if (m.count(nums[index]) == 0)
		{
			m[nums[index]] = 1;
		}
		else
		{
			m[nums[index]]++;
		}
		if (m[nums[index]] > nums.size() / 2)
		{
			return nums[index];
		}
		index++;
	}
	return 0;
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
