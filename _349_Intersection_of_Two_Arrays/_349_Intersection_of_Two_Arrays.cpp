#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;

vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	int l = 0, r = 0;
	int temp;
	vector<int> ret;
	while (l != nums1.size() && r != nums2.size())
	{
		if (nums1[l] == nums2[r])
		{
			ret.push_back(nums1[l]);
			temp = nums1[l];
			while (l < nums1.size()&&nums1[l] == temp)
			{
				l++;
			}
			while (r < nums2.size()&&nums2[r] == temp)
			{
				r++;
			}
			continue;
		}
		else if (nums1[l] < nums2[r])
		{
			l++;
		}
		else if (nums1[l] > nums2[r])
		{
			r++;
		}
	}
	return ret;
}
int main()
{
	vector<int> input1;
	vector<int> input2;
	input1.push_back(1);
	input1.push_back(2);
	input1.push_back(2);
	input1.push_back(1);
	input2.push_back(1);
	input2.push_back(1);
	vector<int> output = intersection(input1, input2);
	system("pause");
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
