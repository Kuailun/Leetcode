#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}

};
TreeNode* sortedArrayToBST(vector<int>& nums);

int main()
{
	vector<int> input1;
	input1.push_back(-10);
	input1.push_back(-3);
	input1.push_back(0);
	input1.push_back(5);
	input1.push_back(9);


	TreeNode* output;

	output = sortedArrayToBST(input1);

	system("pause");
}
TreeNode* Get(vector<int>& n, int min, int max)
{
	if (min > max)
	{
		return NULL;
	}
	int mid = (min + max) / 2;
	TreeNode* node = new TreeNode(n[mid]);
	node->left = Get(n, min, mid - 1);
	node->right = Get(n, mid + 1, max);
	return node;
}
TreeNode* sortedArrayToBST(vector<int>& nums)
{
	if (nums.size() == 0)
	{
		return NULL;
	}
	return Get(nums, 0, nums.size()-1);
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