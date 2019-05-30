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
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q);

int main()
{
	TreeNode* input = new TreeNode(6);
	input->left = new TreeNode(2);
	input->right = new TreeNode(8);
	input->left->left = new TreeNode(0);
	input->left->right = new TreeNode(4);
	input->left->right->left = new TreeNode(3);
	input->left->right->right = new TreeNode(5);
	input->right->left = new TreeNode(7);
	input->right->right = new TreeNode(9);

	TreeNode* common = lowestCommonAncestor(input, new TreeNode(0), new TreeNode(5));

	system("pause");
}
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
	int val1 = p->val;
	int val2 = q->val;

	if (val1<root->val && val2>root->val|| val1>root->val && val2<root->val)
	{
		return root;
	}
	if (val1 == root->val || val2 == root->val)
	{
		return root;
	}
	if (val1 < root->val && val2 < root->val)
	{
		return lowestCommonAncestor(root->left, p, q);
	}
	else if (val1 > root->val && val2 > root->val)
	{
		return lowestCommonAncestor(root->right, p, q);
	}
	return NULL;
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