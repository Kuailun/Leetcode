#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


int maxSubArray(vector<int>& nums);

int main()
{
	vector<int> input;
	input.push_back(-2);
	input.push_back(1);
	input.push_back(-3);
	input.push_back(4);
	input.push_back(-1);
	input.push_back(2);
	input.push_back(1);
	input.push_back(-5);
	input.push_back(4);

	int output;

	output = maxSubArray(input);
	cout << output;

	system("pause");
}

int maxSubArray(vector<int>& nums)
{
	if (nums.empty()) return 0;
	int ans = nums[0];
	int cur = 0;
	for (int i : nums) {
		if (cur > 0) {
			cur += i;
		}
		else {
			cur = i;
		}
		if (cur > ans) ans = cur;
	}
	return ans;
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
