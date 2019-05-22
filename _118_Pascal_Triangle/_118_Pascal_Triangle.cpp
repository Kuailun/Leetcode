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
vector<vector<int>> generate(int numRows);

int main()
{
	int input = 4;


	vector<vector<int>> output;

	output = generate(input);

	system("pause");
}
vector<vector<int>> generate(int numRows)
{
	vector<vector<int>> v;
	for (int i = 1; i <= numRows; i++)
	{
		v.push_back(vector<int>(i, 0));
		v[i-1][0] = 1;
		v[i-1][i - 1] = 1;
		for (int j = 1; j < i-1; j++)
		{
			v[i-1][j] = v[i - 2][j - 1] + v[i - 2][j];
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