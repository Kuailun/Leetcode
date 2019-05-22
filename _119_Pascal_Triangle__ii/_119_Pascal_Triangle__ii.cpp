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
vector<int> getRow(int rowIndex);

int main()
{
	int input = 4;


	vector<int> output;

	output = getRow(input);

	system("pause");
}
vector<int> getRow(int rowIndex)
{
	rowIndex++;
	if (rowIndex == 1)
	{
		return vector<int>(1, 1);
	}
	vector<int>v;
	for (int i = 0; i < rowIndex; i++)
	{
		if (v.size() < i + 1)
		{
			v.push_back(1);
		}
		for (int j = i-1; j >=1; j--)
		{
			v[j] = v[j - 1] + v[j];
		}
	}
	return v;
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