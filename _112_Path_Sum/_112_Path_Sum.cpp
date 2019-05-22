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
bool hasPathSum(TreeNode* root, int sum);

int main()
{
	int target = -5;
	TreeNode* input1 = new TreeNode(-2);
	input1->left = new TreeNode(-3);
	//input1->right = new TreeNode(3);
	//input1->left->left = new TreeNode(4);
	//input1->left->right = new TreeNode(5);
	//input1->left->left->left = new TreeNode(8);
	//input1->left->left->right = new TreeNode(9);


	int output;

	output = hasPathSum(input1,target);
	cout << output << endl;
	system("pause");
}
bool hasPathSum(TreeNode* root, int sum)
{
	if (!root)
	{
		return false;
	}
	if (!root->left && !root->right && sum == root->val)
	{
		return true;
	}
	return hasPathSum(root->left, sum-root->val) || hasPathSum(root->right, sum-root->val);
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