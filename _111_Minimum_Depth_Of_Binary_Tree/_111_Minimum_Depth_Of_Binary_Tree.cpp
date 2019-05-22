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
int minDepth(TreeNode* root);

int main()
{
	TreeNode* input1 = new TreeNode(1);
	input1->left = new TreeNode(2);
	//input1->right = new TreeNode(3);
	//input1->left->left = new TreeNode(4);
	//input1->left->right = new TreeNode(5);
	//input1->left->left->left = new TreeNode(8);
	//input1->left->left->right = new TreeNode(9);


	int output;

	output = minDepth(input1);
	cout << output << endl;
	system("pause");
}
int minDepth(TreeNode* root)
{
	if (!root)
	{
		return 0;
	}
	if (root->left && root->right)
	{
		return min(minDepth(root->left), minDepth(root->right)) + 1;
	}		
	if (root->left)
	{
		return minDepth(root->left) + 1;
	}
	if (root->right)
	{
		return minDepth(root->right) + 1;
	}
	return 1;
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