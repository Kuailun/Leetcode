
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target);

int main()
{
	vector<int> input,output;
	int target;

	input.push_back(2);
	input.push_back(11);
	input.push_back(7);
	input.push_back(5);

	target = 13;	
	output=twoSum(input, target);

	system("pause");
}

vector<int> twoSum(vector<int>& nums, int target)
{
	vector<int> sumSort = nums;
	vector<int> answer;

	sort(sumSort.begin(),sumSort.end());

	int left = 0;
	int right = nums.size() - 1;

	while (left < right)
	{
		if (sumSort[left] + sumSort[right] < target)
		{
			left++;
		}
		else if (sumSort[left] + sumSort[right] > target)
		{
			right--;
		}
		else
		{
			for (int i = 0; i < nums.size(); i++)
			{
				if (nums[i] == sumSort[left]|| nums[i] == sumSort[right])
				{
					answer.push_back(i);
				}
				if (answer.size() == 2)
				{
					return answer;
				}
			}
		}
	}
	return answer;
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
