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
vector<string> binaryTreePaths(TreeNode* root);

int main()
{
	TreeNode* input = new TreeNode(1);
	input->left = new TreeNode(2);
	input->right = new TreeNode(3);
	input->left->left = new TreeNode(5);
	input->left->right = new TreeNode(6);
	//input->left->right->left = new TreeNode(3);
	//input->left->right->right = new TreeNode(5);
	//input->right->left = new TreeNode(7);
	//input->right->right = new TreeNode(9);

	vector<string> common = binaryTreePaths(input);

	system("pause");
}
void pushVector(TreeNode* root, string current, vector<string>& list)
{
	if (!root)
	{
		return;
	}
	current = current + "->" + to_string(root->val);
	if (!root->left && !root->right)
	{		
		list.push_back(current);
	}
	if (root->left)
	{
		pushVector(root->left, current, list);
	}
	if (root->right)
	{
		pushVector(root->right, current, list);
	}
}
vector<string> binaryTreePaths(TreeNode* root) {
	vector<string> mList;

	if (!root)
	{
		return mList;
	}
	if (!root->left && !root->right)
	{
		mList.push_back(to_string(root->val));
		return mList;
	}
	if (root->left)
	{
		pushVector(root->left, to_string(root->val), mList);
	}
	if (root->right)
	{
		pushVector(root->right, to_string(root->val), mList);
	}
	return mList;
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