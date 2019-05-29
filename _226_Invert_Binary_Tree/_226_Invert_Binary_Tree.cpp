#include <iostream>
#include <algorithm>
#include <unordered_map>
using namespace std;


struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	
};
TreeNode* invertTree(TreeNode* root);

int main()
{
	TreeNode* input1=new TreeNode(4);
	input1->left = new TreeNode(2);
	input1->left->left = new TreeNode(1);
	input1->left->right = new TreeNode(3);
	input1->right = new TreeNode(7);
	input1->right->left = new TreeNode(6);
	input1->right->right = new TreeNode(9);

	TreeNode* output = invertTree(input1);

	system("pause");
}

TreeNode* invertTree(TreeNode* root) {
	if (!root)
	{
		return nullptr;
	}
	else
	{
		TreeNode* temp = root->left;
		root->left = invertTree(root->right);
		root->right = invertTree(temp);
		return root;
	}
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
