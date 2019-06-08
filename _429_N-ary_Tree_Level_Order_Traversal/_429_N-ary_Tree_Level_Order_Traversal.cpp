#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <string>
using namespace std;

class Node {
public:
	int val;
	vector<Node*> children;

	Node() {}

	Node(int _val, vector<Node*> _children) {
		val = _val;
		children = _children;
	}
};
void Record(Node* root, vector<vector<int>>& mData, int level)
{
	if (!root)
	{
		return;
	}
	if (mData.size() < level)
	{
		mData.push_back(vector<int>());
	}
	mData[level-1].push_back(root->val);
	for (int i = 0; i < root->children.size(); i++)
	{
		Record(root->children[i], mData, level + 1);
	}
}
vector<vector<int>> levelOrder(Node* root) {
	vector<vector<int>> mData;
	Record(root, mData, 1);
	return mData;
}
int main()
{
	Node* n = new Node(1, vector<Node*>());

	vector<vector<int>> output = levelOrder(n);
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
