#include <iostream>
#include <algorithm>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;

int maxProfit(vector<int>& prices);

int main()
{
	vector<int> input;
	input.push_back(7);
	input.push_back(1);
	input.push_back(2);
	input.push_back(5);
	input.push_back(4);
	input.push_back(1);
	input.push_back(4);
	input.push_back(0);
	input.push_back(6);
	input.push_back(3); 
	int output;

	output = maxProfit(input);
	cout << output << endl;
	system("pause");
}
int maxProfit(vector<int>& prices)
{
	if (prices.size() == 0 || prices.size() == 1)
	{
		return 0;
	}
	int res = 0;
	int mmin = prices[0];
	for (int i = 1; i < prices.size(); i++)
	{
		res = max(res, prices[i] - mmin);
		mmin = min(mmin, prices[i]);
	}
	return res;
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