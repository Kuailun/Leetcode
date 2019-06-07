#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
int sumof(TreeNode* root, bool isLeft)
{
	if (isLeft)
	{
		if (!root)
		{
			return 0;
		}
		if (!root->left && !root->right)
		{
			return root->val;
		}
		return sumof(root->left, true) + sumof(root->right, false);
	}
	else
	{
		if (!root)
		{
			return 0;
		}
		if (!root->left && !root->right)
		{
			return 0;
		}
		return sumof(root->left, true) + sumof(root->right, false);
	}
}
int sumOfLeftLeaves(TreeNode* root) {
	if (!root)
	{
		return 0;
	}
	if (!root->left && !root->right)
	{
		return 0;
	}
	return sumof(root->left, true) + sumof(root->right, false);
}
int main()
{
	TreeNode* head=new TreeNode(3);
	head->left = new TreeNode(9);
	int output = sumOfLeftLeaves(head);
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
