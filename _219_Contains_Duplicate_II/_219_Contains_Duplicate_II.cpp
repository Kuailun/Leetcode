#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <unordered_set>
using namespace std;

bool containsNearbyDuplicate(vector<int>& nums, int k);

int main()
{
	vector<int> input;
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);
	input.push_back(1);
	input.push_back(2);
	input.push_back(3);

	bool output = containsNearbyDuplicate(input,3);
	cout << output << endl;

	system("pause");
}

bool containsNearbyDuplicate(vector<int>& nums, int k) {
	unordered_set<int> Mymap;
	for (int i = 0; i < nums.size(); i++) {
		if (Mymap.count(nums[i])) {
			return true;
			break;
		}
		if (i >= k) {
			Mymap.insert(nums[i]);
			Mymap.erase(nums[i - k]);
		}
		else {
			Mymap.insert(nums[i]);
		}
	}
	return false;
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
