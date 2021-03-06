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
int maxDepth(TreeNode* root);

int main()
{
	TreeNode* input1 = new TreeNode(0);
	input1->left = new TreeNode(2);
	input1->right = new TreeNode(2);


	int output;

	output = maxDepth(input1);
	cout << output << endl;
	system("pause");
}

int maxDepth(TreeNode* root)
{
	if (!root)
	{
		return 0;
	}
	if (root->left == nullptr && root->right == nullptr)
	{
		return 1;
	}
	return 1 + max(maxDepth(root->left), maxDepth(root->right));
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
