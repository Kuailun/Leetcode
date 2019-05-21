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
bool isSymmetric(TreeNode* root);

int main()
{
	TreeNode* input1 = new TreeNode(0);
	input1->left = new TreeNode(2);
	input1->right = new TreeNode(2);


	bool output;

	output = isSymmetric(input1);
	cout << output << endl;
	system("pause");
}

bool isequal(TreeNode* left, TreeNode* right)
{
	if (left == NULL && right == NULL)
	{
		return true;
	}
	if (left == NULL || right == NULL)
	{
		return false;
	}
	if (left->val != right->val)
	{
		return false;
	}
	return isequal(left->left, right->right) && isequal(left->right, right->left);
}
bool isSymmetric(TreeNode* root)
{
	if (!root)
	{
		return true;
	}
	return isequal(root->left, root->right);
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
