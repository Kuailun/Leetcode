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
vector<vector<int>> levelOrderBottom(TreeNode* root);

int main()
{
	TreeNode* input1 = new TreeNode(0);
	input1->left = new TreeNode(2);
	input1->right = new TreeNode(2);


	vector<vector<int>> output;

	output = levelOrderBottom(input1);

	system("pause");
}
void getNum(vector<vector<int>>& v, TreeNode* r, int layer)
{
	if (r == NULL)
	{
		return;
	}
	int size = v.size();
	int nd = layer;
	if (size < nd+1)
	{
		v.push_back(vector<int>(1, 0));
		v[nd][0] = r->val;
	}
	else
	{
		v[nd].push_back(r->val);
	}
	if (r->left)
	{
		getNum(v, r->left,nd+1);
	}
	if(r->right)
	{
		getNum(v, r->right,nd+1);
	}	
	return;
}
vector<vector<int>> levelOrderBottom(TreeNode* root)
{
	vector<vector<int>> node;
	getNum(node, root, 0);
	reverse(node.begin(), node.end());
	return node;
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