
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int rob(vector<int>& nums);

int main()
{
	vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);
	input.push_back(4);
	input.push_back(5);
	input.push_back(6);
	/*input.push_back(16);
	input.push_back(218);
	input.push_back(48);
	input.push_back(153);
	input.push_back(131);
	input.push_back(128);
	input.push_back(17);
	input.push_back(157);
	input.push_back(142);
	input.push_back(88);
	input.push_back(43);
	input.push_back(37);
	input.push_back(157);
	input.push_back(43);
	input.push_back(221);
	input.push_back(191);
	input.push_back(68);
	input.push_back(206);
	input.push_back(23);
	input.push_back(225);
	input.push_back(82);
	input.push_back(54);
	input.push_back(118);
	input.push_back(111);
	input.push_back(46);
	input.push_back(80);
	input.push_back(49);
	input.push_back(245);
	input.push_back(63);
	input.push_back(25);
	input.push_back(194);
	input.push_back(72);
	input.push_back(80);
	input.push_back(143);
	input.push_back(55);
	input.push_back(209);
	input.push_back(18);
	input.push_back(55);
	input.push_back(122);
	input.push_back(65);
	input.push_back(66);
	input.push_back(177);
	input.push_back(101);
	input.push_back(63);
	input.push_back(201);
	input.push_back(172);
	input.push_back(130);
	input.push_back(103);
	input.push_back(225);
	input.push_back(142);
	input.push_back(46);
	input.push_back(86);
	input.push_back(185);
	input.push_back(62);
	input.push_back(138);
	input.push_back(212);
	input.push_back(192);
	input.push_back(125);
	input.push_back(77);
	input.push_back(223);
	input.push_back(188);
	input.push_back(99);
	input.push_back(228);
	input.push_back(90);
	input.push_back(25);
	input.push_back(193);
	input.push_back(211);
	input.push_back(84);*/

	int output = rob(input);
	cout << output << endl;

	system("pause");
}

int rr(vector<int>& nums, int index)
{
	if (nums.size()-index == 1)
	{
		return nums[index+0];
	}
	if (nums.size()- index == 2)
	{
		return max(nums[index+0], nums[index+1]);
	}
	if (nums.size()- index == 3)
	{
		return max(nums[0+ index] + nums[2+ index], nums[1+ index]);
	}
	return max(nums[0 + index] + rr(nums, 2 + index), nums[1 + index] + rr(nums, 3 + index));
}
int rob(vector<int>& nums) {
	if (nums.size() == 0)
	{
		return 0;
	}
	if (nums.size() == 1)
	{
		return nums[0];
	}
	if (nums.size() == 2)
	{
		return max(nums[0], nums[1]);
	}
	vector<int> m=vector<int>(nums.size(),0);
	m[nums.size() - 1] = nums[nums.size() - 1];
	m[nums.size() - 2] = nums[nums.size() - 2];
	m[nums.size() - 3] = max(m[nums.size() - 2], nums[nums.size() - 3] + m[nums.size() - 1]);
	for (int i = nums.size() - 4; i >= 0; i--)
	{
		m[i] = max(max(m[i + 1], nums[i] + m[i + 2]), nums[i] + m[i + 3]);
	}
	return m[0];
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
