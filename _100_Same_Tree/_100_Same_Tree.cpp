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
bool isSameTree(TreeNode* p, TreeNode* q);

int main()
{
	TreeNode *input1=new TreeNode(0);
	input1->left = new TreeNode(2);
	input1->right = new TreeNode(3);

	TreeNode* input2 = new TreeNode(0);
	input2->left = new TreeNode(2);
	input2->right = new TreeNode(3);
	input2->left->left = new TreeNode(1);

	bool output;

	output=isSameTree(input1,input2);
	cout << output << endl;
	system("pause");
}

bool isSameTree(TreeNode* p, TreeNode* q)
{
	if (p == NULL && q == NULL)
	{
		return true;
	}
	else if (p != NULL && q != NULL)
	{
		if (p->val == q->val)
		{
			return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
		}
		else
		{
			return false;
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
